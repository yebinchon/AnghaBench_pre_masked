
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int v_usecount; int v_vflag; scalar_t__ v_type; TYPE_1__* v_mount; } ;
struct inode {int i_nlink; } ;
struct TYPE_2__ {int * mnt_gjprovider; } ;


 scalar_t__ VAR_0 ;
 struct inode* FUNC_0 (struct vnode*) ;
 int VAR_1 ;
 int FUNC_1 (struct vnode*,int) ;

void
FUNC_2(struct vnode *VAR_2)
{
 struct inode *VAR_3;

 if (VAR_2->v_mount->mnt_gjprovider == ((void*)0))
  return;
 if (VAR_2->v_usecount < 2 || (VAR_2->v_vflag & VAR_1))
  return;
 VAR_3 = FUNC_0(VAR_2);
 if ((VAR_2->v_type == VAR_0 && VAR_3->i_nlink > 2) ||
     (VAR_2->v_type != VAR_0 && VAR_3->i_nlink > 1)) {
  return;
 }
 VAR_2->v_vflag |= VAR_1;

 FUNC_1(VAR_2, 1);
}
