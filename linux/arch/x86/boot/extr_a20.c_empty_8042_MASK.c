
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(void)
{
 u8 VAR_2;
 int VAR_3 = VAR_1;
 int VAR_4 = VAR_0;

 while (VAR_3--) {
  FUNC_1();

  VAR_2 = FUNC_0(0x64);
  if (VAR_2 == 0xff) {

   if (!--VAR_4)
    return -1;
  }
  if (VAR_2 & 1) {

   FUNC_1();
   (void)FUNC_0(0x60);
  } else if (!(VAR_2 & 2)) {

   return 0;
  }
 }

 return -1;
}
