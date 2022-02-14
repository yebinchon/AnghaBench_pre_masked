
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct goodix_ts_data {int int_trigger_type; int max_touch_num; int input_dev; TYPE_2__* client; TYPE_1__* chip; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int config_len; int config_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (TYPE_2__*,int ,int*,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct goodix_ts_data *VAR_8)
{
 u8 VAR_9[VAR_2];
 int VAR_10, VAR_11;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_8->client, VAR_8->chip->config_addr,
    VAR_9, VAR_8->chip->config_len);
 if (VAR_12) {
  FUNC_0(&VAR_8->client->dev, "Error reading config: %d\n",
    VAR_12);
  VAR_8->int_trigger_type = VAR_3;
  VAR_8->max_touch_num = VAR_4;
  return;
 }

 VAR_8->int_trigger_type = VAR_9[VAR_7] & 0x03;
 VAR_8->max_touch_num = VAR_9[VAR_5] & 0x0f;

 VAR_10 = FUNC_1(&VAR_9[VAR_6]);
 VAR_11 = FUNC_1(&VAR_9[VAR_6 + 2]);
 if (VAR_10 && VAR_11) {
  FUNC_3(VAR_8->input_dev, VAR_0, VAR_10 - 1);
  FUNC_3(VAR_8->input_dev, VAR_1, VAR_11 - 1);
 }
}
