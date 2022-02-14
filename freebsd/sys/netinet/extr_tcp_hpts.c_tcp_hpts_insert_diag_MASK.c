
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timeval {int dummy; } ;
struct tcp_hpts_entry {int p_mtx; int p_nxt_slot; } ;
struct inpcb {int dummy; } ;
struct hpts_diag {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tcp_hpts_entry*,struct inpcb*,int ,int ,struct hpts_diag*,struct timeval*) ;
 struct tcp_hpts_entry* FUNC_4 (struct inpcb*) ;

uint32_t
FUNC_5(struct inpcb *VAR_0, uint32_t VAR_1, int32_t VAR_2, struct hpts_diag *VAR_3)
{
 struct tcp_hpts_entry *VAR_4;
 uint32_t VAR_5;
 struct timeval VAR_6;






 FUNC_0(VAR_0);
 VAR_4 = FUNC_4(VAR_0);
 FUNC_1(&VAR_6);
 FUNC_3(VAR_4, VAR_0, VAR_1, VAR_2, VAR_3, &VAR_6);
 VAR_5 = VAR_4->p_nxt_slot;
 FUNC_2(&VAR_4->p_mtx);
 return (VAR_5);
}
