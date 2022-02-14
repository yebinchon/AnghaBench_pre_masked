
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int dummy; } ;
struct amdgpu_connector {struct drm_connector* con_priv; } ;


 int FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*) ;
 struct amdgpu_connector* FUNC_4 (struct drm_connector*) ;

__attribute__((used)) static void FUNC_5(struct drm_connector *VAR_0)
{
 struct amdgpu_connector *VAR_1 = FUNC_4(VAR_0);

 FUNC_0(VAR_0);
 FUNC_3(VAR_1->con_priv);
 FUNC_2(VAR_0);
 FUNC_1(VAR_0);
 FUNC_3(VAR_0);
}
