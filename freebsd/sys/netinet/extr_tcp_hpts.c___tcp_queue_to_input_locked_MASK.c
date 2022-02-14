
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_hpts_entry {scalar_t__ p_hpts_active; int p_direct_wake; } ;
struct inpcb {scalar_t__ inp_in_input; } ;
typedef int int32_t ;


 int FUNC_0 (struct tcp_hpts_entry*) ;
 int FUNC_1 (struct tcp_hpts_entry*,struct inpcb*,int) ;
 int FUNC_2 (struct tcp_hpts_entry*) ;

int
FUNC_3(struct inpcb *VAR_0, struct tcp_hpts_entry *VAR_1, int32_t VAR_2)
{
 int32_t VAR_3 = 0;

 FUNC_0(VAR_1);
 if (VAR_0->inp_in_input == 0) {

  FUNC_1(VAR_1, VAR_0, VAR_2);
  VAR_3 = 1;
  if (VAR_1->p_hpts_active == 0) {



   VAR_3 = 2;
   VAR_1->p_direct_wake = 1;
   FUNC_2(VAR_1);
  }
 } else if (VAR_1->p_hpts_active == 0) {
  VAR_3 = 4;
  VAR_1->p_direct_wake = 1;
  FUNC_2(VAR_1);
 }
 return (VAR_3);
}
