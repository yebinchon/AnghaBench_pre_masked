
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * ndptr ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 char* VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (int *) ;
 int VAR_4 ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*,char const**) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static ndptr
FUNC_9(int VAR_6, char *VAR_7)
{
 char *VAR_8 = VAR_7;
 char *VAR_9 = VAR_7+VAR_2;
 ndptr VAR_10;

 *VAR_7++ = VAR_6;

 while ((FUNC_3(VAR_6 = FUNC_2()) || VAR_6 == '_') && VAR_7 < VAR_9)
  *VAR_7++ = VAR_6;
 if (VAR_6 != VAR_0)
  FUNC_1(VAR_6);
 *VAR_7 = VAR_1;


 if (VAR_7 == VAR_3) {
  FUNC_7(VAR_8);
  while (FUNC_3(VAR_6 = FUNC_2()) || VAR_6 == '_') {
   if (VAR_5 < 0)
    FUNC_8(VAR_6);
   else
    FUNC_0(VAR_6);
  }
  *VAR_8 = VAR_1;
  return ((void*)0);
 }

 VAR_10 = FUNC_5(&VAR_4, FUNC_6(&VAR_4, VAR_8, (const char **)&VAR_7));
 if (VAR_10 == ((void*)0))
  return ((void*)0);
 if (FUNC_4(VAR_10) == ((void*)0))
  return ((void*)0);
 return VAR_10;
}
