
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef TYPE_3__* vm_object_t ;
struct vnode {int dummy; } ;
struct mount {int dummy; } ;
struct TYPE_8__ {scalar_t__ writemappings; } ;
struct TYPE_9__ {TYPE_1__ vnp; } ;
struct TYPE_10__ {scalar_t__ type; struct vnode* handle; TYPE_2__ un_pager; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct vnode*,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct mount*) ;
 int FUNC_6 (struct vnode*,int) ;
 int FUNC_7 (struct vnode*,struct mount**,int ) ;
 int FUNC_8 (TYPE_3__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_9(vm_object_t VAR_4, vm_offset_t VAR_5,
    vm_offset_t VAR_6)
{
 struct vnode *VAR_7;
 struct mount *VAR_8;
 vm_offset_t VAR_9;

 FUNC_0(VAR_4);





 if (VAR_4->type != VAR_2) {
  FUNC_1(VAR_4);
  return;
 }





 VAR_9 = VAR_6 - VAR_5;
 if (VAR_4->un_pager.vnp.writemappings != VAR_9) {
  VAR_4->un_pager.vnp.writemappings -= VAR_9;
  FUNC_1(VAR_4);
  return;
 }

 VAR_7 = VAR_4->handle;
 FUNC_4(VAR_7);
 FUNC_1(VAR_4);
 VAR_8 = ((void*)0);
 FUNC_7(VAR_7, &VAR_8, VAR_3);
 FUNC_6(VAR_7, VAR_1 | VAR_0);







 FUNC_8(VAR_4, VAR_6, VAR_5);
 FUNC_2(VAR_7, 0);
 FUNC_3(VAR_7);
 if (VAR_8 != ((void*)0))
  FUNC_5(VAR_8);
}
