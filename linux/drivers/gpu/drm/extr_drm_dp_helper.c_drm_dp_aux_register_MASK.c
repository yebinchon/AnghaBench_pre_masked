
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {int name; TYPE_1__ dev; int owner; int class; int algo; } ;
struct drm_dp_aux {TYPE_2__ ddc; int dev; scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct drm_dp_aux*) ;
 int FUNC_2 (struct drm_dp_aux*) ;
 int FUNC_3 (struct drm_dp_aux*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,scalar_t__,int) ;

int FUNC_6(struct drm_dp_aux *VAR_2)
{
 int VAR_3;

 if (!VAR_2->ddc.algo)
  FUNC_1(VAR_2);

 VAR_2->ddc.class = VAR_0;
 VAR_2->ddc.owner = VAR_1;
 VAR_2->ddc.dev.parent = VAR_2->dev;

 FUNC_5(VAR_2->ddc.name, VAR_2->name ? VAR_2->name : FUNC_0(VAR_2->dev),
  sizeof(VAR_2->ddc.name));

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_4(&VAR_2->ddc);
 if (VAR_3) {
  FUNC_3(VAR_2);
  return VAR_3;
 }

 return 0;
}
