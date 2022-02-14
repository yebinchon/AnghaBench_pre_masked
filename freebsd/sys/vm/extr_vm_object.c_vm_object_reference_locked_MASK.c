
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
struct vnode {int dummy; } ;
struct TYPE_4__ {scalar_t__ type; struct vnode* handle; int ref_count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vnode*) ;

void
FUNC_3(vm_object_t VAR_1)
{
 struct vnode *VAR_2;

 FUNC_0(VAR_1);
 FUNC_1(&VAR_1->ref_count);
 if (VAR_1->type == VAR_0) {
  VAR_2 = VAR_1->handle;
  FUNC_2(VAR_2);
 }
}
