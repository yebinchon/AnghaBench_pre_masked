
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct edt_ft5x06_ts_data {int version; TYPE_1__* client; int factory_mode; } ;
struct TYPE_2__ {int dev; } ;





 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (TYPE_1__*,int,int*,int,int*) ;

__attribute__((used)) static int FUNC_2(struct edt_ft5x06_ts_data *VAR_2,
        u8 VAR_3)
{
 u8 VAR_4[2], VAR_5[2];
 int VAR_6;

 switch (VAR_2->version) {
 case 132:
  VAR_4[0] = VAR_2->factory_mode ? 0xf3 : 0xfc;
  VAR_4[1] = VAR_2->factory_mode ? VAR_3 & 0x7f : VAR_3 & 0x3f;
  VAR_4[1] |= VAR_2->factory_mode ? 0x80 : 0x40;

  VAR_6 = FUNC_1(VAR_2->client, 2, VAR_4, 2,
      VAR_5);
  if (VAR_6)
   return VAR_6;

  if ((VAR_4[0] ^ VAR_4[1] ^ VAR_5[0]) != VAR_5[1]) {
   FUNC_0(&VAR_2->client->dev,
    "crc error: 0x%02x expected, got 0x%02x\n",
    VAR_4[0] ^ VAR_4[1] ^ VAR_5[0],
    VAR_5[1]);
   return -VAR_1;
  }
  break;


 case 131:
 case 130:
 case 129:
 case 128:
  VAR_4[0] = VAR_3;
  VAR_6 = FUNC_1(VAR_2->client, 1,
      VAR_4, 1, VAR_5);
  if (VAR_6)
   return VAR_6;
  break;

 default:
  return -VAR_0;
 }

 return VAR_5[0];
}
