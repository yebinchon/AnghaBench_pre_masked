
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
 static int VAR_1 = 0;
 if (!VAR_0)
  return;
 if ((++VAR_1 % VAR_0) == 0)
  FUNC_0("progress %d objects\n", VAR_1);
}
