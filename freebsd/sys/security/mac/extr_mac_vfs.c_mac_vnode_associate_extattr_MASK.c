
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_label; } ;
struct mount {int mnt_label; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int FUNC_1 (int ,struct mount*,int ,struct vnode*,int ) ;
 int VAR_0 ;

int
FUNC_2(struct mount *VAR_1, struct vnode *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2, "mac_vnode_associate_extattr");

 FUNC_1(VAR_0, VAR_1, VAR_1->mnt_label, VAR_2,
     VAR_2->v_label);

 return (VAR_3);
}
