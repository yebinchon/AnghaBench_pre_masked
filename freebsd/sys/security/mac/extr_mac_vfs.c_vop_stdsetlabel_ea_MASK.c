
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_setlabel_args {int a_cred; struct label* a_label; struct vnode* a_vp; } ;
struct vnode {TYPE_1__* v_mount; } ;
struct label {int dummy; } ;
struct TYPE_2__ {int mnt_flag; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct vnode*,struct label*) ;
 int FUNC_2 (int ,struct vnode*,struct label*) ;

int
FUNC_3(struct vop_setlabel_args *VAR_2)
{
 struct vnode *VAR_3 = VAR_2->a_vp;
 struct label *VAR_4 = VAR_2->a_label;
 int VAR_5;

 FUNC_0(VAR_3, "vop_stdsetlabel_ea");

 if ((VAR_3->v_mount->mnt_flag & VAR_1) == 0)
  return (VAR_0);

 VAR_5 = FUNC_2(VAR_2->a_cred, VAR_3, VAR_4);
 if (VAR_5)
  return (VAR_5);

 FUNC_1(VAR_2->a_cred, VAR_3, VAR_4);

 return (0);
}
