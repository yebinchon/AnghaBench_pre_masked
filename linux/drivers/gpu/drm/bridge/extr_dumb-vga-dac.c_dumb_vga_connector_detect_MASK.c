
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dumb_vga {scalar_t__ ddc; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 struct dumb_vga* FUNC_0 (struct drm_connector*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static enum drm_connector_status
FUNC_2(struct drm_connector *VAR_2, bool VAR_3)
{
 struct dumb_vga *VAR_4 = FUNC_0(VAR_2);







 if (VAR_4->ddc && FUNC_1(VAR_4->ddc))
  return VAR_0;

 return VAR_1;
}
