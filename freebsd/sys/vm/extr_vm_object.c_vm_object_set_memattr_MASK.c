
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef int vm_memattr_t ;
struct TYPE_5__ {int type; int memattr; int memq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,TYPE_1__*) ;

int
FUNC_3(vm_object_t VAR_3, vm_memattr_t VAR_4)
{

 FUNC_1(VAR_3);
 switch (VAR_3->type) {
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  if (!FUNC_0(&VAR_3->memq))
   return (VAR_0);
  break;
 case 135:
  return (VAR_1);
 default:
  FUNC_2("vm_object_set_memattr: object %p is of undefined type",
      VAR_3);
 }
 VAR_3->memattr = VAR_4;
 return (VAR_2);
}
