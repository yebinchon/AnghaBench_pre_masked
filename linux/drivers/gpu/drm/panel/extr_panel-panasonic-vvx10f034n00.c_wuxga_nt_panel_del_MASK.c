
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dev; } ;
struct wuxga_nt_panel {TYPE_1__* backlight; TYPE_2__ base; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct wuxga_nt_panel *VAR_0)
{
 if (VAR_0->base.dev)
  FUNC_0(&VAR_0->base);

 if (VAR_0->backlight)
  FUNC_1(&VAR_0->backlight->dev);
}
