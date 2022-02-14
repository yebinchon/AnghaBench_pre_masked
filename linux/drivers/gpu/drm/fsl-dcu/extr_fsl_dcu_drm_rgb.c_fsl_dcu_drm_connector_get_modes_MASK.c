
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_dcu_drm_connector {int panel; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (int ) ;
 struct fsl_dcu_drm_connector* FUNC_1 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_2(struct drm_connector *VAR_0)
{
 struct fsl_dcu_drm_connector *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 return FUNC_0(VAR_1->panel);
}
