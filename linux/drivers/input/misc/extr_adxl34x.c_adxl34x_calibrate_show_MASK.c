
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int x; int y; int z; } ;
struct TYPE_3__ {int x; int y; int z; } ;
struct adxl34x {int mutex; TYPE_2__ swcal; TYPE_1__ hwcal; } ;
typedef int ssize_t ;


 struct adxl34x* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
          struct device_attribute *VAR_1, char *VAR_2)
{
 struct adxl34x *VAR_3 = FUNC_0(VAR_0);
 ssize_t VAR_4;

 FUNC_1(&VAR_3->mutex);
 VAR_4 = FUNC_3(VAR_2, "%d,%d,%d\n",
   VAR_3->hwcal.x * 4 + VAR_3->swcal.x,
   VAR_3->hwcal.y * 4 + VAR_3->swcal.y,
   VAR_3->hwcal.z * 4 + VAR_3->swcal.z);
 FUNC_2(&VAR_3->mutex);

 return VAR_4;
}
