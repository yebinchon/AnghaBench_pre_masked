
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


 int VAR_0 ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(module_t VAR_1, int VAR_2,
                            void *VAR_3)
{
 switch (VAR_2) {
  case 129:
   FUNC_1();
   FUNC_2("kthrdlk loaded!\n");
   return (0);
  case 128:
   FUNC_0();
   FUNC_2("Bye Bye! kthrdlk unloaded!\n");
   return (0);
 }

 return (VAR_0);
}
