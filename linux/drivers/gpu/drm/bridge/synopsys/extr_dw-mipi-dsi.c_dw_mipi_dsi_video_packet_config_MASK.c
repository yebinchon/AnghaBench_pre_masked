
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_mipi_dsi {int dummy; } ;
struct drm_display_mode {int hdisplay; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dw_mipi_dsi*,int ,int ) ;
 scalar_t__ FUNC_2 (struct dw_mipi_dsi*) ;

__attribute__((used)) static void FUNC_3(struct dw_mipi_dsi *VAR_1,
         const struct drm_display_mode *VAR_2)
{
 FUNC_1(VAR_1, VAR_0,
         FUNC_2(VAR_1) ?
    FUNC_0(VAR_2->hdisplay / 2) :
    FUNC_0(VAR_2->hdisplay));
}
