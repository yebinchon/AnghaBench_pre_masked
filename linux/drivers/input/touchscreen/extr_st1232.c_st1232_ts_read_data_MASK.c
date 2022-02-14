
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct st1232_ts_finger {int is_valid; int x; int y; int t; } ;
struct st1232_ts_data {int* read_buf; int read_buf_len; TYPE_1__* chip_info; struct i2c_client* client; struct st1232_ts_finger* finger; } ;
struct i2c_msg {int len; int* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
struct TYPE_2__ {int start_reg; int max_fingers; scalar_t__ have_z; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct st1232_ts_data *VAR_1)
{
 struct st1232_ts_finger *VAR_2 = VAR_1->finger;
 struct i2c_client *VAR_3 = VAR_1->client;
 struct i2c_msg VAR_4[2];
 int VAR_5;
 int VAR_6, VAR_7;
 u8 VAR_8 = VAR_1->chip_info->start_reg;
 u8 *VAR_9 = VAR_1->read_buf;


 VAR_4[0].addr = VAR_3->addr;
 VAR_4[0].flags = 0;
 VAR_4[0].len = 1;
 VAR_4[0].buf = &VAR_8;

 VAR_4[1].addr = VAR_1->client->addr;
 VAR_4[1].flags = VAR_0;
 VAR_4[1].len = VAR_1->read_buf_len;
 VAR_4[1].buf = VAR_9;

 VAR_5 = FUNC_0(VAR_3->adapter, VAR_4, 2);
 if (VAR_5 < 0)
  return VAR_5;

 for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_1->chip_info->max_fingers; VAR_6++, VAR_7 += 3) {
  VAR_2[VAR_6].is_valid = VAR_9[VAR_6 + VAR_7] >> 7;
  if (VAR_2[VAR_6].is_valid) {
   VAR_2[VAR_6].x = ((VAR_9[VAR_6 + VAR_7] & 0x0070) << 4) |
     VAR_9[VAR_6 + VAR_7 + 1];
   VAR_2[VAR_6].y = ((VAR_9[VAR_6 + VAR_7] & 0x0007) << 8) |
     VAR_9[VAR_6 + VAR_7 + 2];


   if (VAR_1->chip_info->have_z)
    VAR_2[VAR_6].t = VAR_9[VAR_6 + 6];
  }
 }

 return 0;
}
