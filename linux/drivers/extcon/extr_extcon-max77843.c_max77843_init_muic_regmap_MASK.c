
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max77693_dev {int i2c_muic; TYPE_1__* i2c; int irq_data_muic; int irq; int regmap_muic; } ;
struct TYPE_2__ {int dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct max77693_dev*) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,int ,int,int ,int *,int *) ;

__attribute__((used)) static int FUNC_8(struct max77693_dev *VAR_6)
{
 int VAR_7;

 VAR_6->i2c_muic = FUNC_4(VAR_6->i2c->adapter,
   VAR_0);
 if (FUNC_0(VAR_6->i2c_muic)) {
  FUNC_2(&VAR_6->i2c->dev,
    "Cannot allocate I2C device for MUIC\n");
  return FUNC_1(VAR_6->i2c_muic);
 }

 FUNC_5(VAR_6->i2c_muic, VAR_6);

 VAR_6->regmap_muic = FUNC_3(VAR_6->i2c_muic,
   &VAR_5);
 if (FUNC_0(VAR_6->regmap_muic)) {
  VAR_7 = FUNC_1(VAR_6->regmap_muic);
  goto err_muic_i2c;
 }

 VAR_7 = FUNC_7(VAR_6->regmap_muic, VAR_6->irq,
   VAR_3 | VAR_1 | VAR_2,
   0, &VAR_4, &VAR_6->irq_data_muic);
 if (VAR_7 < 0) {
  FUNC_2(&VAR_6->i2c->dev, "Cannot add MUIC IRQ chip\n");
  goto err_muic_i2c;
 }

 return 0;

err_muic_i2c:
 FUNC_6(VAR_6->i2c_muic);

 return VAR_7;
}
