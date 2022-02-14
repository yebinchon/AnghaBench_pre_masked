
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_mipi_dsi_plat_data {int (* mode_valid ) (int ,struct drm_display_mode const*) ;int priv_data; } ;
struct dw_mipi_dsi {struct dw_mipi_dsi_plat_data* plat_data; } ;
struct drm_display_mode {int dummy; } ;
struct drm_bridge {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 struct dw_mipi_dsi* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (int ,struct drm_display_mode const*) ;

__attribute__((used)) static enum drm_mode_status
FUNC_2(struct drm_bridge *VAR_1,
         const struct drm_display_mode *VAR_2)
{
 struct dw_mipi_dsi *VAR_3 = FUNC_0(VAR_1);
 const struct dw_mipi_dsi_plat_data *VAR_4 = VAR_3->plat_data;
 enum drm_mode_status VAR_5 = VAR_0;

 if (VAR_4->mode_valid)
  VAR_5 = VAR_4->mode_valid(VAR_4->priv_data, VAR_2);

 return VAR_5;
}
