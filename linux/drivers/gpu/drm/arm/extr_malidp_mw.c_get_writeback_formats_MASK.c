
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct malidp_hw_regmap {int n_pixel_formats; TYPE_1__* pixel_formats; } ;
struct malidp_drm {TYPE_3__* dev; } ;
struct TYPE_6__ {TYPE_2__* hw; } ;
struct TYPE_5__ {struct malidp_hw_regmap map; } ;
struct TYPE_4__ {int layer; int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int,int ) ;

__attribute__((used)) static u32 *FUNC_1(struct malidp_drm *VAR_2, int *VAR_3)
{
 const struct malidp_hw_regmap *VAR_4 = &VAR_2->dev->hw->map;
 u32 *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_0(VAR_4->n_pixel_formats, sizeof(*VAR_5),
     VAR_0);
 if (!VAR_5)
  return ((void*)0);

 for (VAR_6 = 0, VAR_7 = 0; VAR_7 < VAR_4->n_pixel_formats; VAR_7++) {
  if (VAR_4->pixel_formats[VAR_7].layer & VAR_1)
   VAR_5[VAR_6++] = VAR_4->pixel_formats[VAR_7].format;
 }

 *VAR_3 = VAR_6;

 return VAR_5;
}
