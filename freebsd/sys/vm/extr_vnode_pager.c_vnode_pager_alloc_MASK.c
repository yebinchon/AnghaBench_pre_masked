
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_ooffset_t ;
typedef TYPE_4__* vm_object_t ;
struct vnode {scalar_t__ v_usecount; int v_vflag; TYPE_4__* v_object; } ;
struct ucred {int dummy; } ;
struct TYPE_14__ {int dr_policy; } ;
struct TYPE_12__ {scalar_t__ writemappings; int vnp_size; } ;
struct TYPE_13__ {TYPE_1__ vnp; } ;
struct TYPE_15__ {int ref_count; int type; void* handle; TYPE_3__ domain; TYPE_2__ un_pager; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_7 (int*) ;
 int FUNC_8 (int*,int ) ;
 int FUNC_9 (int ) ;
 TYPE_4__* FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_4__*,int ) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*,int ) ;
 int VAR_4 ;
 int FUNC_14 (struct vnode*) ;

vm_object_t
FUNC_15(void *VAR_5, vm_ooffset_t VAR_6, vm_prot_t VAR_7,
    vm_ooffset_t VAR_8, struct ucred *VAR_9)
{
 vm_object_t VAR_10;
 struct vnode *VAR_11;




 if (VAR_5 == ((void*)0))
  return (((void*)0));

 VAR_11 = (struct vnode *)VAR_5;
 FUNC_0(VAR_11, "vnode_pager_alloc");
 FUNC_1(VAR_11->v_usecount != 0, ("vnode_pager_alloc: no vnode reference"));
retry:
 VAR_10 = VAR_11->v_object;

 if (VAR_10 == ((void*)0)) {



  VAR_10 = FUNC_10(VAR_1,
      FUNC_2(FUNC_9(VAR_6)));

  VAR_10->un_pager.vnp.vnp_size = VAR_6;
  VAR_10->un_pager.vnp.writemappings = 0;
  VAR_10->domain.dr_policy = VAR_4;
  VAR_10->handle = VAR_5;
  if ((VAR_11->v_vflag & VAR_3) != 0) {
   FUNC_5(VAR_10);
   FUNC_13(VAR_10, VAR_2);
   FUNC_6(VAR_10);
  }
  FUNC_3(VAR_11);
  if (VAR_11->v_object != ((void*)0)) {



   FUNC_4(VAR_11);
   FUNC_5(VAR_10);
   FUNC_1(VAR_10->ref_count == 1,
       ("leaked ref %p %d", VAR_10, VAR_10->ref_count));
   VAR_10->type = VAR_0;
   FUNC_8(&VAR_10->ref_count, 0);
   FUNC_6(VAR_10);
   FUNC_12(VAR_10);
   goto retry;
  }
  VAR_11->v_object = VAR_10;
  FUNC_4(VAR_11);
 } else {
  FUNC_5(VAR_10);
  FUNC_7(&VAR_10->ref_count);



  FUNC_6(VAR_10);
 }
 FUNC_14(VAR_11);
 return (VAR_10);
}
