
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; TYPE_2__* v_mount; } ;
struct vattr {int va_size; } ;
struct thread {int td_ucred; } ;
struct swapon_args {int name; } ;
struct nameidata {struct vnode* ni_vp; } ;
struct TYPE_4__ {TYPE_1__* mnt_vfc; } ;
struct TYPE_3__ {int vfc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_6 ;
 int FUNC_1 (struct nameidata*,int ,int,int ,int ,struct thread*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct vnode*,struct vattr*,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (struct nameidata*) ;
 int FUNC_4 (struct thread*,int ) ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct thread*,struct vnode*,int) ;
 int * VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct vnode*,int*) ;
 int FUNC_10 (struct vnode*) ;

int
FUNC_11(struct thread *VAR_13, struct swapon_args *VAR_14)
{
 struct vattr VAR_15;
 struct vnode *VAR_16;
 struct nameidata VAR_17;
 int VAR_18;

 VAR_18 = FUNC_4(VAR_13, VAR_7);
 if (VAR_18)
  return (VAR_18);

 FUNC_7(&VAR_12);





 if (VAR_11 == ((void*)0)) {
  VAR_18 = VAR_2;
  goto done;
 }

 FUNC_1(&VAR_17, VAR_5, VAR_4 | VAR_3 | VAR_0, VAR_8,
     VAR_14->name, VAR_13);
 VAR_18 = FUNC_3(&VAR_17);
 if (VAR_18)
  goto done;

 FUNC_0(&VAR_17, VAR_6);
 VAR_16 = VAR_17.ni_vp;

 if (FUNC_9(VAR_16, &VAR_18)) {
  VAR_18 = FUNC_5(VAR_16);
 } else if (VAR_16->v_type == VAR_10 &&
     (VAR_16->v_mount->mnt_vfc->vfc_flags & VAR_9) != 0 &&
     (VAR_18 = FUNC_2(VAR_16, &VAR_15, VAR_13->td_ucred)) == 0) {




  VAR_18 = FUNC_6(VAR_13, VAR_16, VAR_15.va_size / VAR_1);
 }

 if (VAR_18)
  FUNC_10(VAR_16);
done:
 FUNC_8(&VAR_12);
 return (VAR_18);
}
