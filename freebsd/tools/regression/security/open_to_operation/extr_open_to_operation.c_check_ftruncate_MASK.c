
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 scalar_t__ FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (char const*,char*,int) ;
 int FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (char const*,int) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_3, const char *VAR_4, const int *VAR_5,
    int VAR_6)
{
 struct stat VAR_7;
 int VAR_8, VAR_9, VAR_10;
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_10 = VAR_5[VAR_9];
  VAR_8 = FUNC_5(VAR_4, VAR_10);
  if (VAR_8 < 0) {
   FUNC_3(VAR_3, "open", VAR_10);
   FUNC_3(VAR_3, "truncate1 skipped", VAR_10);
   FUNC_3(VAR_3, "truncate2 skipped", VAR_10);
   FUNC_3(VAR_3, "truncate3 skipped", VAR_10);
   continue;
  }
  if (FUNC_1(VAR_8, &VAR_7) < 0) {
   FUNC_3(VAR_3, "fstat", VAR_10);
   FUNC_3(VAR_3, "truncate1 skipped", VAR_10);
   FUNC_3(VAR_3, "truncate2 skipped", VAR_10);
   FUNC_3(VAR_3, "truncate3 skipped", VAR_10);
   FUNC_0(VAR_8);
   continue;
  }
  FUNC_4(VAR_3, "setup", VAR_10);


  if (FUNC_2(VAR_8, VAR_7.st_size + 1) == 0) {
   if (((VAR_10 & VAR_0) == VAR_2) ||
       ((VAR_10 & VAR_0) == VAR_1))
    FUNC_4(VAR_3, "truncate1 succeeded",
        VAR_10);
   else {
    FUNC_3(VAR_3, "truncate1 succeeded",
        VAR_10);
    FUNC_3(VAR_3, "truncate2 skipped",
        VAR_10);
    FUNC_3(VAR_3, "truncate3 skipped",
        VAR_10);
    FUNC_0(VAR_8);
    continue;
   }
  } else {
   if (((VAR_10 & VAR_0) == VAR_2) ||
       ((VAR_10 & VAR_0) == VAR_1)) {
    FUNC_3(VAR_3, "truncate1 failed",
        VAR_10);
    FUNC_3(VAR_3, "truncate2 skipped",
        VAR_10);
    FUNC_3(VAR_3, "truncate3 skipped",
        VAR_10);
    FUNC_0(VAR_8);
    continue;
   } else
    FUNC_4(VAR_3, "truncate1 failed", VAR_10);
  }


  if (FUNC_2(VAR_8, VAR_7.st_size + 1) == 0) {
   if (((VAR_10 & VAR_0) == VAR_2) ||
       ((VAR_10 & VAR_0) == VAR_1))
    FUNC_4(VAR_3, "truncate2 succeeded",
        VAR_10);
   else {
    FUNC_3(VAR_3, "truncate2 succeeded",
        VAR_10);
    FUNC_3(VAR_3, "truncate3 skipped",
        VAR_10);
    FUNC_0(VAR_8);
    continue;
   }
  } else {
   if (((VAR_10 & VAR_0) == VAR_2) ||
       ((VAR_10 & VAR_0) == VAR_1)) {
    FUNC_3(VAR_3, "truncate2 failed",
        VAR_10);
    FUNC_3(VAR_3, "truncate3 skipped",
        VAR_10);
    FUNC_0(VAR_8);
    continue;
   } else
    FUNC_4(VAR_3, "truncate2 failed", VAR_10);
  }


  if (FUNC_2(VAR_8, VAR_7.st_size) == 0) {
   if (((VAR_10 & VAR_0) == VAR_2) ||
       ((VAR_10 & VAR_0) == VAR_1))
    FUNC_4(VAR_3, "truncate3 succeeded",
        VAR_10);
   else
    FUNC_3(VAR_3, "truncate3 succeeded",
        VAR_10);
  } else {
   if (((VAR_10 & VAR_0) == VAR_2) ||
       ((VAR_10 & VAR_0) == VAR_1))
    FUNC_3(VAR_3, "truncate3 failed",
        VAR_10);
   else
    FUNC_4(VAR_3, "truncate3 failed", VAR_10);
  }
  FUNC_0(VAR_8);
 }
}
