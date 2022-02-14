
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_strategy_args {TYPE_1__* a_bp; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; } ;
typedef int daddr_t ;
struct TYPE_2__ {int b_lblkno; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,struct vop_strategy_args*) ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(struct vop_strategy_args *VAR_4)







{
 struct vnode *VAR_5;
 daddr_t VAR_6;

 VAR_5 = VAR_4->a_vp;
 VAR_6 = VAR_4->a_bp->b_lblkno;
 if (FUNC_0(FUNC_2(VAR_5)) && VAR_6 < 0 && VAR_6 >= -VAR_0)
  return (FUNC_1(&VAR_3, VAR_4));
 if (VAR_5->v_type == VAR_1)
  return (FUNC_1(&VAR_2, VAR_4));
 FUNC_3("spec nodes went here");
}
