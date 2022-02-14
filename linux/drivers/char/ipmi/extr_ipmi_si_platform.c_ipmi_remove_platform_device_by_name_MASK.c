
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int *,int *,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct device*) ;
 struct platform_device* FUNC_3 (struct device*) ;

void FUNC_4(char *VAR_2)
{
 struct device *VAR_3;

 while ((VAR_3 = FUNC_0(&VAR_1, ((void*)0), VAR_2,
          VAR_0))) {
  struct platform_device *VAR_4 = FUNC_3(VAR_3);

  FUNC_1(VAR_4);
  FUNC_2(VAR_3);
 }
}
