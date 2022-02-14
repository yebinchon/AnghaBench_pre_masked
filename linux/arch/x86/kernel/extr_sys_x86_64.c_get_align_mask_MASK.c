
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int flags; unsigned long mask; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static unsigned long FUNC_1(void)
{

 if (VAR_2.flags < 0 || !(VAR_2.flags & (2 - FUNC_0())))
  return 0;

 if (!(VAR_1->flags & VAR_0))
  return 0;

 return VAR_2.mask;
}
