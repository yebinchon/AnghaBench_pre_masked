
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drv2667_data {int frequency; int regmap; TYPE_1__* client; int page; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct drv2667_data*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct drv2667_data *VAR_5)
{
 int VAR_6;


 VAR_5->frequency = 195;
 VAR_5->page = VAR_2;

 VAR_6 = FUNC_3(VAR_5->regmap,
          VAR_3,
          FUNC_0(VAR_3));
 if (VAR_6) {
  FUNC_1(&VAR_5->client->dev,
   "Failed to write init registers: %d\n",
   VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_4(VAR_5->regmap, VAR_0, VAR_5->page);
 if (VAR_6) {
  FUNC_1(&VAR_5->client->dev, "Failed to set page: %d\n",
   VAR_6);
  goto error_out;
 }

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6)
  goto error_page;

 VAR_6 = FUNC_3(VAR_5->regmap,
          VAR_4,
          FUNC_0(VAR_4));
 if (VAR_6) {
  FUNC_1(&VAR_5->client->dev,
   "Failed to write page registers: %d\n",
   VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_4(VAR_5->regmap, VAR_0, VAR_1);
 return VAR_6;

error_page:
 FUNC_4(VAR_5->regmap, VAR_0, VAR_1);
error_out:
 return VAR_6;
}
