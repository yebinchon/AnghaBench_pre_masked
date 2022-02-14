
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef uintptr_t uint8_t ;
typedef int uint32_t ;
typedef int u_int8_t ;
typedef uintptr_t tcp_seq ;
struct in_conninfo {int inc_flags; uintptr_t inc_faddr; uintptr_t inc_laddr; uintptr_t inc6_faddr; uintptr_t inc6_laddr; uintptr_t inc_fport; uintptr_t inc_lport; } ;
typedef int secmod ;
typedef int irs ;
typedef int flags ;
typedef int SIPHASH_CTX ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,uintptr_t*) ;
 int FUNC_3 (int *,uintptr_t*,int) ;

__attribute__((used)) static uint32_t
FUNC_4(struct in_conninfo *VAR_0, tcp_seq VAR_1, uint8_t VAR_2,
    uint8_t *VAR_3, uintptr_t VAR_4)
{
 SIPHASH_CTX VAR_5;
 uint32_t VAR_6[2];

 FUNC_0(&VAR_5);
 FUNC_2(&VAR_5, VAR_3);
 switch (VAR_0->inc_flags & 128) {
 }
 FUNC_3(&VAR_5, &VAR_0->inc_fport, sizeof(VAR_0->inc_fport));
 FUNC_3(&VAR_5, &VAR_0->inc_lport, sizeof(VAR_0->inc_lport));
 FUNC_3(&VAR_5, &VAR_1, sizeof(VAR_1));
 FUNC_3(&VAR_5, &VAR_2, sizeof(VAR_2));
 FUNC_3(&VAR_5, &VAR_4, sizeof(VAR_4));
 FUNC_1((u_int8_t *)&VAR_6, &VAR_5);

 return (VAR_6[0] ^ VAR_6[1]);
}
