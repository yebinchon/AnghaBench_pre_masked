
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct inpcb {int inp_input_cpu; int inp_hpts_cpu; scalar_t__ inp_hpts_cpu_set; scalar_t__ inp_input_cpu_set; } ;


 int FUNC_0 () ;
 int VAR_0 ;

__attribute__((used)) static uint16_t
FUNC_1(struct inpcb *VAR_1){



 uint16_t VAR_2;
 uint32_t VAR_3;





 if (VAR_1->inp_input_cpu_set) {
  return (VAR_1->inp_input_cpu);
 } else if (VAR_1->inp_hpts_cpu_set) {
  return (VAR_1->inp_hpts_cpu);
 }

 VAR_3 = FUNC_0();
 VAR_2 = (VAR_3 & 0xffff) % VAR_0;
 return (VAR_2);
}
