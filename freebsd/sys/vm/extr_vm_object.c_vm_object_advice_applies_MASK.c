
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
struct TYPE_3__ {int flags; scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool
FUNC_0(vm_object_t VAR_5, int VAR_6)
{

 if ((VAR_5->flags & VAR_4) != 0)
  return (0);
 if (VAR_6 != VAR_0)
  return (1);
 return ((VAR_5->type == VAR_1 || VAR_5->type == VAR_2) &&
     (VAR_5->flags & VAR_3) != 0);
}
