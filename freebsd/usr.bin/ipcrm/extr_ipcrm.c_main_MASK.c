
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 int VAR_10 ;
 int FUNC_13 (char*,int ,int) ;
 int FUNC_14 (char*,int ) ;

int
FUNC_15(int VAR_11, char *VAR_12[])
{
 int VAR_13, VAR_14, VAR_15;
 key_t VAR_16;

 while ((VAR_13 = FUNC_6(VAR_11, VAR_12, "q:m:s:Q:M:S:vWy")) != -1) {

  VAR_8 = 0;
  switch (VAR_13) {
  case 'v':
   VAR_7++;
   break;
  case 'y':
   VAR_10 = 0;
   break;
  }
 }

 VAR_5 = 1;
 VAR_2 = 0;
 FUNC_10(VAR_1, VAR_3);
 while ((VAR_13 = FUNC_6(VAR_11, VAR_12, "q:m:s:Q:M:S:vWy")) != -1) {

  VAR_8 = 0;
  switch (VAR_13) {
  case 'q':
  case 'm':
  case 's':
   VAR_15 = FUNC_2(VAR_4);
   if (VAR_13 == 'q')
    VAR_14 = FUNC_7(0, VAR_15);
   else if (VAR_13 == 'm')
    VAR_14 = FUNC_9(0, VAR_15);
   else
    VAR_14 = FUNC_8(0, VAR_15);
   if (VAR_14 < 0) {
    VAR_2++;
    if (!VAR_8)
     FUNC_13("%sid(%d): ",
         FUNC_0(FUNC_11(VAR_13)), VAR_15);
    else
     FUNC_14(
         "%ss are not configured "
         "in the running kernel",
         FUNC_1(FUNC_11(VAR_13)));
   }
   break;
  case 'Q':
  case 'M':
  case 'S':
   VAR_16 = FUNC_3(VAR_4);
   if (VAR_16 == VAR_0) {
    FUNC_14("can't remove private %ss",
        FUNC_1(VAR_13));
    continue;
   }
   if (VAR_13 == 'Q')
    VAR_14 = FUNC_7(VAR_16, 0);
   else if (VAR_13 == 'M')
    VAR_14 = FUNC_9(VAR_16, 0);
   else
    VAR_14 = FUNC_8(VAR_16, 0);
   if (VAR_14 < 0) {
    VAR_2++;
    if (!VAR_8)
     FUNC_13("%ss(%ld): ",
         FUNC_0(VAR_13), VAR_16);
    else
     FUNC_14("%ss are not configured "
         "in the running kernel",
         FUNC_1(VAR_13));
   }
   break;
  case 'v':
  case 'y':

   break;
  case 'W':
   FUNC_7(-1, 0);
   FUNC_9(-1, 0);
   FUNC_8(-1, 0);
   break;
  case ':':
   FUNC_5(VAR_9,
       "option -%c requires an argument\n", VAR_6);
   FUNC_12();
  case '?':
   FUNC_5(VAR_9, "unrecognized option: -%c\n", VAR_6);
   FUNC_12();
  }
 }

 if (VAR_5 != VAR_11) {
  FUNC_5(VAR_9, "unknown argument: %s\n", VAR_12[VAR_5]);
  FUNC_12();
 }
 FUNC_4(VAR_2);
}
