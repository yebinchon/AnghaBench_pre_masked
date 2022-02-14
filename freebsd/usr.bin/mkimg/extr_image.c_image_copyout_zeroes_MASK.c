
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,size_t) ;
 int FUNC_1 (int,size_t,int *) ;
 int FUNC_2 (int,int ,int ) ;
 size_t VAR_2 ;

int
FUNC_3(int VAR_3, size_t VAR_4)
{
 static uint8_t *VAR_5 = ((void*)0);
 size_t VAR_6;
 int VAR_7;

 if (FUNC_2(VAR_3, (off_t)VAR_4, VAR_1) != -1)
  return (0);





 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_0(1, VAR_2);
  if (VAR_5 == ((void*)0))
   return (VAR_0);
 }

 while (VAR_4 > 0) {
  VAR_6 = (VAR_4 > VAR_2) ? VAR_2 : VAR_4;
  VAR_7 = FUNC_1(VAR_3, VAR_6, VAR_5);
  if (VAR_7)
   return (VAR_7);
  VAR_4 -= VAR_6;
 }
 return (0);
}
