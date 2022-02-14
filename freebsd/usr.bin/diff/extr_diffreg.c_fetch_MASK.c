
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,long,int ) ;
 long FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(long *VAR_16, int VAR_17, int VAR_18, FILE *VAR_19, int VAR_20, int VAR_21, int VAR_22)
{
 int VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 int VAR_29;





 if ((VAR_12 == VAR_4) && VAR_21) {
  long VAR_30 = FUNC_2(VAR_19);

  VAR_28 = VAR_16[VAR_17 > VAR_18 ? VAR_18 : VAR_17 - 1] - VAR_30;
  for (VAR_23 = 0; VAR_23 < VAR_28; VAR_23++)
   FUNC_0("%c", FUNC_3(VAR_19));
 }
 if (VAR_17 > VAR_18)
  return (0);
 if (VAR_12 == VAR_4) {
  if (VAR_14) {
   FUNC_0("#else /* %s%s */\n",
       VAR_21 == 1 ? "!" : "", VAR_13);
  } else {
   if (VAR_21)
    FUNC_0("#ifndef %s\n", VAR_13);
   else
    FUNC_0("#ifdef %s\n", VAR_13);
  }
  VAR_14 = 1 + VAR_21;
 }
 for (VAR_23 = VAR_17; VAR_23 <= VAR_18; VAR_23++) {
  FUNC_1(VAR_19, VAR_16[VAR_23 - 1], VAR_10);
  VAR_28 = VAR_16[VAR_23] - VAR_16[VAR_23 - 1];
  if ((VAR_12 != VAR_4 && VAR_12 != VAR_3) &&
      VAR_20 != '\0') {
   FUNC_0("%c", VAR_20);
   if (VAR_11 && (VAR_12 == VAR_5 || VAR_12 == VAR_0
       || VAR_12 == VAR_8))
    FUNC_0("\t");
   else if (VAR_12 != VAR_8)
    FUNC_0(" ");
  }
  VAR_27 = 0;
  for (VAR_24 = 0, VAR_26 = '\0'; VAR_24 < VAR_28; VAR_24++, VAR_26 = VAR_25) {
   if ((VAR_25 = FUNC_3(VAR_19)) == VAR_9) {
    if (VAR_12 == VAR_1 || VAR_12 == VAR_7 ||
        VAR_12 == VAR_6)
     FUNC_4("No newline at end of file");
    else
     FUNC_0("\n\\ No newline at end of "
         "file\n");
    return (0);
   }
   if (VAR_25 == '\t' && (VAR_22 & VAR_2)) {
    VAR_29 = ((VAR_27/VAR_15)+1)*VAR_15;
    do {
     FUNC_0(" ");
    } while (++VAR_27 < VAR_29);
   } else {
    if (VAR_12 == VAR_1 && VAR_24 == 1 && VAR_25 == '\n'
        && VAR_26 == '.') {







     FUNC_0(".\n");
     return (VAR_23 - VAR_17 + 1);
    }
    FUNC_0("%c", VAR_25);
    VAR_27++;
   }
  }
 }
 return (0);
}
