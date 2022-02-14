
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sk6; } ;


 int FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_1 ;

int FUNC_5(void)
{
 int VAR_2;

 VAR_0.sk6 = ((void*)0);

 VAR_2 = FUNC_3();
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_4();
 if (VAR_2)
  goto err_out;
 VAR_2 = FUNC_1(&VAR_1);
 if (VAR_2) {
  FUNC_0("Failed to register netdev notifier\n");
  goto err_out;
 }
 return 0;
err_out:
 FUNC_2();
 return VAR_2;
}
