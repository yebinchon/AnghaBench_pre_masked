
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_data {int avs_intr_base; int base; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct private_data* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct private_data *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 FUNC_1(VAR_2->base);
 FUNC_1(VAR_2->avs_intr_base);

 return 0;
}
