
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_0;

 VAR_0 = FUNC_0();
 if (VAR_0)
  return VAR_0;

 VAR_0 = FUNC_1();
 if (VAR_0)
  goto err_unregister_pdevs;

 return 0;

err_unregister_pdevs:
 FUNC_2();

 return VAR_0;
}
