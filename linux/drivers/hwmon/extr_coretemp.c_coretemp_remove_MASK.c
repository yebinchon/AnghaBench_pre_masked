
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct platform_data {scalar_t__* core_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_data*,int) ;
 struct platform_data* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct platform_data *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 for (VAR_3 = VAR_0 - 1; VAR_3 >= 0; --VAR_3)
  if (VAR_2->core_data[VAR_3])
   FUNC_0(VAR_2, VAR_3);

 return 0;
}
