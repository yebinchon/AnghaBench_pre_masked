
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct stat {scalar_t__ st_size; int st_mode; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,scalar_t__) ;
 char* FUNC_5 (int,scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_8 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,struct stat*) ;
 scalar_t__ FUNC_9 (int,scalar_t__) ;
 int FUNC_10 (int,int ,scalar_t__*) ;
 int FUNC_11 (char*,int ,scalar_t__) ;
 int FUNC_12 (char const*,int,...) ;
 int FUNC_13 (int,char*,scalar_t__,scalar_t__) ;
 int FUNC_14 (char*,int ) ;

const char *
FUNC_15(const char *VAR_9, off_t VAR_10, ssize_t VAR_11)
{
 int VAR_12, VAR_13;
 ssize_t VAR_14;
 u_int VAR_15;
 off_t VAR_16;
 struct stat VAR_17;
 char *VAR_18;
 int VAR_19;

 VAR_13 = FUNC_12(VAR_9, VAR_7 | VAR_6 | VAR_5 | VAR_4, 0644);
 if (VAR_13 < 0) {
  VAR_19 = 0;
  VAR_13 = FUNC_12(VAR_9, VAR_7);
  if (VAR_13 < 0)
   return ("Could not open");
 } else
  VAR_19 = 1;


 if (VAR_11 == 0)
  VAR_11 = 512;


 VAR_12 = FUNC_8(VAR_13, &VAR_17);
 FUNC_3(VAR_12 == 0);
 if (!FUNC_0(VAR_17.st_mode) &&
     !FUNC_1(VAR_17.st_mode) &&
     !FUNC_2(VAR_17.st_mode)) {
  FUNC_3(!FUNC_6 (VAR_13));
  return ("Wrong file type");
 }

 if(!VAR_19 && FUNC_2(VAR_17.st_mode)) {
  FUNC_3(!FUNC_6 (VAR_13));
  return ("Wrong file type");
 }


 VAR_12 = FUNC_10(VAR_13, VAR_1, &VAR_15);
 VAR_14 = VAR_15;
 if (VAR_12 == 0 && (VAR_14 > VAR_11 || (VAR_11 % VAR_14) != 0))
  VAR_11 = VAR_14;


 VAR_12 = FUNC_10(VAR_13, VAR_0, &VAR_16);
 if (VAR_12 == 0 && (VAR_10 == 0 || VAR_10 > VAR_16))
  VAR_10 = VAR_16;

 if (VAR_10 == 0 && FUNC_2(VAR_17.st_mode))
  VAR_10 = VAR_17.st_size;

 if (VAR_10 == 0)
  VAR_10 = VAR_11 * (off_t)(24*60*60);

 if (FUNC_2(VAR_17.st_mode) && FUNC_9(VAR_13, VAR_10) < 0)
  return ("Could not ftrunc");

 VAR_18 = FUNC_5(1, VAR_11);
 if (VAR_18 == ((void*)0))
  return ("Could not malloc");

 FUNC_14(VAR_18, VAR_2);
 FUNC_4(VAR_18 + VAR_3, VAR_11);
 if (VAR_11 != FUNC_13(VAR_13, VAR_18, VAR_11, 0)) {
  VAR_12 = VAR_8;
  FUNC_7(VAR_18);
  VAR_8 = VAR_12;
  return ("Could not write first sector");
 }
 FUNC_11(VAR_18, 0, VAR_11);
 if ((int)VAR_11 != FUNC_13(VAR_13, VAR_18, VAR_11, VAR_11)) {
  VAR_12 = VAR_8;
  FUNC_7(VAR_18);
  VAR_8 = VAR_12;
  return ("Could not write second sector");
 }
 FUNC_7(VAR_18);
 FUNC_3(0 == FUNC_6(VAR_13));
 return (((void*)0));
}
