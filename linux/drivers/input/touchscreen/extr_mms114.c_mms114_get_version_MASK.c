
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mms114_data {int type; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct mms114_data*,int ,int,int *) ;
 int FUNC_1 (struct device*,char*,int ,int ,int ,...) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(struct mms114_data *VAR_3)
{
 struct device *VAR_4 = &VAR_3->client->dev;
 u8 VAR_5[6];
 int VAR_6;
 int VAR_7;

 switch (VAR_3->type) {
 case 128:
  VAR_7 = FUNC_0(VAR_3, VAR_2, 3, VAR_5);
  if (VAR_7)
   return VAR_7;

  VAR_6 = FUNC_2(VAR_3->client,
        VAR_1);
  if (VAR_6 < 0)
   return VAR_6;

  FUNC_1(VAR_4, "TSP FW Rev: bootloader 0x%x / core 0x%x / config 0x%x, Compat group: %c\n",
    VAR_5[0], VAR_5[1], VAR_5[2], VAR_6);
  break;

 case 129:
  VAR_7 = FUNC_0(VAR_3, VAR_0, 6, VAR_5);
  if (VAR_7)
   return VAR_7;

  FUNC_1(VAR_4, "TSP Rev: 0x%x, HW Rev: 0x%x, Firmware Ver: 0x%x\n",
    VAR_5[0], VAR_5[1], VAR_5[3]);
  break;
 }

 return 0;
}
