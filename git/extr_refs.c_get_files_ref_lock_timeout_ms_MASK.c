
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int*) ;

long FUNC_1(void)
{
 static int VAR_0 = 0;


 static int VAR_1 = 100;

 if (!VAR_0) {
  FUNC_0("core.filesreflocktimeout", &VAR_1);
  VAR_0 = 1;
 }

 return VAR_1;
}
