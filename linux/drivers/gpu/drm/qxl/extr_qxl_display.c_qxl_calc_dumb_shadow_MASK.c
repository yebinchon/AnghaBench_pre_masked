
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qxl_surface {int width; scalar_t__ height; int stride; int format; } ;
struct qxl_head {int x; scalar_t__ height; scalar_t__ width; } ;
struct qxl_device {TYPE_3__* dumb_shadow_bo; struct qxl_head* dumb_heads; TYPE_1__* monitors_config; } ;
struct TYPE_5__ {int width; int height; } ;
struct TYPE_6__ {TYPE_2__ surf; } ;
struct TYPE_4__ {int max_allowed; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct qxl_surface*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct qxl_device *VAR_1,
     struct qxl_surface *VAR_2)
{
 struct qxl_head *VAR_3;
 int VAR_4;

 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 for (VAR_4 = 0; VAR_4 < VAR_1->monitors_config->max_allowed; VAR_4++) {
  VAR_3 = VAR_1->dumb_heads + VAR_4;
  VAR_3->x = VAR_2->width;
  VAR_2->width += VAR_3->width;
  if (VAR_2->height < VAR_3->height)
   VAR_2->height = VAR_3->height;
 }
 if (VAR_2->width < 64)
  VAR_2->width = 64;
 if (VAR_2->height < 64)
  VAR_2->height = 64;
 VAR_2->format = VAR_0;
 VAR_2->stride = VAR_2->width * 4;

 if (!VAR_1->dumb_shadow_bo ||
     VAR_1->dumb_shadow_bo->surf.width != VAR_2->width ||
     VAR_1->dumb_shadow_bo->surf.height != VAR_2->height)
  FUNC_0("%dx%d\n", VAR_2->width, VAR_2->height);
}
