
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct qxl_device {TYPE_3__* dumb_heads; TYPE_1__* monitors_config; } ;
struct TYPE_5__ {scalar_t__ width; scalar_t__ height; } ;
struct qxl_bo {TYPE_2__ surf; scalar_t__ is_dumb; } ;
struct TYPE_6__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_4__ {int max_allowed; } ;


 int FUNC_0 (char*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct qxl_device *VAR_0,
     int VAR_1, struct qxl_bo *VAR_2)
{
 uint32_t VAR_3, VAR_4;

 if (VAR_1 >= VAR_0->monitors_config->max_allowed)
  return;

 if (VAR_2 && VAR_2->is_dumb) {
  VAR_3 = VAR_2->surf.width;
  VAR_4 = VAR_2->surf.height;
 } else {
  VAR_3 = 0;
  VAR_4 = 0;
 }

 if (VAR_0->dumb_heads[VAR_1].width == VAR_3 &&
     VAR_0->dumb_heads[VAR_1].height == VAR_4)
  return;

 FUNC_0("#%d: %dx%d -> %dx%d\n", VAR_1,
    VAR_0->dumb_heads[VAR_1].width,
    VAR_0->dumb_heads[VAR_1].height,
    VAR_3, VAR_4);
 VAR_0->dumb_heads[VAR_1].width = VAR_3;
 VAR_0->dumb_heads[VAR_1].height = VAR_4;
}
