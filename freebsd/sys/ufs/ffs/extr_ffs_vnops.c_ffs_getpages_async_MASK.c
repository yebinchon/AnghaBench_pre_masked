
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vop_getpages_async_args {int a_count; int a_m; int a_arg; int (* a_iodone ) (int ,int ,int ,int) ;int a_rahead; int a_rbehind; struct vnode* a_vp; } ;
struct vnode {int v_mount; } ;
struct ufsmount {TYPE_2__* um_devvp; } ;
struct TYPE_3__ {scalar_t__ bo_bsize; } ;
struct TYPE_4__ {TYPE_1__ v_bufobj; } ;


 scalar_t__ VAR_0 ;
 struct ufsmount* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (struct vnode*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct vnode*,int ,int ,int ,int ,int (*) (int ,int ,int ,int),int ) ;

__attribute__((used)) static int
FUNC_4(struct vop_getpages_async_args *VAR_3)
{
 struct vnode *VAR_4;
 struct ufsmount *VAR_5;
 int VAR_6;

 VAR_4 = VAR_3->a_vp;
 VAR_5 = FUNC_0(VAR_4->v_mount);

 if (VAR_5->um_devvp->v_bufobj.bo_bsize <= VAR_0)
  return (FUNC_3(VAR_4, VAR_3->a_m, VAR_3->a_count,
      VAR_3->a_rbehind, VAR_3->a_rahead, VAR_3->a_iodone, VAR_3->a_arg));

 VAR_6 = FUNC_2(VAR_4, VAR_3->a_m, VAR_3->a_count, VAR_3->a_rbehind,
     VAR_3->a_rahead, VAR_1, VAR_2);
 VAR_3->a_iodone(VAR_3->a_arg, VAR_3->a_m, VAR_3->a_count, VAR_6);

 return (VAR_6);
}
