
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ,int*) ;
 char* FUNC_3 (char* const,int,int) ;
 int FUNC_4 (int,char* const*,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 () ;

int
FUNC_6(int VAR_4, char * const *VAR_5)
{
 int VAR_6;
 int64_t VAR_7;
 int64_t VAR_8;
 int64_t VAR_9;
 const char *VAR_10;

 VAR_8 = 0;
 VAR_7 = 0;
 VAR_9 = 0;
 while((VAR_6 = FUNC_4(VAR_4, VAR_5, "l:r:s:")) != -1) {
  switch (VAR_6) {
  case 'l':
   if (FUNC_2(VAR_2, &VAR_8))
    FUNC_0(1, "Couldn't parse -l argument");
   break;
  case 'r':
   if (FUNC_2(VAR_2, &VAR_9))
    FUNC_0(1, "Couldn't parse -r argument");
   break;
  case 's':
   if (FUNC_2(VAR_2, &VAR_7))
    FUNC_0(1, "Couldn't parse -s argument");
   break;
  default:
   FUNC_5();
  }
 }
 VAR_4 -= VAR_3;
 VAR_5 += VAR_3;
 if (VAR_4 != 1)
  FUNC_5();

 if (VAR_7 != 0 && VAR_9 != 0 && VAR_8 != 0) {
  if (VAR_7 != VAR_9 * VAR_8)
   FUNC_1(1, "Inconsistent -l, -r and -s values");
 } else if (VAR_7 != 0 && VAR_9 != 0 && VAR_8 == 0) {
  if (VAR_7 % VAR_9)
   FUNC_1(1,
       "Inconsistent -r and -s values (gives remainder)");
  VAR_8 = VAR_7 / VAR_9;
 } else if (VAR_7 != 0 && VAR_9 == 0 && VAR_8 != 0) {
  if (VAR_7 % VAR_8)
      FUNC_1(1, "-s arg not divisible by -l arg");
 } else if (VAR_7 != 0 && VAR_9 == 0 && VAR_8 == 0) {
  VAR_8 = VAR_1;
  if (VAR_7 % VAR_8)
      FUNC_1(1, "-s arg not divisible by %jd", VAR_8);
 } else if (VAR_7 == 0 && VAR_9 != 0 && VAR_8 != 0) {
  VAR_7 = VAR_9 * VAR_8;
 } else if (VAR_7 == 0 && VAR_9 != 0 && VAR_8 == 0) {
  VAR_8 = VAR_1;
  VAR_7 = VAR_9 * VAR_8;
 } else if (VAR_7 == 0 && VAR_9 == 0 && VAR_8 != 0) {
  VAR_7 = VAR_0 * VAR_8;
 } else if (VAR_7 == 0 && VAR_9 == 0 && VAR_8 == 0) {
  VAR_8 = VAR_1;
  VAR_7 = VAR_0 * VAR_8;
 }

 VAR_10 = FUNC_3(VAR_5[0], VAR_7, VAR_8);
 if (VAR_10 == ((void*)0))
  return (0);
 FUNC_0(1, "%s", VAR_10);
}
