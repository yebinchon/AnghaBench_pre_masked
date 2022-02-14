
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max732x_platform_data {int gpio_base; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct max732x_platform_data* FUNC_0 (struct device*,int,int ) ;

__attribute__((used)) static struct max732x_platform_data *FUNC_1(struct device *VAR_1)
{
 struct max732x_platform_data *VAR_2;

 VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->gpio_base = -1;

 return VAR_2;
}
