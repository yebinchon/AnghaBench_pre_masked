
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_edp {int ctrl; } ;
struct edp_connector {struct msm_edp* edp; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 struct edp_connector* FUNC_2 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status FUNC_3(
  struct drm_connector *VAR_2, bool VAR_3)
{
 struct edp_connector *VAR_4 = FUNC_2(VAR_2);
 struct msm_edp *VAR_5 = VAR_4->edp;

 FUNC_0("");
 return FUNC_1(VAR_5->ctrl) ?
  VAR_0 : VAR_1;
}
