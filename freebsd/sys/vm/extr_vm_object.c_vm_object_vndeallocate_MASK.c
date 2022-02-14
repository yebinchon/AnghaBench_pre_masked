
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
struct vnode {int dummy; } ;
struct TYPE_5__ {scalar_t__ type; int ref_count; scalar_t__ handle; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_4 (struct vnode*) ;

__attribute__((used)) static void
FUNC_5(vm_object_t VAR_2)
{
 struct vnode *VAR_3 = (struct vnode *) VAR_2->handle;

 FUNC_0(VAR_2->type == VAR_0,
     ("vm_object_vndeallocate: not a vnode object"));
 FUNC_0(VAR_3 != ((void*)0), ("vm_object_vndeallocate: missing vp"));

 if (FUNC_2(&VAR_2->ref_count) &&
     !VAR_1)
  FUNC_3(VAR_2);

 FUNC_1(VAR_2);

 FUNC_4(VAR_3);
}
