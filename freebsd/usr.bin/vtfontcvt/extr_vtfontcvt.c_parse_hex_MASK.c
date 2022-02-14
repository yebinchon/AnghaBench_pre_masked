
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int FILE ;


 int FUNC_0 (unsigned int,unsigned int,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,...) ;
 char* FUNC_3 (int *,size_t*) ;
 int FUNC_4 (scalar_t__*) ;
 int VAR_0 ;
 unsigned int FUNC_5 (unsigned int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__*,scalar_t__*,scalar_t__*,unsigned int) ;
 scalar_t__ FUNC_9 (char*,char*,unsigned int*) ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_13 (int) ;

__attribute__((used)) static int
FUNC_14(FILE *VAR_3, unsigned int VAR_4)
{
 char *VAR_5, *VAR_6;
 size_t VAR_7;
 uint8_t *VAR_8 = ((void*)0), *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 unsigned VAR_11 = 0, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17 = 0;

 while ((VAR_5 = FUNC_3(VAR_3, &VAR_7)) != ((void*)0)) {
  VAR_5[VAR_7 - 1] = '\0';

  if (FUNC_12(VAR_5, "# Height: ", 10) == 0) {
   if (VAR_8 != ((void*)0))
    FUNC_2(1, "malformed input: Height tag after font data");
   FUNC_6(FUNC_1(VAR_5 + 10));
  } else if (FUNC_12(VAR_5, "# Width: ", 9) == 0) {
   if (VAR_8 != ((void*)0))
    FUNC_2(1, "malformed input: Width tag after font data");
   FUNC_7(FUNC_1(VAR_5 + 9));
  } else if (FUNC_9(VAR_5, "%6x:", &VAR_11)) {
   if (VAR_8 == ((void*)0)) {
    VAR_8 = FUNC_13(VAR_1 * VAR_0);
    VAR_9 = FUNC_13(VAR_1 * VAR_0);
    VAR_10 = FUNC_13(VAR_1 * 2);
   }

   VAR_6 = FUNC_10(VAR_5, ':') + 1;
   VAR_16 = FUNC_11(VAR_6) / VAR_0;
   if (VAR_16 < VAR_1 * 2)
    FUNC_2(1,
        "malformed input: broken bitmap, character %06x",
        VAR_11);
   VAR_12 = VAR_2 * 2;
   VAR_13 = FUNC_5(VAR_12, 8);
   if (VAR_16 < VAR_13 * 2 || VAR_12 <= 8) {
    VAR_12 = VAR_2;
    VAR_13 = VAR_1;
   }

   for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
    for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {
     unsigned int VAR_18;
     if (FUNC_9(VAR_6 + VAR_15 * 2, "%2x", &VAR_18) == 0)
      break;
     *(VAR_10 + VAR_15) = (uint8_t)VAR_18;
    }
    VAR_17 = FUNC_8(VAR_8 + VAR_14 * VAR_1,
        VAR_9 + VAR_14 * VAR_1, VAR_10, VAR_12);
    if (VAR_17 != 0)
     goto out;
    VAR_6 += VAR_13 * 2;
   }

   VAR_17 = FUNC_0(VAR_11, VAR_4, VAR_8,
       VAR_12 != VAR_2 ? VAR_9 : ((void*)0));
   if (VAR_17 != 0)
    goto out;
  }
 }
out:
 FUNC_4(VAR_8);
 FUNC_4(VAR_9);
 FUNC_4(VAR_10);
 return (VAR_17);
}
