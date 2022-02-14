
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bo_flag; } ;
struct vnode {struct vm_object* v_object; TYPE_1__ v_bufobj; } ;
struct vm_object {scalar_t__ type; scalar_t__ ref_count; int flags; struct vnode* handle; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct vm_object*) ;
 int FUNC_6 (struct vm_object*) ;
 int VAR_4 ;
 int FUNC_7 (struct vm_object*) ;
 int FUNC_8 (struct vnode*,int ,int ,int ) ;
 int FUNC_9 (struct vm_object*,int ,int ,int ) ;
 int FUNC_10 (struct vm_object*,int) ;
 int FUNC_11 (struct vm_object*) ;
 int FUNC_12 (struct vm_object*) ;

void
FUNC_13(struct vnode *VAR_5)
{
 struct vm_object *VAR_6;

 VAR_6 = VAR_5->v_object;
 if (VAR_6 == ((void*)0) || VAR_6->handle != VAR_5)
  return;
 FUNC_0(VAR_5, "vnode_destroy_vobject");
 FUNC_5(VAR_6);
 FUNC_4(VAR_6->type == VAR_2);
 FUNC_7(VAR_6);
 if (VAR_6->ref_count == 0) {



  if ((VAR_6->flags & VAR_3) == 0) {
   FUNC_10(VAR_6, VAR_3);




   FUNC_9(VAR_6, 0, 0, VAR_1);
   FUNC_6(VAR_6);

   FUNC_8(VAR_5, VAR_4, 0, 0);

   FUNC_1(&VAR_5->v_bufobj);
   VAR_5->v_bufobj.bo_flag |= VAR_0;
   FUNC_2(&VAR_5->v_bufobj);

   FUNC_5(VAR_6);
   FUNC_11(VAR_6);
  } else {






   VAR_5->v_object = ((void*)0);
   FUNC_6(VAR_6);
  }
 } else {



  FUNC_12(VAR_6);
  FUNC_6(VAR_6);
 }
 FUNC_3(VAR_5->v_object == ((void*)0), ("vp %p obj %p", VAR_5, VAR_5->v_object));
}
