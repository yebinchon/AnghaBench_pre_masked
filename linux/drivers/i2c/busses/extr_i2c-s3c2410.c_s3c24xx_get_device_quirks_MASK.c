
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {int data; } ;
typedef int kernel_ulong_t ;
struct TYPE_4__ {int driver_data; } ;


 struct of_device_id* FUNC_0 (int ,scalar_t__) ;
 TYPE_2__* FUNC_1 (struct platform_device*) ;
 int VAR_0 ;

__attribute__((used)) static inline kernel_ulong_t FUNC_2(struct platform_device *VAR_1)
{
 if (VAR_1->dev.of_node) {
  const struct of_device_id *VAR_2;

  VAR_2 = FUNC_0(VAR_0, VAR_1->dev.of_node);
  return (kernel_ulong_t)VAR_2->data;
 }

 return FUNC_1(VAR_1)->driver_data;
}
