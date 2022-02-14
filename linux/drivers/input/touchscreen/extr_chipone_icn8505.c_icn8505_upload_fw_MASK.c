
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icn8505_data {int firmware_name; TYPE_1__* client; } ;
struct firmware {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (struct icn8505_data*,int) ;
 int FUNC_2 (struct icn8505_data*,struct firmware const*) ;
 int FUNC_3 (struct firmware const*) ;
 int FUNC_4 (struct firmware const**,int ,struct device*) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct icn8505_data *VAR_1)
{
 struct device *VAR_2 = &VAR_1->client->dev;
 const struct firmware *VAR_3;
 int VAR_4, VAR_5;






 VAR_5 = FUNC_4(&VAR_3, VAR_1->firmware_name, VAR_2);
 if (VAR_5) {
  FUNC_0(VAR_2, "Firmware request error %d\n", VAR_5);
  return VAR_5;
 }


 if (FUNC_1(VAR_1, 0x000a) == 0x85)
  goto success;

 for (VAR_4 = 1; VAR_4 <= VAR_0; VAR_4++) {
  VAR_5 = FUNC_2(VAR_1, VAR_3);
  if (!VAR_5)
   goto success;

  FUNC_0(VAR_2, "Failed to upload firmware: %d (attempt %d/%d)\n",
   VAR_5, VAR_4, VAR_0);
  FUNC_5(2000, 5000);
 }

success:
 FUNC_3(VAR_3);
 return VAR_5;
}
