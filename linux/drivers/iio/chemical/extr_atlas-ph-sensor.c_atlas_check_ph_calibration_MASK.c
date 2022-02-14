
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct atlas_data {int regmap; TYPE_1__* client; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct atlas_data *VAR_5)
{
 struct device *VAR_6 = &VAR_5->client->dev;
 int VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_1(VAR_5->regmap, VAR_0, &VAR_8);
 if (VAR_7)
  return VAR_7;

 if (!(VAR_8 & VAR_3)) {
  FUNC_0(VAR_6, "device has not been calibrated\n");
  return 0;
 }

 if (!(VAR_8 & VAR_2))
  FUNC_0(VAR_6, "device missing low point calibration\n");

 if (!(VAR_8 & VAR_4))
  FUNC_0(VAR_6, "device missing mid point calibration\n");

 if (!(VAR_8 & VAR_1))
  FUNC_0(VAR_6, "device missing high point calibration\n");

 return 0;
}
