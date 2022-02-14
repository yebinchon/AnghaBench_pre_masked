
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ili9322 {int dummy; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (struct drm_panel*,struct ili9322*) ;
 int FUNC_1 (struct ili9322*) ;
 int FUNC_2 (struct drm_panel*) ;
 struct ili9322* FUNC_3 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_0)
{
 struct ili9322 *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 < 0)
  FUNC_2(VAR_0);

 return VAR_2;
}
