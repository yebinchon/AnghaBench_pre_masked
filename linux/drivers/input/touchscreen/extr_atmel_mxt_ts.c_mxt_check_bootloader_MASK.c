
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct mxt_data {int bl_completion; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;

 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

 int VAR_4 ;


 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct mxt_data*,unsigned int*,int) ;
 unsigned int FUNC_2 (struct mxt_data*,unsigned int) ;
 int FUNC_3 (struct mxt_data*,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct mxt_data *VAR_5, unsigned int VAR_6,
    bool VAR_7)
{
 struct device *VAR_8 = &VAR_5->client->dev;
 u8 VAR_9;
 int VAR_10;

recheck:
 if (VAR_7) {






  VAR_10 = FUNC_3(VAR_5, &VAR_5->bl_completion,
           VAR_4);
  if (VAR_10) {






   FUNC_0(VAR_8, "Update wait error %d\n", VAR_10);
   return VAR_10;
  }
 }

 VAR_10 = FUNC_1(VAR_5, &VAR_9, 1);
 if (VAR_10)
  return VAR_10;

 if (VAR_6 == 129)
  VAR_9 = FUNC_2(VAR_5, VAR_9);

 switch (VAR_6) {
 case 129:
 case 128:
 case 131:
  VAR_9 &= ~VAR_1;
  break;
 case 130:
  if (VAR_9 == VAR_2) {
   goto recheck;
  } else if (VAR_9 == VAR_3) {
   FUNC_0(VAR_8, "Bootloader CRC fail\n");
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }

 if (VAR_9 != VAR_6) {
  FUNC_0(VAR_8, "Invalid bootloader state %02X != %02X\n",
   VAR_9, VAR_6);
  return -VAR_0;
 }

 return 0;
}
