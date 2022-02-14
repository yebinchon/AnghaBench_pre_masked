
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int buffer; int slave_adr; } ;
struct nmk_i2c_dev {int stop; TYPE_2__* adev; scalar_t__ result; TYPE_1__ cli; } ;
struct i2c_msg {int flags; int len; int buf; int addr; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 struct nmk_i2c_dev* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct nmk_i2c_dev*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nmk_i2c_dev*) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_0,
  struct i2c_msg VAR_1[], int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;
 struct nmk_i2c_dev *VAR_5 = FUNC_0(VAR_0);
 int VAR_6;

 FUNC_2(&VAR_5->adev->dev);


 for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {

  FUNC_4(VAR_5);

  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
   VAR_5->cli.slave_adr = VAR_1[VAR_4].addr;
   VAR_5->cli.buffer = VAR_1[VAR_4].buf;
   VAR_5->cli.count = VAR_1[VAR_4].len;
   VAR_5->stop = (VAR_4 < (VAR_2 - 1)) ? 0 : 1;
   VAR_5->result = 0;

   VAR_3 = FUNC_1(VAR_5, VAR_1[VAR_4].flags);
   if (VAR_3 != 0)
    break;
  }
  if (VAR_3 == 0)
   break;
 }

 FUNC_3(&VAR_5->adev->dev);


 if (VAR_3)
  return VAR_3;
 else
  return VAR_2;
}
