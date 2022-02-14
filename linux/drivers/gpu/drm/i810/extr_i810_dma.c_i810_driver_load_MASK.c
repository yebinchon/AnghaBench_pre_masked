
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {int pdev; TYPE_2__* agp; } ;
struct TYPE_3__ {int aper_size; int aper_base; } ;
struct TYPE_4__ {TYPE_1__ agp_info; int agp_mtrr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 TYPE_2__* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct drm_device *VAR_1, unsigned long VAR_2)
{
 VAR_1->agp = FUNC_1(VAR_1);
 if (VAR_1->agp) {
  VAR_1->agp->agp_mtrr = FUNC_0(
   VAR_1->agp->agp_info.aper_base,
   VAR_1->agp->agp_info.aper_size *
   1024 * 1024);
 }


 if (!VAR_1->agp)
  return -VAR_0;

 FUNC_2(VAR_1->pdev);

 return 0;
}
