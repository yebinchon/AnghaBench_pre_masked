
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_th_driver {int (* set_output ) (struct intel_th_device*,unsigned int) ;} ;
struct TYPE_2__ {int driver; } ;
struct intel_th_device {scalar_t__ host_mode; TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_th_device*,unsigned int) ;
 struct intel_th_driver* FUNC_1 (int ) ;
 struct intel_th_device* FUNC_2 (struct intel_th_device*) ;

int FUNC_3(struct intel_th_device *VAR_1,
   unsigned int VAR_2)
{
 struct intel_th_device *VAR_3 = FUNC_2(VAR_1);
 struct intel_th_driver *VAR_4 = FUNC_1(VAR_3->dev.driver);


 if (VAR_3->host_mode)
  return 0;

 if (!VAR_4->set_output)
  return -VAR_0;

 return VAR_4->set_output(VAR_3, VAR_2);
}
