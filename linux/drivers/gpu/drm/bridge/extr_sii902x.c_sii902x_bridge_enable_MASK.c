
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii902x {int mutex; int regmap; } ;
struct drm_bridge {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sii902x* FUNC_1 (struct drm_bridge*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct drm_bridge *VAR_4)
{
 struct sii902x *VAR_5 = FUNC_1(VAR_4);

 FUNC_2(&VAR_5->mutex);

 FUNC_4(VAR_5->regmap, VAR_1,
      VAR_0,
      FUNC_0(0));
 FUNC_4(VAR_5->regmap, VAR_2,
      VAR_3, 0);

 FUNC_3(&VAR_5->mutex);
}
