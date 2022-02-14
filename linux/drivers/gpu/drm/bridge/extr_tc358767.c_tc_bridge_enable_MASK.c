
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_data {int panel; int dev; } ;
struct drm_bridge {int dummy; } ;


 struct tc_data* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tc_data*) ;
 int FUNC_4 (struct tc_data*) ;
 int FUNC_5 (struct tc_data*) ;
 int FUNC_6 (struct tc_data*) ;

__attribute__((used)) static void FUNC_7(struct drm_bridge *VAR_0)
{
 struct tc_data *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 < 0) {
  FUNC_1(VAR_1->dev, "failed to read display props: %d\n", VAR_2);
  return;
 }

 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2 < 0) {
  FUNC_1(VAR_1->dev, "main link enable error: %d\n", VAR_2);
  return;
 }

 VAR_2 = FUNC_6(VAR_1);
 if (VAR_2 < 0) {
  FUNC_1(VAR_1->dev, "main link stream start error: %d\n", VAR_2);
  FUNC_4(VAR_1);
  return;
 }

 FUNC_2(VAR_1->panel);
}
