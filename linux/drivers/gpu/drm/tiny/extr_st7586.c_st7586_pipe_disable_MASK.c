
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mipi_dbi_dev {int enabled; int dbi; } ;
struct TYPE_2__ {int dev; } ;
struct drm_simple_display_pipe {TYPE_1__ crtc; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct mipi_dbi_dev* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct drm_simple_display_pipe *VAR_1)
{
 struct mipi_dbi_dev *VAR_2 = FUNC_1(VAR_1->crtc.dev);
 FUNC_0("\n");

 if (!VAR_2->enabled)
  return;

 FUNC_2(&VAR_2->dbi, VAR_0);
 VAR_2->enabled = 0;
}
