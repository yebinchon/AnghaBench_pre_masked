
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mxt_data {TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int,char*) ;
 int FUNC_1 (struct mxt_data*,int*,int) ;
 int FUNC_2 (struct mxt_data*,int) ;

__attribute__((used)) static int FUNC_3(struct mxt_data *VAR_2, bool VAR_3)
{
 struct device *VAR_4 = &VAR_2->client->dev;
 int VAR_5;
 u8 VAR_6;
 bool VAR_7;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_2, &VAR_6, 1);
 if (VAR_5)
  return VAR_5;


 VAR_7 = (VAR_6 & ~VAR_1) == VAR_0;

 FUNC_0(VAR_4, "Detected bootloader, status:%02X%s\n",
   VAR_6, VAR_7 ? ", APP_CRC_FAIL" : "");

 return 0;
}
