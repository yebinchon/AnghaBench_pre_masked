
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_prom64_registers {int dummy; } ;
struct jbusmc_dimm_group {unsigned long index; unsigned long base_addr; int size; struct jbusmc* controller; } ;
struct jbusmc {unsigned long portid; struct jbusmc_dimm_group* dimm_groups; } ;


 int FUNC_0 (unsigned long,struct linux_prom64_registers const*,int) ;

__attribute__((used)) static void FUNC_1(struct jbusmc *VAR_0,
         unsigned long VAR_1,
         const struct linux_prom64_registers *VAR_2,
         int VAR_3)
{
 struct jbusmc_dimm_group *VAR_4 = &VAR_0->dimm_groups[VAR_1];

 VAR_4->controller = VAR_0;
 VAR_4->index = VAR_1;

 VAR_4->base_addr = (VAR_0->portid * (64UL * 1024 * 1024 * 1024));
 VAR_4->base_addr += (VAR_1 * (8UL * 1024 * 1024 * 1024));
 VAR_4->size = FUNC_0(VAR_4->base_addr, VAR_2, VAR_3);
}
