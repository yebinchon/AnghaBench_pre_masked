
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;
struct ak8975_data {scalar_t__ eoc_gpio; int * asa; TYPE_1__* def; int * raw_to_gauss; } ;
struct TYPE_2__ {int (* raw_to_gauss ) (int ) ;int * ctrl_regs; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ak8975_data*,int ) ;
 int FUNC_1 (struct ak8975_data*) ;
 int FUNC_2 (int *,char*) ;
 struct iio_dev* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,int ,int,int *) ;
 struct ak8975_data* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_3(VAR_3);
 struct ak8975_data *VAR_5 = FUNC_5(VAR_4);
 int VAR_6;


 VAR_6 = FUNC_0(VAR_5, VAR_1);
 if (VAR_6 < 0) {
  FUNC_2(&VAR_3->dev, "Error in setting fuse access mode\n");
  return VAR_6;
 }


 VAR_6 = FUNC_4(
   VAR_3, VAR_5->def->ctrl_regs[VAR_0],
   3, VAR_5->asa);
 if (VAR_6 < 0) {
  FUNC_2(&VAR_3->dev, "Not able to read asa data\n");
  return VAR_6;
 }


 VAR_6 = FUNC_0(VAR_5, VAR_2);
 if (VAR_6 < 0) {
  FUNC_2(&VAR_3->dev, "Error in setting power-down mode\n");
  return VAR_6;
 }

 if (VAR_5->eoc_gpio > 0 || VAR_3->irq > 0) {
  VAR_6 = FUNC_1(VAR_5);
  if (VAR_6 < 0) {
   FUNC_2(&VAR_3->dev,
    "Error setting data ready interrupt\n");
   return VAR_6;
  }
 }

 VAR_5->raw_to_gauss[0] = VAR_5->def->raw_to_gauss(VAR_5->asa[0]);
 VAR_5->raw_to_gauss[1] = VAR_5->def->raw_to_gauss(VAR_5->asa[1]);
 VAR_5->raw_to_gauss[2] = VAR_5->def->raw_to_gauss(VAR_5->asa[2]);

 return 0;
}
