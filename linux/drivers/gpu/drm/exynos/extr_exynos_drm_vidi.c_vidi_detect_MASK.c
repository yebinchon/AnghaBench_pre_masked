
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vidi_context {scalar_t__ connected; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 struct vidi_context* FUNC_0 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status FUNC_1(struct drm_connector *VAR_2,
   bool VAR_3)
{
 struct vidi_context *VAR_4 = FUNC_0(VAR_2);





 return VAR_4->connected ? VAR_0 :
   VAR_1;
}
