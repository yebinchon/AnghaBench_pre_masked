
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;

__attribute__((used)) static u_char *
FUNC_3(u_char * VAR_1, char *VAR_2)
{

 u_char *VAR_3;
 u_char VAR_4;
 int VAR_5;



 if (VAR_1 == ((void*)0) || (char *)VAR_1 >= VAR_2)
  return (((void*)0));

 if (*VAR_1 & 0xc0) {
  VAR_1 = VAR_1 + 2;
  if ((char *)VAR_1 > VAR_2)
   return (((void*)0));
  return ((u_char *) VAR_1);
 }
 while ((*VAR_1 & 0x3f) != 0x00) {
  VAR_3 = VAR_1 + 1;
  if (*VAR_1 == 0x20)
   VAR_5 = 1;
  else
   VAR_5 = 0;


  VAR_1 = (u_char *) (VAR_1 + (*VAR_1 & 0x3f) + 1);
  if ((char *)VAR_1 > VAR_2) {
   VAR_1 = ((void*)0);
   break;
  }



  while (VAR_3 < VAR_1) {
   if (VAR_5 == 1) {
    VAR_4 = (u_char) (((((*VAR_3 & 0x0f) << 4) | (*(VAR_3 + 1) & 0x0f)) - 0x11));






    VAR_3 += 2;
   } else {



    VAR_3++;
   }
  }




 }


 if (VAR_1 == ((void*)0) || (char *)VAR_1 >= VAR_2)
  VAR_1 = ((void*)0);
 else
  VAR_1++;
 return ((u_char *) VAR_1);
}
