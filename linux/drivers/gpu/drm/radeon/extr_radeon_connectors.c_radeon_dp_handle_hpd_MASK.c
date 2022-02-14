
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_connector {int dummy; } ;
struct drm_connector {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_connector*) ;
 struct radeon_connector* FUNC_1 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_2(struct drm_connector *VAR_1)
{
 struct radeon_connector *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 == -VAR_0)
  return 1;
 return 0;
}
