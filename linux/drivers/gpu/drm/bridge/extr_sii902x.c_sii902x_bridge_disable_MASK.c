
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii902x {int mutex; int regmap; } ;
struct drm_bridge {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sii902x* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct drm_bridge *VAR_2)
{
 struct sii902x *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(&VAR_3->mutex);

 FUNC_3(VAR_3->regmap, VAR_0,
      VAR_1,
      VAR_1);

 FUNC_2(&VAR_3->mutex);
}
