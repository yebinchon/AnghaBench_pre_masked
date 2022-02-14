
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int mode_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive*) ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (struct archive*,char*,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*) ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (char*,char*) ;

__attribute__((used)) static void
FUNC_13(struct archive *VAR_2, struct archive_entry *VAR_3)
{
 char *VAR_4;
 mode_t VAR_5;

 VAR_4 = FUNC_11(FUNC_6(VAR_3));
 VAR_5 = FUNC_5(VAR_3);


 if (!FUNC_0(VAR_5) && !FUNC_2(VAR_5) && !FUNC_1(VAR_5)) {
  FUNC_12("skipping non-regular entry '%s'", VAR_4);
  FUNC_3(FUNC_7(VAR_2));
  FUNC_9(VAR_4);
  return;
 }


 if (FUNC_0(VAR_5)) {
  FUNC_3(FUNC_7(VAR_2));
  FUNC_9(VAR_4);
  return;
 }


 if (!FUNC_4(VAR_4)) {
  FUNC_3(FUNC_7(VAR_2));
  FUNC_9(VAR_4);
  return;
 }

 if (VAR_1)
  FUNC_10("x %s\n", VAR_4);

 (void)FUNC_8(VAR_2, VAR_4, VAR_0);

 FUNC_9(VAR_4);
}
