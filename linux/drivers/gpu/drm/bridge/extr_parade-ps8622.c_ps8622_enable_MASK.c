
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps8622_bridge {int panel; } ;
struct drm_bridge {int dummy; } ;


 int FUNC_0 (char*) ;
 struct ps8622_bridge* FUNC_1 (struct drm_bridge*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct drm_bridge *VAR_0)
{
 struct ps8622_bridge *VAR_1 = FUNC_1(VAR_0);

 if (FUNC_2(VAR_1->panel)) {
  FUNC_0("failed to enable panel\n");
  return;
 }
}
