
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imr_regs {scalar_t__ rmask; scalar_t__ wmask; int addr_hi; int addr_lo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct imr_regs *VAR_2)
{
 return !(VAR_2->rmask == VAR_0 &&
   VAR_2->wmask == VAR_1 &&
   FUNC_0(VAR_2->addr_lo) == 0 &&
   FUNC_0(VAR_2->addr_hi) == 0);
}
