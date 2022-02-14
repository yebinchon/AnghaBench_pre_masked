
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 char* VAR_6 ;
 int FUNC_3 (char*,char*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (char*) ;
 long VAR_9 ;

__attribute__((used)) static void
FUNC_5(void)
{
 long VAR_10, VAR_11, VAR_12;
 static long VAR_13;
 static char *VAR_14;
 char VAR_15, VAR_16;
 int VAR_17;

 if (VAR_7 == -1) {
  if (VAR_6[0] == '\0') {
   VAR_6[0] = 'x';
   VAR_14 = VAR_6 + 1;
  } else {
   VAR_14 = VAR_6 + FUNC_4(VAR_6);
  }
  VAR_7 = FUNC_2(VAR_8);
 }

 if (VAR_4) {
  VAR_15 = '0';
  VAR_16 = '9';
 }
 else {
  VAR_15 = 'a';
  VAR_16 = 'z';
 }
 VAR_17 = VAR_16 - VAR_15 + 1;


 for (VAR_11 = 1, VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
  if (VAR_3 / VAR_17 < VAR_11)
   FUNC_1(VAR_2, "suffix is too long (max %ld)", VAR_10);
  else
   VAR_11 *= VAR_17;

 if (VAR_13 == VAR_11)
  FUNC_1(VAR_0, "too many files");


 VAR_12 = VAR_13;
 VAR_10 = VAR_9 - 1;
 do {
  VAR_14[VAR_10] = VAR_12 % VAR_17 + VAR_15;
  VAR_12 /= VAR_17;
 } while (VAR_10-- > 0);
 VAR_14[VAR_9] = '\0';

 ++VAR_13;
 if (!FUNC_3(VAR_6, "w", VAR_8))
  FUNC_0(VAR_1, "%s", VAR_6);
 VAR_5 = 1;
}
