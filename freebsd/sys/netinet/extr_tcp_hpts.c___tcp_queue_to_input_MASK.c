
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_hpts_entry {int p_mtx; } ;
struct inpcb {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (struct inpcb*,struct tcp_hpts_entry*,int) ;
 int FUNC_1 (int *) ;
 struct tcp_hpts_entry* FUNC_2 (struct inpcb*) ;

int32_t
FUNC_3(struct inpcb *VAR_0, int VAR_1)
{
 struct tcp_hpts_entry *VAR_2;
 int32_t VAR_3;

 VAR_2 = FUNC_2(VAR_0);
 VAR_3 = FUNC_0(VAR_0, VAR_2, VAR_1);
 FUNC_1(&VAR_2->p_mtx);
 return (VAR_3);
}
