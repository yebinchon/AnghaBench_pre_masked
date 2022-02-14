
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tca8418_keypad {TYPE_1__* client; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct tca8418_keypad*,int ,int*) ;
 int FUNC_3 (struct tca8418_keypad*) ;
 int FUNC_4 (struct tca8418_keypad*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct tca8418_keypad *VAR_7 = VAR_6;
 u8 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_7, VAR_4, &VAR_8);
 if (VAR_9) {
  FUNC_0(&VAR_7->client->dev,
   "unable to read REG_INT_STAT\n");
  return VAR_3;
 }

 if (!VAR_8)
  return VAR_3;

 if (VAR_8 & VAR_1)
  FUNC_1(&VAR_7->client->dev, "overflow occurred\n");

 if (VAR_8 & VAR_0)
  FUNC_3(VAR_7);


 VAR_8 = 0xff;
 VAR_9 = FUNC_4(VAR_7, VAR_4, VAR_8);
 if (VAR_9)
  FUNC_0(&VAR_7->client->dev,
   "unable to clear REG_INT_STAT\n");

 return VAR_2;
}
