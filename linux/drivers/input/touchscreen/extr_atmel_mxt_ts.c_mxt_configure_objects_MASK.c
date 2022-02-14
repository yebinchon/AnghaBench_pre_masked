
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxt_data {scalar_t__ multitouch; TYPE_1__* client; } ;
struct firmware {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct mxt_data*) ;
 int FUNC_3 (struct mxt_data*) ;
 int FUNC_4 (struct mxt_data*) ;
 int FUNC_5 (struct mxt_data*,struct firmware const*) ;

__attribute__((used)) static int FUNC_6(struct mxt_data *VAR_0,
     const struct firmware *VAR_1)
{
 struct device *VAR_2 = &VAR_0->client->dev;
 int VAR_3;

 VAR_3 = FUNC_3(VAR_0);
 if (VAR_3) {
  FUNC_0(VAR_2, "Failed to initialize power cfg\n");
  return VAR_3;
 }

 if (VAR_1) {
  VAR_3 = FUNC_5(VAR_0, VAR_1);
  if (VAR_3)
   FUNC_1(VAR_2, "Error %d updating config\n", VAR_3);
 }

 if (VAR_0->multitouch) {
  VAR_3 = FUNC_4(VAR_0);
  if (VAR_3)
   return VAR_3;
 } else {
  FUNC_1(VAR_2, "No touch object detected\n");
 }

 FUNC_2(VAR_0);

 return 0;
}
