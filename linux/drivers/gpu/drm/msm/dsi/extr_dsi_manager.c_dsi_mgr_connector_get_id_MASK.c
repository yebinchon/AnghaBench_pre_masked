
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsi_connector {int id; } ;
struct drm_connector {int dummy; } ;


 struct dsi_connector* FUNC_0 (struct drm_connector*) ;

__attribute__((used)) static inline int FUNC_1(struct drm_connector *VAR_0)
{
 struct dsi_connector *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->id;
}
