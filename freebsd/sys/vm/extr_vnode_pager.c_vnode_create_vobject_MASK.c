
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_ooffset_t ;
typedef TYPE_1__* vm_object_t ;
struct vnode {TYPE_1__* v_object; } ;
struct vattr {scalar_t__ va_size; } ;
struct thread {int td_ucred; } ;
typedef scalar_t__ off_t ;
struct TYPE_5__ {int ref_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct vnode*,struct vattr*,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct vnode*) ;
 scalar_t__ FUNC_7 (struct vnode*,int *) ;
 TYPE_1__* FUNC_8 (struct vnode*,scalar_t__,int ,int ,int ) ;
 int FUNC_9 (struct vnode*) ;

int
FUNC_10(struct vnode *VAR_2, off_t VAR_3, struct thread *VAR_4)
{
 vm_object_t VAR_5;
 vm_ooffset_t VAR_6 = VAR_3;
 struct vattr VAR_7;

 if (!FUNC_7(VAR_2, ((void*)0)) && FUNC_6(VAR_2) == VAR_0)
  return (0);

 VAR_5 = VAR_2->v_object;
 if (VAR_5 != ((void*)0))
  return (0);

 if (VAR_6 == 0) {
  if (FUNC_7(VAR_2, ((void*)0))) {
   VAR_6 = FUNC_0(VAR_1);
  } else {
   if (FUNC_4(VAR_2, &VAR_7, VAR_4->td_ucred))
    return (0);
   VAR_6 = VAR_7.va_size;
  }
 }

 VAR_5 = FUNC_8(VAR_2, VAR_6, 0, 0, VAR_4->td_ucred);




 FUNC_2(VAR_5);
 FUNC_5(&VAR_5->ref_count);
 FUNC_3(VAR_5);
 FUNC_9(VAR_2);

 FUNC_1(VAR_2->v_object != ((void*)0), ("vnode_create_vobject: NULL object"));

 return (0);
}
