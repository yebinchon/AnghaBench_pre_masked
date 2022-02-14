
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 struct platform_device* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(void)
{
 struct platform_device *VAR_3;
 int VAR_4;

 FUNC_3(VAR_1,
    FUNC_0(VAR_1));

 VAR_3 = FUNC_5(&VAR_0);
 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_3);

 VAR_4 = FUNC_4(&VAR_2);
 if (VAR_4)
  return VAR_4;

 return 0;
}
