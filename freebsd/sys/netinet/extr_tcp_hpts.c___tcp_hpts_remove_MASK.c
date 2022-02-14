
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_hpts_entry {int p_mtx; } ;
struct inpcb {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (int *) ;
 struct tcp_hpts_entry* FUNC_2 (struct inpcb*) ;
 int FUNC_3 (struct tcp_hpts_entry*,struct inpcb*,int,int) ;
 int FUNC_4 (struct tcp_hpts_entry*,struct inpcb*,int,int) ;
 struct tcp_hpts_entry* FUNC_5 (struct inpcb*) ;

void
FUNC_6(struct inpcb *VAR_2, int32_t VAR_3, int32_t VAR_4)
{
 struct tcp_hpts_entry *VAR_5;

 FUNC_0(VAR_2);
 if (VAR_3 & VAR_1) {
  VAR_5 = FUNC_2(VAR_2);
  FUNC_4(VAR_5, VAR_2, VAR_3, VAR_4);
  FUNC_1(&VAR_5->p_mtx);
 }
 if (VAR_3 & VAR_0) {
  VAR_5 = FUNC_5(VAR_2);
  FUNC_3(VAR_5, VAR_2, VAR_3, VAR_4);
  FUNC_1(&VAR_5->p_mtx);
 }
}
