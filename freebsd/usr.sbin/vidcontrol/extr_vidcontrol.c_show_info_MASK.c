
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void
FUNC_6(char *VAR_0)
{

 if (!FUNC_5(VAR_0, "active")) {
  FUNC_2();
 } else if (!FUNC_5(VAR_0, "adapter")) {
  FUNC_3();
 } else if (!FUNC_5(VAR_0, "mode")) {
  FUNC_4();
 } else {
  FUNC_1();
  FUNC_0(1, "argument to -i must be active, adapter, or mode");
 }
}
