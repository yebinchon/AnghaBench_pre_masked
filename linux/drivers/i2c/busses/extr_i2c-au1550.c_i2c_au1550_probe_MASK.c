
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; int id; } ;
struct TYPE_3__ {int * parent; } ;
struct TYPE_4__ {int name; TYPE_1__ dev; struct i2c_au1550_data* algo_data; int * algo; int nr; } ;
struct i2c_au1550_data {int xfer_timeout; TYPE_2__ adap; int psc_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,struct resource*) ;
 struct i2c_au1550_data* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct i2c_au1550_data*) ;
 int FUNC_6 (struct i2c_au1550_data*) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct i2c_au1550_data*) ;
 int FUNC_9 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_10(struct platform_device *VAR_4)
{
 struct i2c_au1550_data *VAR_5;
 struct resource *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(&VAR_4->dev, sizeof(struct i2c_au1550_data),
       VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_7(VAR_4, VAR_2, 0);
 VAR_5->psc_base = FUNC_2(&VAR_4->dev, VAR_6);
 if (FUNC_0(VAR_5->psc_base))
  return FUNC_1(VAR_5->psc_base);

 VAR_5->xfer_timeout = 200;

 VAR_5->adap.nr = VAR_4->id;
 VAR_5->adap.algo = &VAR_3;
 VAR_5->adap.algo_data = VAR_5;
 VAR_5->adap.dev.parent = &VAR_4->dev;
 FUNC_9(VAR_5->adap.name, "Au1xxx PSC I2C", sizeof(VAR_5->adap.name));


 FUNC_6(VAR_5);

 VAR_7 = FUNC_4(&VAR_5->adap);
 if (VAR_7) {
  FUNC_5(VAR_5);
  return VAR_7;
 }

 FUNC_8(VAR_4, VAR_5);
 return 0;
}
