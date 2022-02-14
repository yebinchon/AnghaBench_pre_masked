
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
struct TYPE_5__ {int ref_count; struct TYPE_5__* backing_object; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_2(vm_object_t VAR_1)
{
 vm_object_t VAR_2 = VAR_1->backing_object;

 FUNC_0(VAR_1);
 FUNC_0(VAR_2);

 if (VAR_2->ref_count != 1)
  return;

 FUNC_1(VAR_1, VAR_0);
}
