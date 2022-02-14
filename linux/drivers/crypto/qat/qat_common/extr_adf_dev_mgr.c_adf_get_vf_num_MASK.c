
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct adf_accel_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {int number; } ;


 TYPE_2__* FUNC_0 (struct adf_accel_dev*) ;
 int FUNC_1 (struct adf_accel_dev*) ;

__attribute__((used)) static int FUNC_2(struct adf_accel_dev *VAR_0)
{
 return (FUNC_0(VAR_0)->bus->number << 8) | FUNC_1(VAR_0);
}
