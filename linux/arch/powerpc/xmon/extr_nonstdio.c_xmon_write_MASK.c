
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(const char *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 const char *VAR_7 = VAR_4, *VAR_8;
 const char VAR_9[] = "[Hit a key (a:all, q:truncate, any:next page)]";

 if (VAR_5 <= 0)
  return VAR_6;

 if (VAR_3 && VAR_2)
  return VAR_5;

 if (VAR_0) {
  while (VAR_3 && (VAR_8 = FUNC_0(VAR_7, '\n'))) {
   VAR_6 += FUNC_2(VAR_7, VAR_8 - VAR_7 + 1);
   VAR_7 = VAR_8 + 1;
   VAR_1++;

   if (VAR_1 >= VAR_0) {
    FUNC_2(VAR_9, FUNC_1(VAR_9));

    switch (FUNC_3()) {
    case 'a':
     VAR_3 = 0;
     break;
    case 'q':
     VAR_2 = 1;
     break;
    default:

     break;
    }

    VAR_1 = 0;
    FUNC_2("\r\n", 2);

    if (VAR_2)
     return VAR_5;
   }
  }
 }

 return VAR_6 + FUNC_2(VAR_7, VAR_5 - (VAR_7 - VAR_4));
}
