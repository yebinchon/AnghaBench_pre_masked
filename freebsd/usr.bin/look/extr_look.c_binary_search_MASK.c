
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_1 (int *,unsigned char*,unsigned char*) ;

__attribute__((used)) static char *
FUNC_2(wchar_t *VAR_1, unsigned char *VAR_2, unsigned char *VAR_3)
{
 unsigned char *VAR_4;

 VAR_4 = VAR_2 + (VAR_3 - VAR_2) / 2;
 FUNC_0(VAR_4, VAR_3);





 while (VAR_4 < VAR_3 && VAR_3 > VAR_2) {
  if (FUNC_1(VAR_1, VAR_4, VAR_3) == VAR_0)
   VAR_2 = VAR_4;
  else
   VAR_3 = VAR_4;
  VAR_4 = VAR_2 + (VAR_3 - VAR_2) / 2;
  FUNC_0(VAR_4, VAR_3);
 }
 return (VAR_2);
}
