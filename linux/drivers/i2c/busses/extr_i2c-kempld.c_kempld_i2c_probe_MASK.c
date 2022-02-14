
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {int parent; } ;
struct platform_device {TYPE_5__ dev; } ;
struct TYPE_7__ {TYPE_5__* parent; } ;
struct TYPE_8__ {int nr; TYPE_1__ dev; } ;
struct kempld_i2c_data {int was_active; TYPE_5__* dev; TYPE_2__ adap; struct kempld_device_data* pld; } ;
struct kempld_device_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct kempld_device_data* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,char*,int ) ;
 struct kempld_i2c_data* FUNC_2 (TYPE_5__*,int,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*,struct kempld_i2c_data*) ;
 int FUNC_5 (struct kempld_device_data*) ;
 TYPE_2__ VAR_6 ;
 int FUNC_6 (struct kempld_i2c_data*) ;
 int FUNC_7 (struct kempld_device_data*,int ) ;
 int FUNC_8 (struct kempld_device_data*) ;
 int FUNC_9 (struct platform_device*,struct kempld_i2c_data*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_7)
{
 struct kempld_device_data *VAR_8 = FUNC_0(VAR_7->dev.parent);
 struct kempld_i2c_data *VAR_9;
 int VAR_10;
 u8 VAR_11;

 VAR_9 = FUNC_2(&VAR_7->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->pld = VAR_8;
 VAR_9->dev = &VAR_7->dev;
 VAR_9->adap = VAR_6;
 VAR_9->adap.dev.parent = VAR_9->dev;
 FUNC_4(&VAR_9->adap, VAR_9);
 FUNC_9(VAR_7, VAR_9);

 FUNC_5(VAR_8);
 VAR_11 = FUNC_7(VAR_8, VAR_3);

 if (VAR_11 & VAR_2)
  VAR_9->was_active = 1;

 FUNC_6(VAR_9);
 FUNC_8(VAR_8);


 if (VAR_5 >= -1)
  VAR_9->adap.nr = VAR_5;
 VAR_10 = FUNC_3(&VAR_9->adap);
 if (VAR_10)
  return VAR_10;

 FUNC_1(VAR_9->dev, "I2C bus initialized at %dkHz\n",
   VAR_4);

 return 0;
}
