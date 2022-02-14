
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct input_dev {int dummy; } ;
struct arizona_haptics {TYPE_1__* arizona; int work; } ;
struct TYPE_2__ {scalar_t__ dapm; } ;


 int FUNC_0 (int *) ;
 struct arizona_haptics* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct snd_soc_component*,char*) ;
 struct snd_soc_component* FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct input_dev *VAR_0)
{
 struct arizona_haptics *VAR_1 = FUNC_1(VAR_0);
 struct snd_soc_component *VAR_2;

 FUNC_0(&VAR_1->work);

 if (VAR_1->arizona->dapm) {
  VAR_2 = FUNC_3(VAR_1->arizona->dapm);
  FUNC_2(VAR_2, "HAPTICS");
 }
}
