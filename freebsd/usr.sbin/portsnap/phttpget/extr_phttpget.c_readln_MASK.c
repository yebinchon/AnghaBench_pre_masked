
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int,char*,int,int ) ;
 int * FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_3, char * VAR_4, int * VAR_5, int * VAR_6)
{
 ssize_t VAR_7;

 while (FUNC_2(VAR_4 + *VAR_6, "\r\n",
     *VAR_5 - *VAR_6) == ((void*)0)) {

  if (*VAR_6 != 0) {
   FUNC_0(VAR_4, VAR_4 + *VAR_6,
       *VAR_5 - *VAR_6);
   *VAR_5 -= *VAR_6;
   *VAR_6 = 0;
  }


  if (*VAR_5 == VAR_0)
   return -1;


  VAR_7 = FUNC_1(VAR_3, VAR_4 + *VAR_5, VAR_0 - *VAR_5, 0);
  if ((VAR_7 == 0) ||
      ((VAR_7 == -1) && (VAR_2 != VAR_1)))
   return -1;

  if (VAR_7 != -1)
   *VAR_5 += VAR_7;
 }

 return 0;
}
