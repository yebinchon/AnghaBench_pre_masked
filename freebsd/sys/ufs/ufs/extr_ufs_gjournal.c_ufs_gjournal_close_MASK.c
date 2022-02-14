
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int v_vflag; TYPE_1__* v_mount; } ;
struct inode {scalar_t__ i_nlink; } ;
struct TYPE_2__ {int * mnt_gjprovider; } ;


 struct inode* FUNC_0 (struct vnode*) ;
 int VAR_0 ;
 int FUNC_1 (struct vnode*,int) ;

void
FUNC_2(struct vnode *VAR_1)
{
 struct inode *VAR_2;

 if (VAR_1->v_mount->mnt_gjprovider == ((void*)0))
  return;
 if (!(VAR_1->v_vflag & VAR_0))
  return;
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2->i_nlink > 0)
  return;
 FUNC_1(VAR_1, -1);
}
