
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps3_system_bus_device {int dummy; } ;
struct TYPE_2__ {int mutex; scalar_t__ gpu; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_4(struct ps3_system_bus_device *VAR_1)
{
 int VAR_2;

 FUNC_2(&VAR_0.mutex);

 VAR_0.gpu--;
 if (VAR_0.gpu) {
  VAR_2 = 0;
  goto done;
 }

 VAR_2 = FUNC_1();
 FUNC_0(VAR_2);

done:
 FUNC_3(&VAR_0.mutex);
 return VAR_2;
}
