
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_i2c_dev {int latency; int dev; int (* set_mpu_wkup_lat ) (int ,int) ;} ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dummy; } ;


 struct omap_i2c_dev* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct omap_i2c_dev*) ;
 int FUNC_2 (struct omap_i2c_dev*) ;
 int FUNC_3 (struct i2c_adapter*,struct i2c_msg*,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int
FUNC_9(struct i2c_adapter *VAR_0, struct i2c_msg VAR_1[], int VAR_2,
       bool VAR_3)
{
 struct omap_i2c_dev *VAR_4 = FUNC_0(VAR_0);
 int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_4(VAR_4->dev);
 if (VAR_6 < 0)
  goto out;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 < 0)
  goto out;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6 < 0)
  goto out;

 if (VAR_4->set_mpu_wkup_lat != ((void*)0))
  VAR_4->set_mpu_wkup_lat(VAR_4->dev, VAR_4->latency);

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_6 = FUNC_3(VAR_0, &VAR_1[VAR_5], (VAR_5 == (VAR_2 - 1)),
          VAR_3);
  if (VAR_6 != 0)
   break;
 }

 if (VAR_6 == 0)
  VAR_6 = VAR_2;

 FUNC_1(VAR_4);

 if (VAR_4->set_mpu_wkup_lat != ((void*)0))
  VAR_4->set_mpu_wkup_lat(VAR_4->dev, -1);

out:
 FUNC_5(VAR_4->dev);
 FUNC_6(VAR_4->dev);
 return VAR_6;
}
