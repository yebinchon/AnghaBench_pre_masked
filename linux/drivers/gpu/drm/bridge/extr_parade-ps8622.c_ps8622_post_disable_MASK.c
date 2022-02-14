
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps8622_bridge {int enabled; int gpio_rst; scalar_t__ v12; int panel; int gpio_slp; } ;
struct drm_bridge {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ps8622_bridge* FUNC_1 (struct drm_bridge*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct drm_bridge *VAR_2)
{
 struct ps8622_bridge *VAR_3 = FUNC_1(VAR_2);

 if (!VAR_3->enabled)
  return;

 VAR_3->enabled = 0;






 FUNC_3(VAR_3->gpio_slp, 0);

 if (FUNC_2(VAR_3->panel)) {
  FUNC_0("failed to unprepare panel\n");
  return;
 }

 if (VAR_3->v12)
  FUNC_5(VAR_3->v12);





 FUNC_6(VAR_0,
       2 * VAR_0);
 FUNC_3(VAR_3->gpio_rst, 0);

 FUNC_4(VAR_1);
}
