
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {unsigned int (* DeviceSize ) () ;} ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned int FUNC_0 () ;

unsigned
FUNC_1()
{
  unsigned VAR_2, VAR_3, VAR_4;

  VAR_2 = sizeof(struct device);
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    if (VAR_1[VAR_4].DeviceSize) {
      VAR_3 = (*VAR_1[VAR_4].DeviceSize)();
      if (VAR_2 < VAR_3)
        VAR_2 = VAR_3;
    }

  return VAR_2;
}
