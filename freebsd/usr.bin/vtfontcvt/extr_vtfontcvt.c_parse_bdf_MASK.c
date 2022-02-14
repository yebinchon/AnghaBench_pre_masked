
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int FILE ;


 int FUNC_0 (unsigned int,unsigned int,char*,char*) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (int,char*,...) ;
 char* FUNC_3 (int *,size_t*) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 unsigned int FUNC_5 (int,int) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*,char*,char*,int) ;
 scalar_t__ FUNC_12 (char*,char*,...) ;
 char* FUNC_13 (char*,char) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 unsigned int FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (char*,char*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_17 (int) ;

__attribute__((used)) static int
FUNC_18(FILE *VAR_3, unsigned int VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7;
 size_t VAR_8;
 uint8_t *VAR_9, *VAR_10;
 unsigned int VAR_11 = 0, VAR_12, VAR_13, VAR_14 = 0, VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20 = 0, VAR_21, VAR_22, VAR_23;
 int VAR_24 = 0, VAR_25 = 0;
 int VAR_26 = -1;
 char VAR_27 = '\0';





 while ((VAR_6 = FUNC_3(VAR_3, &VAR_8)) != ((void*)0)) {
  VAR_14++;
  VAR_6[VAR_8 - 1] = '\0';

  if (FUNC_16(VAR_6, "FONT ", 5) == 0) {
   VAR_7 = VAR_6 + 5;
   VAR_12 = 0;
   while ((VAR_7 = FUNC_13(VAR_7, '-')) != ((void*)0)) {
    VAR_7++;
    VAR_12++;
    if (VAR_12 == 11) {
     VAR_27 = *VAR_7;
     break;
    }
   }
  } else if (FUNC_16(VAR_6, "FONTBOUNDINGBOX ", 16) == 0) {
   if (FUNC_12(VAR_6 + 16, "%d %d %d %d", &VAR_20, &VAR_21, &VAR_22,
       &VAR_23) != 4)
    FUNC_2(1, "invalid FONTBOUNDINGBOX at line %u",
        VAR_14);
   FUNC_10(VAR_20);
   FUNC_9(VAR_21);
   break;
  }
 }
 if (VAR_20 == 0)
  FUNC_2(1, "broken font header");
 if (VAR_27 != 'c' && VAR_27 != 'C')
  FUNC_2(1, "font spacing \"C\" (character cell) required");


 while ((VAR_6 = FUNC_3(VAR_3, &VAR_8)) != ((void*)0)) {
  VAR_14++;
  VAR_6[VAR_8 - 1] = '\0';

  if (FUNC_16(VAR_6, "DWIDTH ", 7) == 0) {
   if (FUNC_12(VAR_6 + 7, "%d %d", &VAR_24, &VAR_25) != 2)
    FUNC_2(1, "invalid DWIDTH at line %u", VAR_14);
   if (VAR_25 != 0 || (VAR_24 != VAR_20 && VAR_24 * 2 != VAR_20))
    FUNC_2(1, "bitmap with unsupported DWIDTH %d %d at line %u",
        VAR_24, VAR_25, VAR_14);
   if (VAR_24 < VAR_20)
    FUNC_10(VAR_24);
  }
 }


 VAR_24 = VAR_16 = VAR_17 = 0;
 FUNC_7(VAR_3);
 VAR_14 = 0;
 VAR_15 = 0;
 VAR_9 = FUNC_17(VAR_1 * VAR_0);
 VAR_10 = FUNC_17(VAR_1 * VAR_0);
 VAR_5 = FUNC_17(VAR_1 * 2);
 while ((VAR_6 = FUNC_3(VAR_3, &VAR_8)) != ((void*)0)) {
  VAR_14++;
  VAR_6[VAR_8 - 1] = '\0';

  if (FUNC_16(VAR_6, "ENCODING ", 9) == 0) {
   VAR_11 = FUNC_1(VAR_6 + 9);
  } else if (FUNC_16(VAR_6, "DWIDTH ", 7) == 0) {
   VAR_24 = FUNC_1(VAR_6 + 7);
  } else if (FUNC_16(VAR_6, "BBX ", 4) == 0) {
   if (FUNC_12(VAR_6 + 4, "%d %d %d %d", &VAR_16, &VAR_17, &VAR_18,
        &VAR_19) != 4)
    FUNC_2(1, "invalid BBX at line %u", VAR_14);
   if (VAR_16 < 1 || VAR_17 < 1 || VAR_16 > VAR_20 || VAR_17 > VAR_21 ||
       VAR_18 < VAR_22 || VAR_19 < VAR_23 ||
       VAR_17 + VAR_19 > VAR_21 + VAR_23)
    FUNC_2(1, "broken bitmap with BBX %d %d %d %d at line %u",
        VAR_16, VAR_17, VAR_18, VAR_19, VAR_14);
   VAR_15 = FUNC_5(VAR_16, 8);
  } else if (FUNC_16(VAR_6, "BITMAP", 6) == 0 &&
      (VAR_6[6] == ' ' || VAR_6[6] == '\0')) {
   if (VAR_24 == 0 || VAR_16 == 0 || VAR_17 == 0)
    FUNC_2(1, "broken char header at line %u!",
        VAR_14);
   FUNC_6(VAR_9, 0, VAR_1 * VAR_0);
   FUNC_6(VAR_10, 0, VAR_1 * VAR_0);







   for (VAR_12 = (VAR_21 + VAR_23) - (VAR_17 + VAR_19);
       VAR_12 < (unsigned int)((VAR_21 + VAR_23) - VAR_19); VAR_12++) {
    if ((VAR_6 = FUNC_3(VAR_3, &VAR_8)) == ((void*)0))
     FUNC_2(1, "unexpected EOF");
    VAR_14++;
    VAR_6[VAR_8 - 1] = '\0';
    if (FUNC_14(VAR_6, "ENDCHAR") == 0)
     break;
    if (FUNC_15(VAR_6) < VAR_15 * 2)
     FUNC_2(1, "broken bitmap at line %u",
         VAR_14);
    FUNC_6(VAR_5, 0, VAR_1 * 2);
    for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
     unsigned int VAR_28;
     if (FUNC_12(VAR_6 + VAR_13 * 2, "%2x", &VAR_28) ==
         0)
      break;
     *(VAR_5 + VAR_13) = (uint8_t)VAR_28;
    }

    FUNC_8(VAR_5, VAR_1 * 2, VAR_18 - VAR_22);
    VAR_26 = FUNC_11(VAR_9 + VAR_12 * VAR_1,
         VAR_10 + VAR_12 * VAR_1, VAR_5, VAR_24);
    if (VAR_26 != 0)
     goto out;
   }

   VAR_26 = FUNC_0(VAR_11, VAR_4, VAR_9,
       VAR_24 > (int)VAR_2 ? VAR_10 : ((void*)0));
   if (VAR_26 != 0)
    goto out;

   VAR_24 = VAR_16 = VAR_17 = 0;
  }
 }

out:
 FUNC_4(VAR_9);
 FUNC_4(VAR_10);
 FUNC_4(VAR_5);
 return (VAR_26);
}
