
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_i2c_data {int dummy; } ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct platform_device {int dev; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__,int ,int ,int ,struct sh_mobile_i2c_data*) ;
 struct resource* FUNC_3 (struct platform_device*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3, struct sh_mobile_i2c_data *VAR_4)
{
 struct resource *VAR_5;
 resource_size_t VAR_6;
 int VAR_7 = 0, VAR_8;

 while ((VAR_5 = FUNC_3(VAR_3, VAR_1, VAR_7))) {
  for (VAR_6 = VAR_5->start; VAR_6 <= VAR_5->end; VAR_6++) {
   VAR_8 = FUNC_2(&VAR_3->dev, VAR_6, VAR_2,
       0, FUNC_1(&VAR_3->dev), VAR_4);
   if (VAR_8) {
    FUNC_0(&VAR_3->dev, "cannot request IRQ %pa\n", &VAR_6);
    return VAR_8;
   }
  }
  VAR_7++;
 }

 return VAR_7 > 0 ? 0 : -VAR_0;
}
