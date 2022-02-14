
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_2, char *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_6 = 0; VAR_4 > 0; ) {
  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
  switch (VAR_5) {
  case -1:
   if (VAR_1 != VAR_0)
    return (-1);
   break;

  case 0:

   break;

  default:
   VAR_6 += VAR_5;
   VAR_3 += VAR_5;
   VAR_4 -= VAR_5;
   break;
  }
 }

 return (VAR_6);
}
