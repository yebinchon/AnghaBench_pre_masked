
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int dummy; } ;
struct amdgpu_connector {int * edid; } ;


 int FUNC_0 (struct drm_connector*,int *) ;
 int FUNC_1 (struct drm_connector*,int *) ;
 struct amdgpu_connector* FUNC_2 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_3(struct drm_connector *VAR_0)
{
 struct amdgpu_connector *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 if (VAR_1->edid) {
  FUNC_1(VAR_0, VAR_1->edid);
  VAR_2 = FUNC_0(VAR_0, VAR_1->edid);
  return VAR_2;
 }
 FUNC_1(VAR_0, ((void*)0));
 return 0;
}
