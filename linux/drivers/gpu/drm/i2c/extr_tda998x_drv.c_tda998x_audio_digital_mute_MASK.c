
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda998x_priv {int audio_mutex; } ;
struct device {int dummy; } ;


 struct tda998x_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tda998x_priv*,int) ;

int FUNC_4(struct device *VAR_0, void *VAR_1, bool VAR_2)
{
 struct tda998x_priv *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(&VAR_3->audio_mutex);

 FUNC_3(VAR_3, VAR_2);

 FUNC_2(&VAR_3->audio_mutex);
 return 0;
}
