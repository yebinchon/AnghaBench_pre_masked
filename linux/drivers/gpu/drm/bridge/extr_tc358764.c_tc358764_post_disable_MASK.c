
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc358764 {int dev; int supplies; int panel; } ;
struct drm_bridge {int dummy; } ;


 int FUNC_0 (int ) ;
 struct tc358764* FUNC_1 (struct drm_bridge*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct tc358764*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct drm_bridge *VAR_0)
{
 struct tc358764 *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_3(VAR_1->panel);
 if (VAR_2 < 0)
  FUNC_2(VAR_1->dev, "error unpreparing panel (%d)\n", VAR_2);
 FUNC_5(VAR_1);
 FUNC_6(10000, 15000);
 VAR_2 = FUNC_4(FUNC_0(VAR_1->supplies), VAR_1->supplies);
 if (VAR_2 < 0)
  FUNC_2(VAR_1->dev, "error disabling regulators (%d)\n", VAR_2);
}
