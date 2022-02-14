
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mxt_data {int max_reportid; int update_input; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct mxt_data*) ;
 int FUNC_2 (struct mxt_data*,int) ;

__attribute__((used)) static int FUNC_3(struct mxt_data *VAR_1)
{
 struct device *VAR_2 = &VAR_1->client->dev;
 int VAR_3, VAR_4;
 u8 VAR_5 = 2;

 VAR_3 = VAR_1->max_reportid;


 do {
  VAR_4 = FUNC_2(VAR_1, VAR_3);
  if (VAR_4 < VAR_3)
   return 0;
 } while (--VAR_5);

 if (VAR_1->update_input) {
  FUNC_1(VAR_1);
  VAR_1->update_input = 0;
 }

 FUNC_0(VAR_2, "CHG pin isn't cleared\n");
 return -VAR_0;
}
