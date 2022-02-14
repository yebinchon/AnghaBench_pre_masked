
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vop_closeextattr_args {int a_td; int a_cred; scalar_t__ a_commit; TYPE_2__* a_vp; } ;
struct TYPE_4__ {scalar_t__ v_type; TYPE_1__* v_mount; } ;
struct TYPE_3__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct vop_closeextattr_args *VAR_5)
{

 if (VAR_5->a_vp->v_type == VAR_4 || VAR_5->a_vp->v_type == VAR_3)
  return (VAR_0);

 if (VAR_5->a_commit && (VAR_5->a_vp->v_mount->mnt_flag & VAR_2))
  return (VAR_1);

 return (FUNC_0(VAR_5->a_vp, VAR_5->a_commit, VAR_5->a_cred, VAR_5->a_td));
}
