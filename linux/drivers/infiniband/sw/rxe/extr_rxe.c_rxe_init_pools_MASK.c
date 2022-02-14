
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_total_mcast_qp_attach; int max_mcast_grp; int max_mw; int max_mr; int max_cq; int max_qp; int max_srq; int max_ah; int max_pd; } ;
struct rxe_dev {int uc_pool; int pd_pool; int ah_pool; int srq_pool; int qp_pool; int cq_pool; int mr_pool; int mw_pool; int mc_grp_pool; TYPE_1__ attr; int mc_elem_pool; int max_ucontext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rxe_dev*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct rxe_dev *VAR_10)
{
 int VAR_11;

 VAR_11 = FUNC_1(VAR_10, &VAR_10->uc_pool, VAR_9,
       VAR_10->max_ucontext);
 if (VAR_11)
  goto err1;

 VAR_11 = FUNC_1(VAR_10, &VAR_10->pd_pool, VAR_6,
       VAR_10->attr.max_pd);
 if (VAR_11)
  goto err2;

 VAR_11 = FUNC_1(VAR_10, &VAR_10->ah_pool, VAR_0,
       VAR_10->attr.max_ah);
 if (VAR_11)
  goto err3;

 VAR_11 = FUNC_1(VAR_10, &VAR_10->srq_pool, VAR_8,
       VAR_10->attr.max_srq);
 if (VAR_11)
  goto err4;

 VAR_11 = FUNC_1(VAR_10, &VAR_10->qp_pool, VAR_7,
       VAR_10->attr.max_qp);
 if (VAR_11)
  goto err5;

 VAR_11 = FUNC_1(VAR_10, &VAR_10->cq_pool, VAR_1,
       VAR_10->attr.max_cq);
 if (VAR_11)
  goto err6;

 VAR_11 = FUNC_1(VAR_10, &VAR_10->mr_pool, VAR_4,
       VAR_10->attr.max_mr);
 if (VAR_11)
  goto err7;

 VAR_11 = FUNC_1(VAR_10, &VAR_10->mw_pool, VAR_5,
       VAR_10->attr.max_mw);
 if (VAR_11)
  goto err8;

 VAR_11 = FUNC_1(VAR_10, &VAR_10->mc_grp_pool, VAR_3,
       VAR_10->attr.max_mcast_grp);
 if (VAR_11)
  goto err9;

 VAR_11 = FUNC_1(VAR_10, &VAR_10->mc_elem_pool, VAR_2,
       VAR_10->attr.max_total_mcast_qp_attach);
 if (VAR_11)
  goto err10;

 return 0;

err10:
 FUNC_0(&VAR_10->mc_grp_pool);
err9:
 FUNC_0(&VAR_10->mw_pool);
err8:
 FUNC_0(&VAR_10->mr_pool);
err7:
 FUNC_0(&VAR_10->cq_pool);
err6:
 FUNC_0(&VAR_10->qp_pool);
err5:
 FUNC_0(&VAR_10->srq_pool);
err4:
 FUNC_0(&VAR_10->ah_pool);
err3:
 FUNC_0(&VAR_10->pd_pool);
err2:
 FUNC_0(&VAR_10->uc_pool);
err1:
 return VAR_11;
}
