
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct etnaviv_cmdbuf {int user_size; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct etnaviv_cmdbuf*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct etnaviv_cmdbuf *VAR_1,
 u32 VAR_2, u32 VAR_3)
{
 VAR_1->user_size = FUNC_0(VAR_1->user_size, 8);

 FUNC_1(VAR_1, VAR_0);
 FUNC_1(VAR_1, FUNC_2(VAR_2) | FUNC_3(VAR_3));
}
