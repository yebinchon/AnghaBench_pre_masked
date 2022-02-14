
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mipi_dbi {int dummy; } ;
struct mipi_dbi_dev {int enabled; struct mipi_dbi dbi; } ;
struct TYPE_2__ {int dev; } ;
struct drm_simple_display_pipe {TYPE_1__ crtc; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mipi_dbi_dev* FUNC_1 (int ) ;
 int FUNC_2 (struct mipi_dbi*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct drm_simple_display_pipe *VAR_3)
{
 struct mipi_dbi_dev *VAR_4 = FUNC_1(VAR_3->crtc.dev);
 struct mipi_dbi *VAR_5 = &VAR_4->dbi;

 FUNC_0("\n");
 if (!VAR_4->enabled)
  return;

 FUNC_2(VAR_5, VAR_0, 0x0000);
 FUNC_3(50);
 FUNC_2(VAR_5, VAR_2, 0x0007);
 FUNC_3(50);
 FUNC_2(VAR_5, VAR_1, 0x0a02);

 VAR_4->enabled = 0;
}
