
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_device {int dummy; } ;
struct gm20b_clk_dvfs {int dfs_coeff; int dfs_det_max; int dfs_ext_cal; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ base; } ;
struct gm20b_clk {TYPE_3__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct gm20b_clk*,int ) ;
 int FUNC_1 (struct nvkm_device*,int ,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct gm20b_clk *VAR_7,
     struct gm20b_clk_dvfs *VAR_8)
{
 struct nvkm_device *VAR_9 = VAR_7->base.base.subdev.device;


 FUNC_1(VAR_9, VAR_5,
    VAR_6,
    VAR_6);

 FUNC_1(VAR_9, VAR_0,
    VAR_1 | VAR_3,
    VAR_8->dfs_coeff << VAR_2 |
    VAR_8->dfs_det_max << VAR_4);

 FUNC_2(1);
 FUNC_1(VAR_9, VAR_5,
    VAR_6, 0);

 FUNC_0(VAR_7, VAR_8->dfs_ext_cal);
}
