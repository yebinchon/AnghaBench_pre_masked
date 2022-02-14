
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct rxe_mc_grp {struct rxe_dev* rxe; int mcg_lock; int qp_list; } ;
struct TYPE_2__ {scalar_t__ max_mcast_qp_attach; } ;
struct rxe_dev {int mc_grp_pool; TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rxe_mc_grp*,union ib_gid*) ;
 struct rxe_mc_grp* FUNC_2 (int *) ;
 int FUNC_3 (struct rxe_mc_grp*) ;
 int FUNC_4 (struct rxe_dev*,union ib_gid*) ;
 struct rxe_mc_grp* FUNC_5 (int *,union ib_gid*) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct rxe_dev *VAR_2, union ib_gid *VAR_3,
        struct rxe_mc_grp **VAR_4)
{
 int VAR_5;
 struct rxe_mc_grp *VAR_6;

 if (VAR_2->attr.max_mcast_qp_attach == 0) {
  VAR_5 = -VAR_0;
  goto err1;
 }

 VAR_6 = FUNC_5(&VAR_2->mc_grp_pool, VAR_3);
 if (VAR_6)
  goto done;

 VAR_6 = FUNC_2(&VAR_2->mc_grp_pool);
 if (!VAR_6) {
  VAR_5 = -VAR_1;
  goto err1;
 }

 FUNC_0(&VAR_6->qp_list);
 FUNC_6(&VAR_6->mcg_lock);
 VAR_6->rxe = VAR_2;

 FUNC_1(VAR_6, VAR_3);

 VAR_5 = FUNC_4(VAR_2, VAR_3);
 if (VAR_5)
  goto err2;

done:
 *VAR_4 = VAR_6;
 return 0;

err2:
 FUNC_3(VAR_6);
err1:
 return VAR_5;
}
