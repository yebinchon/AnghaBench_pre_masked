
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct as5011_device {int input_dev; int i2c_client; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,int ,char) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct as5011_device *VAR_7 = VAR_6;
 int VAR_8;
 signed char VAR_9, VAR_10;

 VAR_8 = FUNC_0(VAR_7->i2c_client, VAR_2, &VAR_9);
 if (VAR_8 < 0)
  goto out;

 VAR_8 = FUNC_0(VAR_7->i2c_client, VAR_3, &VAR_10);
 if (VAR_8 < 0)
  goto out;

 FUNC_1(VAR_7->input_dev, VAR_0, VAR_9);
 FUNC_1(VAR_7->input_dev, VAR_1, VAR_10);
 FUNC_2(VAR_7->input_dev);

out:
 return VAR_4;
}
