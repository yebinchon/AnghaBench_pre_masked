
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int v_mount; } ;
struct ufsmount {scalar_t__* um_quotas; } ;
struct dquot {int dummy; } ;
struct TYPE_2__ {struct dquot** i_dquot; } ;


 int VAR_0 ;
 struct dquot* VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ufsmount* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*,struct dquot*) ;

int
FUNC_3(struct vnode *VAR_3)
{
 struct ufsmount *VAR_4 = FUNC_0(VAR_3->v_mount);
 struct dquot *VAR_5;
 int VAR_6;





 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if (VAR_4->um_quotas[VAR_6] != VAR_2)
   break;
 if (VAR_6 == VAR_0)
  return (0);




 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = FUNC_1(VAR_3)->i_dquot[VAR_6];
  if (VAR_5 != VAR_1)
   FUNC_2(VAR_3, VAR_5);
 }
 return (0);
}
