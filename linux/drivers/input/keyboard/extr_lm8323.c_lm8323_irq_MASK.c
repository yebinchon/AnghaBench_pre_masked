
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm8323_chip {int lock; int * pwm; TYPE_1__* client; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct lm8323_chip*) ;
 int FUNC_4 (struct lm8323_chip*) ;
 int FUNC_5 (struct lm8323_chip*,int ,int*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct lm8323_chip*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_8, void *VAR_9)
{
 struct lm8323_chip *VAR_10 = VAR_9;
 u8 VAR_11;
 int VAR_12;

 FUNC_6(&VAR_10->lock);

 while ((FUNC_5(VAR_10, VAR_6, &VAR_11, 1) == 1) && VAR_11) {
  if (FUNC_2(VAR_11 & VAR_1))
   FUNC_8(VAR_10);
  if (VAR_11 & VAR_4) {

   FUNC_1(&VAR_10->client->dev, "rotator fired\n");
  }
  if (VAR_11 & VAR_0) {
   FUNC_1(&VAR_10->client->dev, "error!\n");
   FUNC_4(VAR_10);
  }
  if (VAR_11 & VAR_2) {
   FUNC_0(&VAR_10->client->dev, "chip lost config; "
        "reinitialising\n");
   FUNC_3(VAR_10);
  }
  for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
   if (VAR_11 & (VAR_3 << VAR_12)) {
    FUNC_1(&VAR_10->client->dev,
      "pwm%d engine completed\n", VAR_12);
    FUNC_9(&VAR_10->pwm[VAR_12]);
   }
  }
 }

 FUNC_7(&VAR_10->lock);

 return VAR_5;
}
