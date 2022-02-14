
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ s64 ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_1 (char*,char*,char) ;
 char* FUNC_2 (char*,scalar_t__,int,int) ;

__attribute__((used)) static char *FUNC_3(char *VAR_9,
       char *VAR_10,
       u64 VAR_11,
       u8 VAR_12, s32 VAR_13, s32 VAR_14, u8 VAR_15)
{
 char *VAR_16;
 char VAR_17;
 char VAR_18;
 u8 VAR_19;
 u8 VAR_20;
 s32 VAR_21;
 char VAR_22[66];



 if (VAR_12 < 2 || VAR_12 > 16) {
  return (((void*)0));
 }

 if (VAR_15 & VAR_0) {
  VAR_15 &= ~VAR_6;
 }

 VAR_19 = ((VAR_15 & VAR_1)
         && VAR_12 != 10) ? VAR_8 : VAR_7;
 VAR_20 = (VAR_15 & VAR_5) ? VAR_8 : VAR_7;
 VAR_18 = (VAR_15 & VAR_6) ? '0' : ' ';



 VAR_17 = '\0';
 if (VAR_15 & VAR_2) {
  if ((s64)VAR_11 < 0) {
   VAR_17 = '-';
   VAR_11 = -(s64)VAR_11;
   VAR_13--;
  } else if (VAR_15 & VAR_3) {
   VAR_17 = '+';
   VAR_13--;
  } else if (VAR_15 & VAR_4) {
   VAR_17 = ' ';
   VAR_13--;
  }
 }
 if (VAR_19) {
  VAR_13--;
  if (VAR_12 == 16) {
   VAR_13--;
  }
 }



 VAR_16 = FUNC_2(VAR_22, VAR_11, VAR_12, VAR_20);
 VAR_21 = (s32)FUNC_0(VAR_16, VAR_22);



 if (VAR_21 > VAR_14) {
  VAR_14 = VAR_21;
 }

 VAR_13 -= VAR_14;



 if (!(VAR_15 & (VAR_6 | VAR_0))) {
  while (--VAR_13 >= 0) {
   VAR_9 = FUNC_1(VAR_9, VAR_10, ' ');
  }
 }
 if (VAR_17) {
  VAR_9 = FUNC_1(VAR_9, VAR_10, VAR_17);
 }
 if (VAR_19) {
  VAR_9 = FUNC_1(VAR_9, VAR_10, '0');
  if (VAR_12 == 16) {
   VAR_9 =
       FUNC_1(VAR_9, VAR_10,
       VAR_20 ? 'X' : 'x');
  }
 }
 if (!(VAR_15 & VAR_0)) {
  while (--VAR_13 >= 0) {
   VAR_9 = FUNC_1(VAR_9, VAR_10, VAR_18);
  }
 }

 while (VAR_21 <= --VAR_14) {
  VAR_9 = FUNC_1(VAR_9, VAR_10, '0');
 }
 while (--VAR_21 >= 0) {
  VAR_9 = FUNC_1(VAR_9, VAR_10,
           VAR_22[VAR_21]);
 }
 while (--VAR_13 >= 0) {
  VAR_9 = FUNC_1(VAR_9, VAR_10, ' ');
 }

 return (VAR_9);
}
