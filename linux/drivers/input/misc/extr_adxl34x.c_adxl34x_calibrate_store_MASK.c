
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {scalar_t__ z; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_5__ {int x; int y; int z; } ;
struct TYPE_4__ {int x; int y; int z; } ;
struct adxl34x {int mutex; TYPE_3__ hwcal; TYPE_2__ saved; TYPE_1__ swcal; } ;
typedef size_t ssize_t ;
typedef int s8 ;


 int FUNC_0 (struct adxl34x*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct adxl34x* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
           struct device_attribute *VAR_4,
           const char *VAR_5, size_t VAR_6)
{
 struct adxl34x *VAR_7 = FUNC_1(VAR_3);






 FUNC_2(&VAR_7->mutex);
 VAR_7->hwcal.x -= (VAR_7->saved.x / 4);
 VAR_7->swcal.x = VAR_7->saved.x % 4;

 VAR_7->hwcal.y -= (VAR_7->saved.y / 4);
 VAR_7->swcal.y = VAR_7->saved.y % 4;

 VAR_7->hwcal.z -= (VAR_7->saved.z / 4);
 VAR_7->swcal.z = VAR_7->saved.z % 4;

 FUNC_0(VAR_7, VAR_0, (s8) VAR_7->hwcal.x);
 FUNC_0(VAR_7, VAR_1, (s8) VAR_7->hwcal.y);
 FUNC_0(VAR_7, VAR_2, (s8) VAR_7->hwcal.z);
 FUNC_3(&VAR_7->mutex);

 return VAR_6;
}
