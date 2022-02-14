
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct tcpcb {int t_inpcb; } ;
struct tcp_hpts_entry {scalar_t__ p_hpts_active; int p_direct_wake; int p_mtx; } ;
struct inpcb {scalar_t__ inp_in_input; int inp_hpts_drop_reas; } ;
typedef int int32_t ;


 int FUNC_0 (struct tcp_hpts_entry*,struct inpcb*,int ) ;
 struct tcpcb* FUNC_1 (struct inpcb*) ;
 int FUNC_2 (int *) ;
 struct tcp_hpts_entry* FUNC_3 (int ) ;
 int FUNC_4 (struct tcp_hpts_entry*) ;

void
FUNC_5(struct inpcb *VAR_0, uint16_t VAR_1, int32_t VAR_2)
{
 struct tcp_hpts_entry *VAR_3;
 struct tcpcb *VAR_4;

 VAR_4 = FUNC_1(VAR_0);
 VAR_3 = FUNC_3(VAR_4->t_inpcb);
 if (VAR_0->inp_in_input == 0) {

  FUNC_0(VAR_3, VAR_0, VAR_2);
  if (VAR_3->p_hpts_active == 0) {



   VAR_3->p_direct_wake = 1;
   FUNC_4(VAR_3);
  }
 } else if (VAR_3->p_hpts_active == 0) {
  VAR_3->p_direct_wake = 1;
  FUNC_4(VAR_3);
 }
 VAR_0->inp_hpts_drop_reas = VAR_1;
 FUNC_2(&VAR_3->p_mtx);
}
