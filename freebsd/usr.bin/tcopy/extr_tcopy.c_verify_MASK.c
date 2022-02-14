
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(int VAR_5, int VAR_6, char *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 char *VAR_13;

 VAR_13 = FUNC_4(VAR_3);
 VAR_9 = VAR_11 = VAR_3;
 for (VAR_8 = 0;; VAR_2 = 0) {
  if ((VAR_10 = FUNC_5(VAR_5, VAR_13, VAR_9)) == -1) {
   if (VAR_2)
    while (VAR_1 == VAR_0 && (VAR_9 -= 1024)) {
     VAR_10 = FUNC_5(VAR_5, VAR_13, VAR_9);
     if (VAR_10 >= 0)
      goto r1;
    }
   FUNC_6("read error");
   break;
  }
r1: if ((VAR_12 = FUNC_5(VAR_6, VAR_7, VAR_11)) == -1) {
   if (VAR_2)
    while (VAR_1 == VAR_0 && (VAR_11 -= 1024)) {
     VAR_12 = FUNC_5(VAR_6, VAR_7, VAR_11);
     if (VAR_12 >= 0)
      goto r2;
    }
   FUNC_6("read error");
   break;
  }
r2: if (VAR_10 != VAR_12) {
   FUNC_2(VAR_4,
       "%s: tapes have different block sizes; %d != %d.\n",
       "tcopy", VAR_10, VAR_12);
   break;
  }
  if (!VAR_10) {
   if (VAR_8++) {
    FUNC_2(VAR_4, "tcopy: tapes are identical.\n");
    FUNC_3(VAR_13);
    return;
   }
  } else {
   if (FUNC_0(VAR_13, VAR_7, VAR_10)) {
    FUNC_2(VAR_4,
        "tcopy: tapes have different data.\n");
    break;
   }
   VAR_8 = 0;
  }
 }
 FUNC_1(1);
}
