
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {int (* drain_pebs ) (struct pt_regs*) ;} ;


 int FUNC_0 (struct pt_regs*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline void FUNC_1(void)
{
 struct pt_regs VAR_1;

 VAR_0.drain_pebs(&VAR_1);
}
