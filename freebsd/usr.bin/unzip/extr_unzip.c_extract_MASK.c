
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int mode_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive*) ;
 int VAR_0 ;
 int FUNC_8 (struct archive*,struct archive_entry*,char*) ;
 int FUNC_9 (struct archive*,struct archive_entry*,char**) ;
 int FUNC_10 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (int ,char*) ;
 char* FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (char*,char*,int) ;
 int * FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,char*) ;

__attribute__((used)) static void
FUNC_17(struct archive *VAR_2, struct archive_entry *VAR_3)
{
 char *VAR_4, *VAR_5;
 mode_t VAR_6;
 char *VAR_7, *VAR_8;

 VAR_4 = FUNC_13(FUNC_6(VAR_3));
 VAR_6 = FUNC_5(VAR_3);


 if (VAR_4[0] == '/' ||
     FUNC_14(VAR_4, "../", 3) == 0 ||
     FUNC_15(VAR_4, "/../") != ((void*)0)) {
  FUNC_16("skipping insecure entry '%s'", VAR_4);
  FUNC_3(FUNC_7(VAR_2));
  FUNC_10(VAR_4);
  return;
 }


 if (!FUNC_0(VAR_6) && !FUNC_2(VAR_6) && !FUNC_1(VAR_6)) {
  FUNC_16("skipping non-regular entry '%s'", VAR_4);
  FUNC_3(FUNC_7(VAR_2));
  FUNC_10(VAR_4);
  return;
 }


 if (FUNC_0(VAR_6) && VAR_1) {
  FUNC_3(FUNC_7(VAR_2));
  FUNC_10(VAR_4);
  return;
 }


 if (!FUNC_4(VAR_4)) {
  FUNC_3(FUNC_7(VAR_2));
  FUNC_10(VAR_4);
  return;
 }


 if (VAR_1) {
  for (VAR_7 = VAR_8 = VAR_4; *VAR_7; ++VAR_7)
   if (*VAR_7 == '/')
    VAR_8 = VAR_7 + 1;
  VAR_5 = FUNC_12(VAR_0, VAR_8);
 } else {
  VAR_5 = FUNC_12(VAR_0, VAR_4);
 }


 FUNC_11(VAR_5);

 if (FUNC_0(VAR_6))
  FUNC_8(VAR_2, VAR_3, VAR_5);
 else
  FUNC_9(VAR_2, VAR_3, &VAR_5);

 FUNC_10(VAR_5);
 FUNC_10(VAR_4);
}
