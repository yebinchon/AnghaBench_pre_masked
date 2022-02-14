
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct edt_ft5x06_ts_data {int version; int client; int factory_mode; } ;





 int VAR_0 ;


 int FUNC_0 (int ,int,int*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct edt_ft5x06_ts_data *VAR_1,
         u8 VAR_2, u8 VAR_3)
{
 u8 VAR_4[4];

 switch (VAR_1->version) {
 case 132:
  VAR_4[0] = VAR_1->factory_mode ? 0xf3 : 0xfc;
  VAR_4[1] = VAR_1->factory_mode ? VAR_2 & 0x7f : VAR_2 & 0x3f;
  VAR_4[2] = VAR_3;
  VAR_4[3] = VAR_4[0] ^ VAR_4[1] ^ VAR_4[2];
  return FUNC_0(VAR_1->client, 4,
     VAR_4, 0, ((void*)0));

 case 131:
 case 130:
 case 129:
 case 128:
  VAR_4[0] = VAR_2;
  VAR_4[1] = VAR_3;

  return FUNC_0(VAR_1->client, 2,
     VAR_4, 0, ((void*)0));

 default:
  return -VAR_0;
 }
}
