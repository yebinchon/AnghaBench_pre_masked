
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsi_bridge {int id; } ;
struct drm_bridge {int dummy; } ;


 struct dsi_bridge* FUNC_0 (struct drm_bridge*) ;

__attribute__((used)) static int FUNC_1(struct drm_bridge *VAR_0)
{
 struct dsi_bridge *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->id;
}
