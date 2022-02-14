
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int key; } ;
struct ib_mw {int rkey; } ;
struct mlx4_ib_mw {TYPE_2__ mmw; struct ib_mw ibmw; } ;
struct mlx4_ib_dev {int dev; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;
typedef enum ib_mw_type { ____Placeholder_ib_mw_type } ib_mw_type ;
struct TYPE_5__ {int pdn; } ;


 int VAR_0 ;
 struct ib_mw* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct mlx4_ib_mw*) ;
 struct mlx4_ib_mw* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int ,TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 struct mlx4_ib_dev* FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 TYPE_1__* FUNC_8 (struct ib_pd*) ;

struct ib_mw *FUNC_9(struct ib_pd *VAR_2, enum ib_mw_type VAR_3,
          struct ib_udata *VAR_4)
{
 struct mlx4_ib_dev *VAR_5 = FUNC_6(VAR_2->device);
 struct mlx4_ib_mw *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_3(VAR_5->dev, FUNC_8(VAR_2)->pdn,
       FUNC_7(VAR_3), &VAR_6->mmw);
 if (VAR_7)
  goto err_free;

 VAR_7 = FUNC_4(VAR_5->dev, &VAR_6->mmw);
 if (VAR_7)
  goto err_mw;

 VAR_6->ibmw.rkey = VAR_6->mmw.key;

 return &VAR_6->ibmw;

err_mw:
 FUNC_5(VAR_5->dev, &VAR_6->mmw);

err_free:
 FUNC_1(VAR_6);

 return FUNC_0(VAR_7);
}
