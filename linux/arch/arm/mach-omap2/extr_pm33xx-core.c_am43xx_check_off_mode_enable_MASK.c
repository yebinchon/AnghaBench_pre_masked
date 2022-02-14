
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(void)
{




 if (FUNC_0("ti,am437x-gp-evm") && VAR_0)
  return VAR_0;
 else if (VAR_0)
  FUNC_1("WARNING: This platform does not support off-mode, entering DeepSleep suspend.\n");

 return 0;
}
