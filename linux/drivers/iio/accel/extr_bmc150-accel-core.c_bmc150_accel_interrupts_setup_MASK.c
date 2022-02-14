
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct bmc150_accel_data {TYPE_1__* interrupts; } ;
struct TYPE_2__ {int * info; } ;


 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_0(struct iio_dev *VAR_2,
       struct bmc150_accel_data *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3->interrupts[VAR_4].info = &VAR_1[VAR_4];
}
