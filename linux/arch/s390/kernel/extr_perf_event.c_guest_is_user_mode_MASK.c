
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_3__ {unsigned long mask; } ;
struct TYPE_4__ {TYPE_1__ gpsw; } ;


 unsigned long VAR_0 ;
 TYPE_2__* FUNC_0 (struct pt_regs*) ;

__attribute__((used)) static unsigned long FUNC_1(struct pt_regs *VAR_1)
{
 return FUNC_0(VAR_1)->gpsw.mask & VAR_0;
}
