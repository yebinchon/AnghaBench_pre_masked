
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_prom64_registers {int dummy; } ;
struct jbusmc {int mc_reg_1; int num_dimm_groups; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct jbusmc*,int,struct linux_prom64_registers const*,int) ;

__attribute__((used)) static void FUNC_1(struct jbusmc *VAR_2,
      const struct linux_prom64_registers *VAR_3,
      int VAR_4)
{
 if (VAR_2->mc_reg_1 & VAR_0) {
  FUNC_0(VAR_2, 0, VAR_3, VAR_4);
  VAR_2->num_dimm_groups++;
 }
 if (VAR_2->mc_reg_1 & VAR_1) {
  FUNC_0(VAR_2, 1, VAR_3, VAR_4);
  VAR_2->num_dimm_groups++;
 }
}
