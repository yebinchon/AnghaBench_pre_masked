
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct netxbig_gpio_ext {int num_addr; int num_data; int enable; int * data; int * addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,char*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2,
    struct netxbig_gpio_ext *VAR_3)
{
 int VAR_4;
 int VAR_5;

 if (FUNC_1(!VAR_3))
  return -VAR_0;


 for (VAR_5 = 0; VAR_5 < VAR_3->num_addr; VAR_5++) {
  VAR_4 = FUNC_0(&VAR_2->dev, VAR_3->addr[VAR_5],
         VAR_1,
         "GPIO extension addr");
  if (VAR_4)
   return VAR_4;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->num_data; VAR_5++) {
  VAR_4 = FUNC_0(&VAR_2->dev, VAR_3->data[VAR_5],
         VAR_1,
         "GPIO extension data");
  if (VAR_4)
   return VAR_4;
 }

 VAR_4 = FUNC_0(&VAR_2->dev, VAR_3->enable,
        VAR_1,
        "GPIO extension enable");
 if (VAR_4)
  return VAR_4;

 return 0;
}
