
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_connector {int * edid; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (int *) ;
 struct radeon_connector* FUNC_1 (struct drm_connector*) ;

__attribute__((used)) static void FUNC_2(struct drm_connector *VAR_0)
{
 struct radeon_connector *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->edid) {
  FUNC_0(VAR_1->edid);
  VAR_1->edid = ((void*)0);
 }
}
