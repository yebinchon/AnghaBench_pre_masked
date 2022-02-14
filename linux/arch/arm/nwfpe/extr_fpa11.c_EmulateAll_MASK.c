
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (char*,unsigned int) ;

unsigned int FUNC_4(unsigned int VAR_0)
{
 unsigned int VAR_1;




 VAR_1 = VAR_0 & 0x00000f00;
 if (VAR_1 == 0x00000100 || VAR_1 == 0x00000200) {

  VAR_1 = VAR_0 & 0x0e000000;
  if (VAR_1 == 0x0e000000) {
   if (VAR_0 & 0x00000010) {



    return FUNC_2(VAR_0);
   } else {


    return FUNC_0(VAR_0);
   }
  } else if (VAR_1 == 0x0c000000) {


   return FUNC_1(VAR_0);
  }
 }


 return 0;
}
