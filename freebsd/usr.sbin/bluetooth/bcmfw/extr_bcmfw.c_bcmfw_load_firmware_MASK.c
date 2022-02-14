
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (char*,int,char*,char const*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,char const*,char,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,char*,int) ;

__attribute__((used)) static int
FUNC_8(char const *VAR_7, char const *VAR_8, char const *VAR_9)
{
 char VAR_10[VAR_0];
 int VAR_11 = -1, VAR_12 = -1, VAR_13 = -1, VAR_14 = -1, VAR_15;


 FUNC_3(VAR_10, sizeof(VAR_10), "/dev/%s.%d", VAR_7, VAR_2);
 if ((VAR_11 = FUNC_1(VAR_10, VAR_4)) < 0) {
  FUNC_5(VAR_3, "Could not open(%s). %s (%d)",
    VAR_10, FUNC_4(VAR_6), VAR_6);
  goto out;
 }


 FUNC_3(VAR_10, sizeof(VAR_10), "/dev/%s.%d", VAR_7, VAR_1);
 if ((VAR_12 = FUNC_1(VAR_10, VAR_5)) < 0) {
  FUNC_5(VAR_3, "Could not open(%s). %s (%d)",
    VAR_10, FUNC_4(VAR_6), VAR_6);
  goto out;
 }





 if ((VAR_13 = FUNC_1(VAR_8, VAR_4)) < 0) {
  FUNC_5(VAR_3, "Could not open(%s). %s (%d)",
    VAR_8, FUNC_4(VAR_6), VAR_6);
  goto out;
 }

 for (;;) {
  VAR_15 = FUNC_2(VAR_13, VAR_10, sizeof(VAR_10));
  if (VAR_15 < 0) {
   FUNC_5(VAR_3, "Could not read(%s). %s (%d)",
     VAR_8, FUNC_4(VAR_6), VAR_6);
   goto out;
  }
  if (VAR_15 == 0)
   break;

  VAR_15 = FUNC_7(VAR_12, VAR_10, VAR_15);
  if (VAR_15 < 0) {
   FUNC_5(VAR_3, "Could not write(/dev/%s.%d). %s (%d)",
     VAR_7, VAR_1, FUNC_4(VAR_6),
     VAR_6);
   goto out;
  }
 }

 FUNC_0(VAR_13);
 VAR_13 = -1;

 FUNC_6(10);





 if (FUNC_7(VAR_12, "#", 1) < 0) {
  FUNC_5(VAR_3, "Could not write(/dev/%s.%d). %s (%d)",
    VAR_7, VAR_1, FUNC_4(VAR_6), VAR_6);
  goto out;
 }

 if (FUNC_2(VAR_11, VAR_10, sizeof(VAR_10)) < 0) {
  FUNC_5(VAR_3, "Could not read(/dev/%s.%d). %s (%d)",
    VAR_7, VAR_2, FUNC_4(VAR_6), VAR_6);
  goto out;
 }

 if (VAR_10[0] != '#') {
  FUNC_5(VAR_3, "%s: Memory select failed (%c)", VAR_7, VAR_10[0]);
  goto out;
 }





 if ((VAR_13 = FUNC_1(VAR_9, VAR_4)) < 0) {
  FUNC_5(VAR_3, "Could not open(%s). %s (%d)",
    VAR_9, FUNC_4(VAR_6), VAR_6);
  goto out;
 }

 for (;;) {
  VAR_15 = FUNC_2(VAR_13, VAR_10, sizeof(VAR_10));
  if (VAR_15 < 0) {
   FUNC_5(VAR_3, "Could not read(%s). %s (%d)",
     VAR_9, FUNC_4(VAR_6), VAR_6);
   goto out;
  }
  if (VAR_15 == 0)
   break;

  VAR_15 = FUNC_7(VAR_12, VAR_10, VAR_15);
  if (VAR_15 < 0) {
   FUNC_5(VAR_3, "Could not write(/dev/%s.%d). %s (%d)",
     VAR_7, VAR_1, FUNC_4(VAR_6),
     VAR_6);
   goto out;
  }
 }

 FUNC_0(VAR_13);
 VAR_13 = -1;

 if (FUNC_2(VAR_11, VAR_10, sizeof(VAR_10)) < 0) {
  FUNC_5(VAR_3, "Could not read(/dev/%s.%d). %s (%d)",
    VAR_7, VAR_2, FUNC_4(VAR_6), VAR_6);
  goto out;
 }

 if (VAR_10[0] != '.') {
  FUNC_5(VAR_3, "%s: Could not load firmware (%c)",
    VAR_7, VAR_10[0]);
  goto out;
 }

 FUNC_6(500000);
 VAR_14 = 0;
out:
 if (VAR_13 != -1)
  FUNC_0(VAR_13);
 if (VAR_12 != -1)
  FUNC_0(VAR_12);
 if (VAR_11 != -1)
  FUNC_0(VAR_11);

 return (VAR_14);
}
