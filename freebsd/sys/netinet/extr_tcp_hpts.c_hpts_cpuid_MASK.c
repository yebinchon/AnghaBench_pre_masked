
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
struct inpcb {int inp_input_cpu; int inp_hpts_cpu; size_t inp_flowid; scalar_t__ inp_flowtype; size_t inp_numa_domain; scalar_t__ inp_hpts_cpu_set; scalar_t__ inp_input_cpu_set; } ;
struct hpts_domain_info {int* cpu; size_t count; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct hpts_domain_info* VAR_3 ;
 int FUNC_0 (struct inpcb*) ;
 int VAR_4 ;
 int FUNC_1 (size_t,scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static uint16_t
FUNC_2(struct inpcb *VAR_6){
 u_int VAR_7;
 if (VAR_6->inp_input_cpu_set) {
  return (VAR_6->inp_input_cpu);
 } else if (VAR_6->inp_hpts_cpu_set) {
  return (VAR_6->inp_hpts_cpu);
 }
 if (VAR_6->inp_flowtype == VAR_0)
  return (FUNC_0(VAR_6));
  VAR_7 = VAR_6->inp_flowid % VAR_4;

 return (VAR_7);

}
