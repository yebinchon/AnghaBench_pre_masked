
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int block_head_t ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(block_head_t *VAR_0, block_head_t *VAR_1)
{
 uint64_t VAR_2 = FUNC_3(VAR_0);
 uint64_t VAR_3 = FUNC_3(VAR_1);
 uint64_t VAR_4;
 uint64_t VAR_5;
 uint64_t VAR_6;
 uint64_t VAR_7;

 VAR_4 = (VAR_2 > VAR_3) ? VAR_2 : VAR_3;

 for (VAR_6 = VAR_5 = 0; VAR_5 != VAR_4; VAR_5++) {
  char VAR_8 = FUNC_1(VAR_0, VAR_5) & 0xFF;
  char VAR_9 = FUNC_1(VAR_1, VAR_5) & 0xFF;

  if (VAR_8 != VAR_9) {
   int VAR_10;


   if (VAR_8 == '\n' && VAR_9 == 0 && VAR_5 == VAR_2 - 1)
    return (0);

   VAR_7 = VAR_5 - VAR_6;
   FUNC_2("Style error:\n");
   VAR_10 = 0;
   for (VAR_7 = VAR_6; VAR_7 < VAR_2; VAR_7++) {
    char VAR_11 = FUNC_1(VAR_0, VAR_7) & 0xFF;

    if (VAR_10 && VAR_11 == '\n')
     break;
    FUNC_2("%c", VAR_11);
    if (!FUNC_0(VAR_11))
     VAR_10 = 1;
   }
   FUNC_2("\n");
   FUNC_2("Style corrected:\n");
   VAR_10 = 0;
   for (VAR_7 = VAR_6; VAR_7 < VAR_3; VAR_7++) {
    char VAR_12 = FUNC_1(VAR_1, VAR_7) & 0xFF;

    if (VAR_10 && VAR_12 == '\n')
     break;
    FUNC_2("%c", VAR_12);
    if (!FUNC_0(VAR_12))
     VAR_10 = 1;
   }
   FUNC_2("\n");
   for (VAR_7 = VAR_6; VAR_7 != VAR_5; VAR_7++) {
    if ((FUNC_1(VAR_0, VAR_7) & 0xFF) == '\t')
     FUNC_2("\t");
    else
     FUNC_2(" ");
   }
   FUNC_2("^ %sdifference%s\n",
       (FUNC_0(VAR_8) || FUNC_0(VAR_9)) ? "whitespace " : "",
       (VAR_5 >= VAR_2 || VAR_5 >= VAR_3) ? " in the end of a block" : "");
   return (1);
  } else if (VAR_8 == '\n') {
   VAR_6 = VAR_5 + 1;
  }
 }
 return (0);
}
