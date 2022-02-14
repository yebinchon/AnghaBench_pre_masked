
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mip4_ts {int event_format; int key_num; unsigned short* key_code; TYPE_1__* client; int input; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,unsigned short,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,int ,int ,unsigned short) ;
 int FUNC_3 (int ,unsigned short,int) ;

__attribute__((used)) static void FUNC_4(struct mip4_ts *VAR_2, u8 *VAR_3)
{
 u8 VAR_4;
 bool VAR_5;

 switch (VAR_2->event_format) {
 case 0:
 case 1:
  VAR_4 = VAR_3[0] & 0x0F;
  VAR_5 = VAR_3[0] & 0x80;
  break;

 case 3:
 default:
  VAR_4 = VAR_3[0] & 0x0F;
  VAR_5 = VAR_3[1] & 0x01;
  break;
 }


 if (VAR_4 >= 1 && VAR_4 <= VAR_2->key_num) {
  unsigned short VAR_6 = VAR_2->key_code[VAR_4 - 1];

  FUNC_0(&VAR_2->client->dev,
   "Key - ID: %d, keycode: %d, state: %d\n",
   VAR_4, VAR_6, VAR_5);

  FUNC_2(VAR_2->input, VAR_0, VAR_1, VAR_6);
  FUNC_3(VAR_2->input, VAR_6, VAR_5);

 } else {
  FUNC_1(&VAR_2->client->dev, "Unknown key: %d\n", VAR_4);
 }
}
