
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (int*,int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (double) ;
 char* FUNC_8 (size_t) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,size_t) ;
 int VAR_3 ;
 int* VAR_4 ;
 char* FUNC_12 (int ) ;

int
FUNC_13(int VAR_5, char **VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11 = 0;
 char *VAR_12;
 int VAR_13[26], VAR_14, VAR_15;

 if (VAR_5 > 1)
  FUNC_9(VAR_6[1]);

 if (!(VAR_12 = FUNC_8((size_t)VAR_0))) {
  (void)FUNC_3(VAR_3, "caesar: out of memory.\n");
  FUNC_2(1);
 }


 for (VAR_9 = 0; VAR_9 < 26; ++VAR_9)
  VAR_4[VAR_9] = FUNC_7(VAR_4[VAR_9]) + FUNC_7(26.0 / 100.0);


 FUNC_1(VAR_13, 26 * sizeof(int));

 if ((VAR_10 = FUNC_11(VAR_1, VAR_12, (size_t)VAR_0)) < 0) {
  (void)FUNC_3(VAR_3, "caesar: %s\n", FUNC_12(VAR_2));
  FUNC_2(1);
 }
 for (VAR_9 = VAR_10; VAR_9--;) {
  VAR_7 = (unsigned char) VAR_12[VAR_9];
  if (FUNC_4(VAR_7)) {
   if (FUNC_5(VAR_7))
    ++VAR_13[VAR_7 - 'a'];
   else if (FUNC_6(VAR_7))
    ++VAR_13[VAR_7 - 'A'];
  }
 }





 for (VAR_14 = VAR_15 = 0; VAR_14 < 26; ++VAR_14) {
  VAR_8 = 0;
  for (VAR_9 = 0; VAR_9 < 26; VAR_9++)
   VAR_8 += VAR_13[VAR_9] * VAR_4[(VAR_9 + VAR_14) % 26];

  if (VAR_14 == 0)
   VAR_11 = VAR_8;
  if (VAR_8 > VAR_11) {

   VAR_15 = VAR_14;
   VAR_11 = VAR_8;
  }
 }

 for (;;) {
  for (VAR_9 = 0; VAR_9 < VAR_10; ++VAR_9) {
   VAR_7 = (unsigned char) VAR_12[VAR_9];
   FUNC_10(FUNC_0(VAR_7, VAR_15));
  }
  if (VAR_10 < VAR_0)
   break;
  if ((VAR_10 = FUNC_11(VAR_1, VAR_12, (size_t)VAR_0)) < 0) {
   (void)FUNC_3(VAR_3, "caesar: %s\n", FUNC_12(VAR_2));
   FUNC_2(1);
  }
 }
 FUNC_2(0);
}
