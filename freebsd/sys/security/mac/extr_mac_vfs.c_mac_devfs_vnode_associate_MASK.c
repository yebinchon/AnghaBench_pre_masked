
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_label; } ;
struct mount {int mnt_label; } ;
struct devfs_dirent {int de_label; } ;


 int FUNC_0 (int ,struct mount*,int ,struct devfs_dirent*,int ,struct vnode*,int ) ;
 int VAR_0 ;

void
FUNC_1(struct mount *VAR_1, struct devfs_dirent *VAR_2,
    struct vnode *VAR_3)
{

 FUNC_0(VAR_0, VAR_1, VAR_1->mnt_label,
     VAR_2, VAR_2->de_label, VAR_3, VAR_3->v_label);
}
