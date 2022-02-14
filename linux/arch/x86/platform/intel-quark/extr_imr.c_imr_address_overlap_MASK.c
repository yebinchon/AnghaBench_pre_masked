
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imr_regs {int addr_hi; int addr_lo; } ;
typedef scalar_t__ phys_addr_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(phys_addr_t VAR_0, struct imr_regs *VAR_1)
{
 return VAR_0 >= FUNC_0(VAR_1->addr_lo) && VAR_0 <= FUNC_0(VAR_1->addr_hi);
}
