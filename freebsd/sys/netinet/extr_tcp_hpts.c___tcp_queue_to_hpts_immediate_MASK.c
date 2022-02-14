
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_hpts_entry {int p_mtx; } ;
struct inpcb {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (int *) ;
 struct tcp_hpts_entry* FUNC_2 (struct inpcb*) ;
 int FUNC_3 (struct inpcb*,struct tcp_hpts_entry*,int,int ) ;

int
FUNC_4(struct inpcb *VAR_0, int32_t VAR_1)
{
 int32_t VAR_2;
 struct tcp_hpts_entry *VAR_3;

 FUNC_0(VAR_0);
 VAR_3 = FUNC_2(VAR_0);
 VAR_2 = FUNC_3(VAR_0, VAR_3, VAR_1, 0);
 FUNC_1(&VAR_3->p_mtx);
 return (VAR_2);
}
