
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_advlock_args {int a_flags; int a_fl; int a_op; int a_id; int a_vp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ) ;

int
FUNC_1(struct vop_advlock_args *VAR_2)
{

 return (FUNC_0(VAR_2->a_vp, VAR_2->a_id, VAR_2->a_op, VAR_2->a_fl,
  VAR_2->a_flags, VAR_0, VAR_1));
}
