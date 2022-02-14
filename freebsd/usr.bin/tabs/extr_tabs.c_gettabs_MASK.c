
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 char* FUNC_1 (char*,char*) ;
 long FUNC_2 (char*,char**,int) ;

__attribute__((used)) static void
FUNC_3(char *VAR_2, long VAR_3[], long *VAR_4)
{
 char *VAR_5, *VAR_6;
 long VAR_7, VAR_8;

 for (VAR_7 = *VAR_4 = 0, VAR_5 = FUNC_1(VAR_2, ","); VAR_5 != ((void*)0);
     VAR_5 = FUNC_1(((void*)0), ",")) {
  if (*VAR_4 >= VAR_0)
   FUNC_0(1, "too many tab stops (limit %d)", VAR_0);
  VAR_1 = 0;
  VAR_8 = FUNC_2(VAR_5, &VAR_6, 10);
  if (VAR_1 != 0 || *VAR_6 != '\0' || VAR_8 <= 0)
   FUNC_0(1, "%s: invalid tab stop", VAR_5);
  if (*VAR_5 == '+') {
   if (VAR_5 == VAR_2)
    FUNC_0(1, "%s: first tab may not be relative",
        VAR_5);
   VAR_8 += VAR_7;
  }
  if (VAR_7 > VAR_8)
   FUNC_0(1, "cannot go backwards");
  VAR_7 = VAR_3[(*VAR_4)++] = VAR_8;
 }
}
