
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;



__attribute__((used)) static int
FUNC_0(int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5,
    int VAR_6)
{
 switch (VAR_1 & 0xff) {
 case 131:



  if (VAR_3)
   VAR_6 = 0;
  break;
 case 130:





  if (VAR_2 == VAR_0)
   VAR_6 = 1;
  else {
   if (VAR_3)
    VAR_6 = 0;
  }
  break;
 case 128:



  VAR_6 = 0;
  break;
 case 129:



  if ((!VAR_3 && (VAR_4 || VAR_5)) ||
      (VAR_3 && VAR_5)) {
   VAR_6 = 1;
  }
  break;
 }

 return (VAR_6);
}
