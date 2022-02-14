
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tempname ;
struct header {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,char*) ;
 int * FUNC_2 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (struct header*,int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int,char*,char*) ;
 char* VAR_10 ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;

FILE *
FUNC_14(struct header *VAR_11, FILE *VAR_12)
{
 FILE *VAR_13, *VAR_14;
 int VAR_15, VAR_16;
 char VAR_17[VAR_9];

 (void)FUNC_11(VAR_17, sizeof(VAR_17),
     "%s/mail.RsXXXXXXXXXX", VAR_10);
 if ((VAR_16 = FUNC_6(VAR_17)) == -1 ||
     (VAR_13 = FUNC_1(VAR_16, "w")) == ((void*)0)) {
  FUNC_12("%s", VAR_17);
  return (VAR_12);
 }
 if ((VAR_14 = FUNC_2(VAR_17, "r")) == ((void*)0)) {
  FUNC_12("%s", VAR_17);
  (void)FUNC_0(VAR_13);
  (void)FUNC_10(VAR_17);
  return (VAR_12);
 }
 (void)FUNC_10(VAR_17);
 (void)FUNC_8(VAR_11, VAR_13,
     VAR_8|VAR_7|VAR_2|VAR_1|VAR_6|VAR_4|VAR_5|VAR_3);
 VAR_15 = FUNC_5(VAR_12);
 while (VAR_15 != VAR_0) {
  (void)FUNC_7(VAR_15, VAR_13);
  VAR_15 = FUNC_5(VAR_12);
 }
 if (FUNC_3(VAR_12)) {
  FUNC_13("read");
  FUNC_9(VAR_12);
  return (VAR_12);
 }
 (void)FUNC_4(VAR_13);
 if (FUNC_3(VAR_13)) {
  FUNC_12("%s", VAR_17);
  (void)FUNC_0(VAR_13);
  (void)FUNC_0(VAR_14);
  FUNC_9(VAR_12);
  return (VAR_12);
 }
 (void)FUNC_0(VAR_13);
 (void)FUNC_0(VAR_12);
 FUNC_9(VAR_14);
 return (VAR_14);
}
