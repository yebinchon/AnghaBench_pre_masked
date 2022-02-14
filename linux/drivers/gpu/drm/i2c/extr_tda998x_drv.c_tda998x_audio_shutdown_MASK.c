
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ena_ap; } ;
struct tda998x_priv {int audio_mutex; TYPE_1__ audio; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct tda998x_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tda998x_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1, void *VAR_2)
{
 struct tda998x_priv *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(&VAR_3->audio_mutex);

 FUNC_3(VAR_3, VAR_0, 0);
 VAR_3->audio.ena_ap = 0;

 FUNC_2(&VAR_3->audio_mutex);
}
