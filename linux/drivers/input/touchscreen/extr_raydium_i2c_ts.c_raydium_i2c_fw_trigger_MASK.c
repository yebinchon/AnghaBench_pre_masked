
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; int member_10; int member_9; int member_8; int member_0; } ;
typedef TYPE_1__ u8 ;
struct i2c_client {int dev; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct i2c_client*,TYPE_1__ const*,int,int ) ;

__attribute__((used)) static bool FUNC_2(struct i2c_client *VAR_1)
{
 static const u8 VAR_2[5][11] = {
  { 0, 0x09, 0x71, 0x0C, 0x09, 0x00, 0x50, 0xD7, 0, 0, 0 },
  { 0, 0x09, 0x71, 0x04, 0x09, 0x00, 0x50, 0xA5, 0, 0, 0 },
  { 0, 0x09, 0x71, 0x04, 0x09, 0x00, 0x50, 0x00, 0, 0, 0 },
  { 0, 0x09, 0x71, 0x04, 0x09, 0x00, 0x50, 0xA5, 0, 0, 0 },
  { 0, 0x09, 0x71, 0x0C, 0x09, 0x00, 0x50, 0x00, 0, 0, 0 },
 };
 int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < 5; VAR_3++) {
  VAR_4 = FUNC_1(VAR_1, VAR_2[VAR_3], sizeof(VAR_2[VAR_3]),
       VAR_0);
  if (VAR_4) {
   FUNC_0(&VAR_1->dev,
    "fw trigger failed at step %d: %d\n",
    VAR_3, VAR_4);
   return VAR_4;
  }
 }

 return 0;
}
