
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* u32 ;
struct mlx5_mtt {int dummy; } ;
struct mlx5_klm {int dummy; } ;
struct mlx5_ib_mr {TYPE_5__* sig; TYPE_7__* klm_mr; TYPE_7__* mtt_mr; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_pd {int device; } ;
struct TYPE_10__ {int device; } ;
struct TYPE_15__ {TYPE_1__ ibmr; } ;
struct TYPE_12__ {void* psv_idx; } ;
struct TYPE_11__ {void* psv_idx; } ;
struct TYPE_14__ {int sig_status_checked; int sig_err_exists; TYPE_3__ psv_wire; TYPE_2__ psv_memory; int sigerr_count; } ;
struct TYPE_13__ {int pdn; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;
 void* FUNC_1 (int ,void**,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (void*,void*,int ,int) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (struct ib_pd*,struct mlx5_ib_mr*,int,int,int ,int ,void**,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct mlx5_ib_dev*,TYPE_7__*) ;
 int FUNC_6 (TYPE_5__*) ;
 TYPE_5__* FUNC_7 (int,int ) ;
 int VAR_8 ;
 int FUNC_8 (int ,int ,int,void**) ;
 scalar_t__ FUNC_9 (int ,void*) ;
 void* FUNC_10 (struct ib_pd*,int,int,int,int ) ;
 int FUNC_11 (struct mlx5_ib_dev*,char*,void*) ;
 struct mlx5_ib_dev* FUNC_12 (int ) ;
 TYPE_4__* FUNC_13 (struct ib_pd*) ;

__attribute__((used)) static int FUNC_14(struct ib_pd *VAR_9, struct mlx5_ib_mr *VAR_10,
          int VAR_11, int VAR_12,
          u32 *VAR_13, int VAR_14)
{
 struct mlx5_ib_dev *VAR_15 = FUNC_12(VAR_9->device);
 u32 VAR_16[2];
 void *VAR_17;
 int VAR_18;

 VAR_10->sig = FUNC_7(sizeof(*VAR_10->sig), VAR_1);
 if (!VAR_10->sig)
  return -VAR_0;


 VAR_18 = FUNC_8(VAR_15->mdev, FUNC_13(VAR_9)->pdn, 2, VAR_16);
 if (VAR_18)
  goto err_free_sig;

 VAR_10->sig->psv_memory.psv_idx = VAR_16[0];
 VAR_10->sig->psv_wire.psv_idx = VAR_16[1];

 VAR_10->sig->sig_status_checked = 1;
 VAR_10->sig->sig_err_exists = 0;

 ++VAR_10->sig->sigerr_count;
 VAR_10->klm_mr = FUNC_10(VAR_9, VAR_11, VAR_12,
      sizeof(struct mlx5_klm),
      VAR_2);
 if (FUNC_0(VAR_10->klm_mr)) {
  VAR_18 = FUNC_3(VAR_10->klm_mr);
  goto err_destroy_psv;
 }
 VAR_10->mtt_mr = FUNC_10(VAR_9, VAR_11, VAR_12,
      sizeof(struct mlx5_mtt),
      VAR_3);
 if (FUNC_0(VAR_10->mtt_mr)) {
  VAR_18 = FUNC_3(VAR_10->mtt_mr);
  goto err_free_klm_mr;
 }


 VAR_17 = FUNC_1(VAR_7, VAR_13, VAR_8);
 FUNC_2(VAR_17, VAR_17, VAR_5, 1);
 FUNC_2(VAR_17, VAR_17, VAR_6, VAR_4);

 VAR_18 = FUNC_4(VAR_9, VAR_10, 4, sizeof(struct mlx5_klm), 0,
         VAR_2, VAR_13, VAR_14);
 if (VAR_18)
  goto err_free_mtt_mr;

 return 0;

err_free_mtt_mr:
 FUNC_5(FUNC_12(VAR_10->mtt_mr->ibmr.device), VAR_10->mtt_mr);
 VAR_10->mtt_mr = ((void*)0);
err_free_klm_mr:
 FUNC_5(FUNC_12(VAR_10->klm_mr->ibmr.device), VAR_10->klm_mr);
 VAR_10->klm_mr = ((void*)0);
err_destroy_psv:
 if (FUNC_9(VAR_15->mdev, VAR_10->sig->psv_memory.psv_idx))
  FUNC_11(VAR_15, "failed to destroy mem psv %d\n",
        VAR_10->sig->psv_memory.psv_idx);
 if (FUNC_9(VAR_15->mdev, VAR_10->sig->psv_wire.psv_idx))
  FUNC_11(VAR_15, "failed to destroy wire psv %d\n",
        VAR_10->sig->psv_wire.psv_idx);
err_free_sig:
 FUNC_6(VAR_10->sig);

 return VAR_18;
}
