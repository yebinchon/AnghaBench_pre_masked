
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_openextattr_args {int a_td; int a_cred; TYPE_1__* a_vp; } ;
struct TYPE_2__ {scalar_t__ v_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct vop_openextattr_args *VAR_3)
{

 if (VAR_3->a_vp->v_type == VAR_2 || VAR_3->a_vp->v_type == VAR_1)
  return (VAR_0);

 return (FUNC_0(VAR_3->a_vp, VAR_3->a_cred, VAR_3->a_td));
}
