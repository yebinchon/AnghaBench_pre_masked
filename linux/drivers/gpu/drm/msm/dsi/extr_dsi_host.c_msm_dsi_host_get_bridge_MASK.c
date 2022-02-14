
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_host {int device_node; } ;
struct mipi_dsi_host {int dummy; } ;
struct drm_bridge {int dummy; } ;


 struct drm_bridge* FUNC_0 (int ) ;
 struct msm_dsi_host* FUNC_1 (struct mipi_dsi_host*) ;

struct drm_bridge *FUNC_2(struct mipi_dsi_host *VAR_0)
{
 struct msm_dsi_host *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1->device_node);
}
