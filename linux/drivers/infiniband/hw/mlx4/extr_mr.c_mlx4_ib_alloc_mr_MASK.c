
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int key; } ;
struct ib_mr {int device; int lkey; int rkey; } ;
struct mlx4_ib_mr {TYPE_2__ mmr; struct ib_mr ibmr; int * umem; int max_pages; } ;
struct mlx4_ib_dev {int dev; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;
typedef enum ib_mr_type { ____Placeholder_ib_mr_type } ib_mr_type ;
struct TYPE_5__ {int pdn; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mlx4_ib_mr*) ;
 struct mlx4_ib_mr* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,struct mlx4_ib_mr*,int ) ;
 int FUNC_4 (struct mlx4_ib_mr*) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int ,TYPE_2__*) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 struct mlx4_ib_dev* FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (struct ib_pd*) ;

struct ib_mr *FUNC_10(struct ib_pd *VAR_5, enum ib_mr_type VAR_6,
          u32 VAR_7, struct ib_udata *VAR_8)
{
 struct mlx4_ib_dev *VAR_9 = FUNC_8(VAR_5->device);
 struct mlx4_ib_mr *VAR_10;
 int VAR_11;

 if (VAR_6 != VAR_3 ||
     VAR_7 > VAR_4)
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 VAR_11 = FUNC_5(VAR_9->dev, FUNC_9(VAR_5)->pdn, 0, 0, 0,
       VAR_7, 0, &VAR_10->mmr);
 if (VAR_11)
  goto err_free;

 VAR_11 = FUNC_3(VAR_5->device, VAR_10, VAR_7);
 if (VAR_11)
  goto err_free_mr;

 VAR_10->max_pages = VAR_7;
 VAR_11 = FUNC_6(VAR_9->dev, &VAR_10->mmr);
 if (VAR_11)
  goto err_free_pl;

 VAR_10->ibmr.rkey = VAR_10->ibmr.lkey = VAR_10->mmr.key;
 VAR_10->umem = ((void*)0);

 return &VAR_10->ibmr;

err_free_pl:
 VAR_10->ibmr.device = VAR_5->device;
 FUNC_4(VAR_10);
err_free_mr:
 (void) FUNC_7(VAR_9->dev, &VAR_10->mmr);
err_free:
 FUNC_1(VAR_10);
 return FUNC_0(VAR_11);
}
