
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ brightness; } ;
struct tm2_touchkey_data {int num_keycodes; TYPE_2__ led_dev; TYPE_1__* variant; int input_dev; int * keycodes; TYPE_3__* client; } ;
typedef int irqreturn_t ;
struct TYPE_7__ {int dev; } ;
struct TYPE_5__ {scalar_t__ fixed_regulator; int keycode_reg; scalar_t__ no_reg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 struct tm2_touchkey_data *VAR_6 = VAR_5;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 if (VAR_6->variant->no_reg)
  VAR_7 = FUNC_2(VAR_6->client);
 else
  VAR_7 = FUNC_3(VAR_6->client,
      VAR_6->variant->keycode_reg);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_6->client->dev,
   "failed to read i2c data: %d\n", VAR_7);
  goto out;
 }

 VAR_8 = (VAR_7 & VAR_2) - 1;
 if (VAR_8 < 0 || VAR_8 >= VAR_6->num_keycodes) {
  FUNC_1(&VAR_6->client->dev,
    "invalid keycode index %d\n", VAR_8);
  goto out;
 }

 if (VAR_7 & VAR_3) {
  for (VAR_9 = 0; VAR_9 < VAR_6->num_keycodes; VAR_9++)
   FUNC_4(VAR_6->input_dev,
      VAR_6->keycodes[VAR_9], 0);
 } else {
  FUNC_4(VAR_6->input_dev,
     VAR_6->keycodes[VAR_8], 1);
 }

 FUNC_5(VAR_6->input_dev);

out:
 if (VAR_6->variant->fixed_regulator &&
    VAR_7 & VAR_3) {

  if (VAR_6->led_dev.brightness == VAR_1)
   FUNC_6(&VAR_6->led_dev,
       VAR_1);
 }

 return VAR_0;
}
