
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct qxl_output {struct drm_encoder enc; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (char*) ;
 struct qxl_output* FUNC_1 (struct drm_connector*) ;

__attribute__((used)) static struct drm_encoder *FUNC_2(struct drm_connector *VAR_0)
{
 struct qxl_output *VAR_1 =
  FUNC_1(VAR_0);

 FUNC_0("\n");
 return &VAR_1->enc;
}
