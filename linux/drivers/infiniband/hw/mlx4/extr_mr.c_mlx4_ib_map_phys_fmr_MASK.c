
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int rkey; int lkey; int device; } ;
struct mlx4_ib_fmr {TYPE_1__ ibfmr; int mfmr; } ;
struct mlx4_ib_dev {int dev; } ;
struct ib_fmr {int dummy; } ;


 int FUNC_0 (int ,int *,int *,int,int ,int *,int *) ;
 struct mlx4_ib_dev* FUNC_1 (int ) ;
 struct mlx4_ib_fmr* FUNC_2 (struct ib_fmr*) ;

int FUNC_3(struct ib_fmr *VAR_0, u64 *VAR_1,
        int VAR_2, u64 VAR_3)
{
 struct mlx4_ib_fmr *VAR_4 = FUNC_2(VAR_0);
 struct mlx4_ib_dev *VAR_5 = FUNC_1(VAR_4->ibfmr.device);

 return FUNC_0(VAR_5->dev, &VAR_4->mfmr, VAR_1, VAR_2, VAR_3,
     &VAR_4->ibfmr.lkey, &VAR_4->ibfmr.rkey);
}
