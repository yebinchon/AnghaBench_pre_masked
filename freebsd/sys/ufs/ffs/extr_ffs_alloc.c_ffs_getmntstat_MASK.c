
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; int v_mount; TYPE_2__* v_rdev; } ;
struct statfs {int dummy; } ;
struct TYPE_6__ {struct vnode* um_devvp; } ;
struct TYPE_5__ {TYPE_1__* si_mountpt; } ;
struct TYPE_4__ {struct statfs const mnt_stat; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;

__attribute__((used)) static const struct statfs *
FUNC_1(struct vnode *VAR_1)
{

 if (VAR_1->v_type == VAR_0)
  return (&VAR_1->v_rdev->si_mountpt->mnt_stat);
 return (FUNC_1(FUNC_0(VAR_1->v_mount)->um_devvp));
}
