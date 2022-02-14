
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct atlas_data {int regmap; TYPE_1__* client; } ;
typedef int __be16 ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,unsigned int,unsigned int) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ,int ,int *,int) ;
 int FUNC_4 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_5(struct atlas_data *VAR_7)
{
 struct device *VAR_8 = &VAR_7->client->dev;
 int VAR_9;
 unsigned int VAR_10;
 __be16 VAR_11;

 VAR_9 = FUNC_3(VAR_7->regmap, VAR_6, &VAR_11, 2);
 if (VAR_9)
  return VAR_9;

 VAR_10 = FUNC_0(VAR_11);
 FUNC_1(VAR_8, "probe set to K = %d.%.2d", VAR_10 / 100, VAR_10 % 100);

 VAR_9 = FUNC_4(VAR_7->regmap, VAR_0, &VAR_10);
 if (VAR_9)
  return VAR_9;

 if (!(VAR_10 & VAR_4)) {
  FUNC_2(VAR_8, "device has not been calibrated\n");
  return 0;
 }

 if (!(VAR_10 & VAR_1))
  FUNC_2(VAR_8, "device missing dry point calibration\n");

 if (VAR_10 & VAR_5) {
  FUNC_2(VAR_8, "device using single point calibration\n");
 } else {
  if (!(VAR_10 & VAR_3))
   FUNC_2(VAR_8, "device missing low point calibration\n");

  if (!(VAR_10 & VAR_2))
   FUNC_2(VAR_8, "device missing high point calibration\n");
 }

 return 0;
}
