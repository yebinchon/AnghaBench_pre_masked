
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mclk; } ;
struct sii902x {TYPE_1__ audio; int mutex; int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct sii902x* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_2, void *VAR_3)
{
 struct sii902x *VAR_4 = FUNC_1(VAR_2);

 FUNC_2(&VAR_4->mutex);

 FUNC_4(VAR_4->regmap, VAR_0,
       VAR_1);

 FUNC_3(&VAR_4->mutex);

 FUNC_0(VAR_4->audio.mclk);
}
