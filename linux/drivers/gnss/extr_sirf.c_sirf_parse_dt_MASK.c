
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sirf_data {int speed; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct serdev_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,char*,int*) ;
 struct sirf_data* FUNC_1 (struct serdev_device*) ;

__attribute__((used)) static int FUNC_2(struct serdev_device *VAR_0)
{
 struct sirf_data *VAR_1 = FUNC_1(VAR_0);
 struct device_node *VAR_2 = VAR_0->dev.of_node;
 u32 VAR_3 = 9600;

 FUNC_0(VAR_2, "current-speed", &VAR_3);

 VAR_1->speed = VAR_3;

 return 0;
}
