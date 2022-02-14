
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drv2667_data {int frequency; unsigned int page; TYPE_1__* client; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct drv2667_data *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;
 int VAR_8;




 VAR_7 = (VAR_5->frequency * 1000) / 78125;
 if (VAR_7 <= 0) {
  FUNC_0(&VAR_5->client->dev,
   "ERROR: Frequency calculated to %i\n", VAR_7);
  return -VAR_3;
 }

 VAR_8 = FUNC_1(VAR_5->regmap, VAR_0, &VAR_6);
 if (VAR_8) {
  FUNC_0(&VAR_5->client->dev,
   "Failed to read the page number: %d\n", VAR_8);
  return -VAR_4;
 }

 if (VAR_6 == VAR_1 ||
  VAR_5->page != VAR_6) {
  VAR_8 = FUNC_2(VAR_5->regmap,
    VAR_0, VAR_5->page);
  if (VAR_8) {
   FUNC_0(&VAR_5->client->dev,
    "Failed to set the page: %d\n", VAR_8);
   return -VAR_4;
  }
 }

 VAR_8 = FUNC_2(VAR_5->regmap, VAR_2, VAR_7);
 if (VAR_8)
  FUNC_0(&VAR_5->client->dev,
    "Failed to set the frequency: %d\n", VAR_8);


 if (VAR_6 == VAR_1 ||
  VAR_5->page != VAR_6) {
  VAR_8 = FUNC_2(VAR_5->regmap, VAR_0, VAR_6);
  if (VAR_8) {
   FUNC_0(&VAR_5->client->dev,
    "Failed to set the page: %d\n", VAR_8);
   return -VAR_4;
  }
 }

 return VAR_8;
}
