
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_prot_t ;
typedef int vm_ooffset_t ;
typedef TYPE_1__* vm_object_t ;
struct vnode {scalar_t__ v_type; TYPE_1__* v_object; } ;
struct vattr {int va_flags; scalar_t__ va_nlink; int va_size; } ;
struct ucred {int dummy; } ;
struct thread {struct ucred* td_ucred; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_9__ {scalar_t__ type; struct vnode* handle; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_14 ;
 int FUNC_4 (struct vnode*,struct vattr*,struct ucred*) ;
 scalar_t__ VAR_15 ;
 int FUNC_5 (struct ucred*,struct vnode*,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct vnode*,struct ucred*) ;
 int FUNC_8 (struct vnode*,int ,struct thread*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 TYPE_1__* FUNC_11 (scalar_t__,struct vnode*,int ,int,int ,struct ucred*) ;
 int FUNC_12 (TYPE_1__*,int ,int ) ;
 int FUNC_13 (struct vnode*) ;

int
FUNC_14(struct thread *VAR_16, vm_size_t VAR_17,
    vm_prot_t VAR_18, vm_prot_t *VAR_19, int *VAR_20,
    struct vnode *VAR_21, vm_ooffset_t *VAR_22, vm_object_t *VAR_23,
    boolean_t *VAR_24)
{
 struct vattr VAR_25;
 vm_object_t VAR_26;
 vm_ooffset_t VAR_27;
 struct ucred *VAR_28;
 int VAR_29, VAR_30;
 bool VAR_31;

 VAR_28 = VAR_16->td_ucred;
 VAR_31 = (*VAR_19 & VAR_14) != 0 &&
     (*VAR_20 & VAR_8) != 0;
 if ((VAR_29 = FUNC_8(VAR_21, VAR_6, VAR_16)) != 0)
  return (VAR_29);
 FUNC_0(VAR_21);
 VAR_27 = *VAR_22;
 VAR_30 = *VAR_20;
 VAR_26 = VAR_21->v_object;
 if (VAR_21->v_type == VAR_15) {



  if (VAR_26 == ((void*)0)) {
   VAR_29 = VAR_1;
   goto done;
  }
  if (VAR_26->type == VAR_11 && VAR_26->handle != VAR_21) {
   FUNC_13(VAR_21);
   VAR_21 = (struct vnode *)VAR_26->handle;




   VAR_29 = FUNC_8(VAR_21, VAR_6, VAR_16);
   if (VAR_29 != 0)
    return (VAR_29);
  }
  if (VAR_31) {
   *VAR_24 = VAR_13;
   FUNC_12(VAR_26, 0, VAR_17);
  }
 } else {
  VAR_29 = VAR_1;
  goto done;
 }
 if ((VAR_29 = FUNC_4(VAR_21, &VAR_25, VAR_28)))
  goto done;






 if ((VAR_30 & VAR_8) != 0) {
  if ((VAR_25.va_flags & (VAR_12|VAR_5|VAR_0)) != 0) {
   if (VAR_18 & VAR_14) {
    VAR_29 = VAR_3;
    goto done;
   }
   *VAR_19 &= ~VAR_14;
  }
 }





 VAR_17 = FUNC_6(VAR_25.va_size);
 if (VAR_25.va_nlink == 0)
  VAR_30 |= VAR_7;
 if (VAR_26->type == VAR_11) {
  VAR_26 = FUNC_11(VAR_11, VAR_21, VAR_17, VAR_18, VAR_27,
      VAR_28);
  if (VAR_26 == ((void*)0)) {
   VAR_29 = VAR_2;
   goto done;
  }
 } else {
  FUNC_1(VAR_26->type == VAR_9 || VAR_26->type == VAR_10,
      ("wrong object type"));
  FUNC_2(VAR_26);
  FUNC_10(VAR_26);



  FUNC_3(VAR_26);
 }
 *VAR_23 = VAR_26;
 *VAR_20 = VAR_30;

 FUNC_7(VAR_21, VAR_28);

done:
 if (VAR_29 != 0 && *VAR_24) {
  *VAR_24 = VAR_4;
  FUNC_12(VAR_26, VAR_17, 0);
 }
 FUNC_13(VAR_21);
 return (VAR_29);
}
