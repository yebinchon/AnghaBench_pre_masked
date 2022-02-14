
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wint_t ;


 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 char FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (char) ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 wint_t VAR_13;

 VAR_9 = VAR_3 == 1 ? VAR_0 : VAR_5[VAR_3 - 1] - 1;

 VAR_8 = VAR_11 = VAR_7 = 0;
 while ((VAR_13 = FUNC_1()) != VAR_1) {
  if (VAR_13 == ' ' && !VAR_8) {
   if (++VAR_7 >= VAR_9)
    VAR_8 = 1;
   continue;
  } else if (VAR_13 == '\t') {
   if (VAR_3 == 1) {
    VAR_7 = (1 + VAR_7 / VAR_5[0]) *
        VAR_5[0];
    continue;
   } else {
    for (VAR_10 = 0; VAR_10 < VAR_3 &&
        VAR_5[VAR_10] - 1 < VAR_7; VAR_10++)
     ;
    if (VAR_10 < VAR_3 - 1 && VAR_5[VAR_10] - 1 < VAR_9) {
     VAR_7 = VAR_5[VAR_10];
     continue;
    }
    VAR_8 = 1;
   }
  }


  if (VAR_3 == 1) {
   while (((VAR_11 + VAR_5[0]) / VAR_5[0])
       <= (VAR_7 / VAR_5[0])) {
    if (VAR_7 - VAR_11 < 2)
     break;
    FUNC_2('\t');
    VAR_11 = (1 + VAR_11 / VAR_5[0]) *
        VAR_5[0];
   }
  } else {
   for (VAR_10 = 0; VAR_10 < VAR_3 && VAR_5[VAR_10] - 1 < VAR_11; VAR_10++)
    ;
   while (VAR_11 < VAR_7 && VAR_10 < VAR_3 && VAR_11 < VAR_9) {
    FUNC_2('\t');
    VAR_11 = VAR_5[VAR_10++];
   }
  }


  while (VAR_11 < VAR_7 && VAR_11 < VAR_9) {
   FUNC_2(' ');
   VAR_11++;
  }

  if (VAR_13 == '\b') {
   FUNC_2('\b');
   if (VAR_11 > 0)
    VAR_11--, VAR_7--;
  } else if (VAR_13 == '\n') {
   FUNC_2('\n');
   VAR_8 = VAR_11 = VAR_7 = 0;
   continue;
  } else if (VAR_13 != ' ' || VAR_7 > VAR_9) {
   FUNC_2(VAR_13);
   if ((VAR_12 = FUNC_4(VAR_13)) > 0)
    VAR_11 += VAR_12, VAR_7 += VAR_12;
  }





  if (!VAR_2 || VAR_7 >= VAR_9) {
   while ((VAR_13 = FUNC_1()) != '\n' && VAR_13 != VAR_1)
    FUNC_2(VAR_13);
   if (VAR_13 == '\n')
    FUNC_2('\n');
   VAR_8 = VAR_11 = VAR_7 = 0;
  }
 }
 if (FUNC_0(VAR_4)) {
  FUNC_3("%s", VAR_6);
  return (1);
 }
 return (0);
}
