
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_hpts_entry {int p_mtx; } ;
struct inpcb {scalar_t__ inp_in_hpts; int inp_hpts_cpu_set; int inp_input_cpu_set; scalar_t__ inp_in_input; void* inp_input_cpu; void* inp_hpts_cpu; } ;
typedef int int32_t ;


 int FUNC_0 (struct inpcb*) ;
 void* FUNC_1 (struct inpcb*) ;
 int FUNC_2 (int *) ;
 struct tcp_hpts_entry* FUNC_3 (struct inpcb*) ;
 struct tcp_hpts_entry* FUNC_4 (struct inpcb*) ;

void
FUNC_5(struct inpcb *VAR_0, int32_t VAR_1)
{
 struct tcp_hpts_entry *VAR_2;

 FUNC_0(VAR_0);
 VAR_2 = FUNC_3(VAR_0);
 if ((VAR_0->inp_in_hpts == 0) &&
     (VAR_0->inp_hpts_cpu_set == 0)) {
  VAR_0->inp_hpts_cpu = FUNC_1(VAR_0);
  VAR_0->inp_hpts_cpu_set = 1;
 }
 FUNC_2(&VAR_2->p_mtx);
 VAR_2 = FUNC_4(VAR_0);
 if ((VAR_0->inp_input_cpu_set == 0) &&
     (VAR_0->inp_in_input == 0)) {
  VAR_0->inp_input_cpu = FUNC_1(VAR_0);
  VAR_0->inp_input_cpu_set = 1;
 }
 FUNC_2(&VAR_2->p_mtx);
}
