
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;

void FUNC_9(void)
{
 FUNC_4(&VAR_1);
 if (FUNC_2())
  goto out;

 if (VAR_2)
  FUNC_6("MMIO tracing disabled.\n");
 FUNC_3();
 FUNC_1();
 FUNC_7(&VAR_3);
 FUNC_0(&VAR_0);
 FUNC_8(&VAR_3);
 FUNC_6("enabled.\n");
out:
 FUNC_5(&VAR_1);
}
