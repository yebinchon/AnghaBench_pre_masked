
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mxt_data {int bootloader_addr; TYPE_1__* client; TYPE_2__* info; } ;
struct TYPE_4__ {int family_id; } ;
struct TYPE_3__ {int addr; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static int FUNC_1(struct mxt_data *VAR_1, bool VAR_2)
{
 u8 VAR_3 = VAR_1->client->addr;
 u8 VAR_4;
 u8 VAR_5 = VAR_1->info ? VAR_1->info->family_id : 0;

 switch (VAR_3) {
 case 0x4a:
 case 0x4b:

  if (VAR_2 || VAR_5 >= 0xa2) {
   VAR_4 = VAR_3 - 0x24;
   break;
  }

 case 0x4c:
 case 0x4d:
 case 0x5a:
 case 0x5b:
  VAR_4 = VAR_3 - 0x26;
  break;

 default:
  FUNC_0(&VAR_1->client->dev,
   "Appmode i2c address 0x%02x not found\n",
   VAR_3);
  return -VAR_0;
 }

 VAR_1->bootloader_addr = VAR_4;
 return 0;
}
