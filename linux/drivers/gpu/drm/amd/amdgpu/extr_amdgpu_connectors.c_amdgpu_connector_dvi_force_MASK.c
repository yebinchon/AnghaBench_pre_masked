
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {scalar_t__ force; } ;
struct amdgpu_connector {int use_digital; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct amdgpu_connector* FUNC_0 (struct drm_connector*) ;

__attribute__((used)) static void FUNC_1(struct drm_connector *VAR_2)
{
 struct amdgpu_connector *VAR_3 = FUNC_0(VAR_2);
 if (VAR_2->force == VAR_0)
  VAR_3->use_digital = 0;
 if (VAR_2->force == VAR_1)
  VAR_3->use_digital = 1;
}
