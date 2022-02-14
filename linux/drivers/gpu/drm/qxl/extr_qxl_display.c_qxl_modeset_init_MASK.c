
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int max_width; int max_height; int fb_base; scalar_t__ min_height; scalar_t__ min_width; void* funcs; } ;
struct TYPE_8__ {TYPE_1__ mode_config; } ;
struct qxl_device {TYPE_2__ ddev; int vram_base; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (struct qxl_device*) ;
 int FUNC_6 (struct qxl_device*) ;
 int FUNC_7 (struct qxl_device*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_8(struct qxl_device *VAR_2)
{
 int VAR_3;
 int VAR_4;

 FUNC_0(&VAR_2->ddev);

 VAR_4 = FUNC_5(VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_2->ddev.mode_config.funcs = (void *)&VAR_0;


 VAR_2->ddev.mode_config.min_width = 0;
 VAR_2->ddev.mode_config.min_height = 0;
 VAR_2->ddev.mode_config.max_width = 8192;
 VAR_2->ddev.mode_config.max_height = 8192;

 VAR_2->ddev.mode_config.fb_base = VAR_2->vram_base;

 FUNC_2(&VAR_2->ddev);
 FUNC_7(VAR_2);

 for (VAR_3 = 0 ; VAR_3 < VAR_1; ++VAR_3) {
  FUNC_3(&VAR_2->ddev, VAR_3);
  FUNC_4(&VAR_2->ddev, VAR_3);
 }

 FUNC_6(VAR_2);

 FUNC_1(&VAR_2->ddev);
 return 0;
}
