
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


 int VAR_0 ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static int
FUNC_8(module_t VAR_2, int VAR_3, void *VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_3) {
     case 129:
  VAR_5 = FUNC_5();
  if (VAR_5)
   break;
  VAR_5 = FUNC_3();
  if (VAR_5) {
   FUNC_4();
   break;
  }
  VAR_5 = FUNC_1();
  if (VAR_5)
   break;
  FUNC_7(&VAR_1, "samba device lock");
  break;
     case 128:
  FUNC_2();
  VAR_5 = FUNC_4();
  if (VAR_5)
   break;
  FUNC_0();
  FUNC_6(&VAR_1);
  break;
     default:
  VAR_5 = VAR_0;
  break;
 }
 return VAR_5;
}
