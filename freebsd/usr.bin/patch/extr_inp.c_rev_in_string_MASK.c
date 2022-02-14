
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 int * VAR_0 ;
 size_t FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char const*,int *,size_t) ;

__attribute__((used)) static bool
FUNC_3(const char *VAR_1)
{
 const char *VAR_2;
 size_t VAR_3;

 if (VAR_0 == ((void*)0))
  return 1;
 VAR_3 = FUNC_1(VAR_0);
 if (FUNC_2(VAR_1, VAR_0, VAR_3) && FUNC_0((unsigned char)VAR_1[VAR_3]))
  return 1;
 for (VAR_2 = VAR_1; *VAR_2; VAR_2++) {
  if (FUNC_0((unsigned char)*VAR_2) && FUNC_2(VAR_2 + 1, VAR_0, VAR_3) &&
      FUNC_0((unsigned char)VAR_2[VAR_3 + 1])) {
   return 1;
  }
 }
 return 0;
}
