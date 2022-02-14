
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_0;

 VAR_0 = FUNC_2(FUNC_0(2), "rx1950-charger-enable-1");
 if (VAR_0)
  goto err_gpio1;
 VAR_0 = FUNC_2(FUNC_0(3), "rx1950-charger-enable-2");
 if (VAR_0)
  goto err_gpio2;

 return 0;

err_gpio2:
 FUNC_1(FUNC_0(2));
err_gpio1:
 return VAR_0;
}
