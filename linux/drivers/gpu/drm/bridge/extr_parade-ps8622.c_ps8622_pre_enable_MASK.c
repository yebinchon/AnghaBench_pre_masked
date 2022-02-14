
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps8622_bridge {int enabled; int gpio_rst; int gpio_slp; int panel; scalar_t__ v12; } ;
struct drm_bridge {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ps8622_bridge* FUNC_1 (struct drm_bridge*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct ps8622_bridge*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct drm_bridge *VAR_4)
{
 struct ps8622_bridge *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 if (VAR_5->enabled)
  return;

 FUNC_3(VAR_5->gpio_rst, 0);

 if (VAR_5->v12) {
  VAR_6 = FUNC_5(VAR_5->v12);
  if (VAR_6)
   FUNC_0("fails to enable ps8622->v12");
 }

 if (FUNC_2(VAR_5->panel)) {
  FUNC_0("failed to prepare panel\n");
  return;
 }

 FUNC_3(VAR_5->gpio_slp, 1);
 FUNC_6(VAR_3 + VAR_0,
       VAR_2 + VAR_1);

 FUNC_3(VAR_5->gpio_rst, 1);


 FUNC_6(20000, 30000);

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6) {
  FUNC_0("Failed to send config to bridge (%d)\n", VAR_6);
  return;
 }

 VAR_5->enabled = 1;
}
