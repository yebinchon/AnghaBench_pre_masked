
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vop_getpages_args {int a_rahead; int a_rbehind; int a_count; int a_m; struct vnode* a_vp; } ;
struct vnode {int v_mount; } ;
struct ufsmount {TYPE_2__* um_devvp; } ;
struct TYPE_3__ {scalar_t__ bo_bsize; } ;
struct TYPE_4__ {TYPE_1__ v_bufobj; } ;


 scalar_t__ VAR_0 ;
 struct ufsmount* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct vnode*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct vnode*,int ,int ,int ,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_3(struct vop_getpages_args *VAR_4)
{
 struct vnode *VAR_5;
 struct ufsmount *VAR_6;

 VAR_5 = VAR_4->a_vp;
 VAR_6 = FUNC_0(VAR_5->v_mount);

 if (!VAR_3 && VAR_6->um_devvp->v_bufobj.bo_bsize <= VAR_0)
  return (FUNC_2(VAR_5, VAR_4->a_m, VAR_4->a_count,
      VAR_4->a_rbehind, VAR_4->a_rahead, ((void*)0), ((void*)0)));
 return (FUNC_1(VAR_5, VAR_4->a_m, VAR_4->a_count, VAR_4->a_rbehind,
     VAR_4->a_rahead, VAR_1, VAR_2));
}
