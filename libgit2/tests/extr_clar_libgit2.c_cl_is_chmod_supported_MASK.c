
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

bool FUNC_4(void)
{
 static int VAR_0 = -1;

 if (VAR_0 < 0) {
  FUNC_0("filemode.t", "Test if filemode can be modified");
  VAR_0 = FUNC_2("filemode.t");
  FUNC_1(FUNC_3("filemode.t"));
 }

 return VAR_0;
}
