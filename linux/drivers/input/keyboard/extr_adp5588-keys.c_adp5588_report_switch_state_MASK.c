
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct adp5588_kpad {int gpimapsize; int input; TYPE_1__* gpimap; TYPE_2__* client; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {unsigned short pin; int sw_evt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int *,char*,unsigned short) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct adp5588_kpad *VAR_6)
{
 int VAR_7 = FUNC_0(VAR_6->client, VAR_0);
 int VAR_8 = FUNC_0(VAR_6->client, VAR_1);
 int VAR_9 = FUNC_0(VAR_6->client, VAR_2);
 int VAR_10, VAR_11;
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_6->gpimapsize; VAR_12++) {
  unsigned short VAR_13 = VAR_6->gpimap[VAR_12].pin;

  if (VAR_13 <= VAR_5) {
   VAR_10 = VAR_7;
   VAR_11 = VAR_13 - VAR_4;
  } else if ((VAR_13 - VAR_3) < 8) {
   VAR_10 = VAR_8;
   VAR_11 = VAR_13 - VAR_3;
  } else {
   VAR_10 = VAR_9;
   VAR_11 = VAR_13 - VAR_3 - 8;
  }

  if (VAR_10 < 0) {
   FUNC_1(&VAR_6->client->dev,
    "Can't read GPIO_DAT_STAT switch %d default to OFF\n",
    VAR_13);
   VAR_10 = 0;
  }

  FUNC_2(VAR_6->input,
        VAR_6->gpimap[VAR_12].sw_evt,
        !(VAR_10 & (1 << VAR_11)));
 }

 FUNC_3(VAR_6->input);
}
