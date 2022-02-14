
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rockchip_lvds {TYPE_1__* soc_data; int grf; TYPE_2__* dev; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_4__ {int of_node; } ;
struct TYPE_3__ {int grf_soc_con6; int has_vop_sel; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct drm_encoder*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct rockchip_lvds *VAR_1,
     struct drm_encoder *VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 if (!VAR_1->soc_data->has_vop_sel)
  return 0;

 VAR_4 = FUNC_0(VAR_1->dev->of_node, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3 = VAR_0 << 16;
 if (VAR_4)
  VAR_3 |= VAR_0;

 VAR_4 = FUNC_1(VAR_1->grf, VAR_1->soc_data->grf_soc_con6, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
