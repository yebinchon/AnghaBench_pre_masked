
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_fpu_soft_struct {int dummy; } ;
struct sh_fpu_hard_struct {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

void FUNC_0(void)
{
 if (VAR_2.flags & VAR_0)
  VAR_3 = sizeof(struct sh_fpu_hard_struct);
 else if (VAR_1)
  VAR_3 = sizeof(struct sh_fpu_soft_struct);
 else
  VAR_3 = 0;
}
