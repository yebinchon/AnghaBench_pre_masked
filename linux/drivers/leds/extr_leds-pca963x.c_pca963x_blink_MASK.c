
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pca963x_led {int led_num; int gdc; int gfrq; TYPE_2__* chip; } ;
struct TYPE_4__ {int mutex; int client; TYPE_1__* chipdef; } ;
struct TYPE_3__ {int ledout_base; int grppwm; int grpfreq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct pca963x_led *VAR_3)
{
 u8 VAR_4 = VAR_3->chip->chipdef->ledout_base +
  (VAR_3->led_num / 4);
 u8 VAR_5;
 u8 VAR_6 = FUNC_0(VAR_3->chip->client,
       VAR_1);
 int VAR_7 = 2 * (VAR_3->led_num % 4);
 u8 VAR_8 = 0x3 << VAR_7;

 FUNC_1(VAR_3->chip->client,
   VAR_3->chip->chipdef->grppwm, VAR_3->gdc);

 FUNC_1(VAR_3->chip->client,
   VAR_3->chip->chipdef->grpfreq, VAR_3->gfrq);

 if (!(VAR_6 & VAR_2))
  FUNC_1(VAR_3->chip->client, VAR_1,
   VAR_6 | VAR_2);

 FUNC_2(&VAR_3->chip->mutex);
 VAR_5 = FUNC_0(VAR_3->chip->client, VAR_4);
 if ((VAR_5 & VAR_8) != (VAR_0 << VAR_7))
  FUNC_1(VAR_3->chip->client, VAR_4,
   (VAR_5 & ~VAR_8) | (VAR_0 << VAR_7));
 FUNC_3(&VAR_3->chip->mutex);
}
