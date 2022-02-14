
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sn_bridge {int panel; int regmap; } ;
struct drm_bridge {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ti_sn_bridge* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct drm_bridge *VAR_4)
{
 struct ti_sn_bridge *VAR_5 = FUNC_0(VAR_4);

 FUNC_1(VAR_5->panel);


 FUNC_3(VAR_5->regmap, VAR_0, VAR_3, 0);

 FUNC_4(VAR_5->regmap, VAR_1, 0);

 FUNC_4(VAR_5->regmap, VAR_2, 0);

 FUNC_2(VAR_5->panel);
}
