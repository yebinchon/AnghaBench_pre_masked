
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sn_bridge {int panel; int regmap; int dev; } ;
struct drm_bridge {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ti_sn_bridge* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct ti_sn_bridge*) ;

__attribute__((used)) static void FUNC_5(struct drm_bridge *VAR_2)
{
 struct ti_sn_bridge *VAR_3 = FUNC_0(VAR_2);

 FUNC_2(VAR_3->dev);


 FUNC_4(VAR_3);
 FUNC_3(VAR_3->regmap, VAR_1, VAR_0,
      VAR_0);

 FUNC_1(VAR_3->panel);
}
