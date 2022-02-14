
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int divider; } ;
struct inv_mpu6050_state {int lock; TYPE_1__ chip_config; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct device*) ;
 struct inv_mpu6050_state* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,char*,unsigned int) ;

__attribute__((used)) static ssize_t
FUNC_6(struct device *VAR_1, struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct inv_mpu6050_state *VAR_4 = FUNC_2(FUNC_1(VAR_1));
 unsigned VAR_5;

 FUNC_3(&VAR_4->lock);
 VAR_5 = FUNC_0(VAR_4->chip_config.divider);
 FUNC_4(&VAR_4->lock);

 return FUNC_5(VAR_3, VAR_0, "%u\n", VAR_5);
}
