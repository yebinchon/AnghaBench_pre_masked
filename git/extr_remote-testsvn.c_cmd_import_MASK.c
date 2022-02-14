
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_note {int rev_nr; int member_0; } ;
struct object_id {int dummy; } ;
struct child_process {int out; int args; } ;


 struct child_process VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (struct child_process*) ;
 int FUNC_7 (char*) ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (char*,int ) ;
 scalar_t__ FUNC_9 (char*,struct rev_note*) ;
 int FUNC_10 (char*,char*,char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_11 (int ,struct object_id*) ;
 char* FUNC_12 (struct object_id*) ;
 int FUNC_13 (struct child_process*) ;
 int FUNC_14 () ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (char*,int ,int ) ;
 int FUNC_17 () ;
 char* VAR_7 ;
 int FUNC_18 (char*,char const*,...) ;

__attribute__((used)) static int FUNC_19(const char *VAR_8)
{
 int VAR_9;
 int VAR_10;
 char *VAR_11;
 struct object_id VAR_12;
 unsigned int VAR_13;
 struct child_process VAR_14 = VAR_0;
 const char *VAR_15 = "svnrdump";

 if (FUNC_11(VAR_6, &VAR_12))
  VAR_13 = 0;
 else {
  VAR_11 = FUNC_12(&VAR_12);
  if(VAR_11 == ((void*)0)) {
   FUNC_18("No note found for %s.", VAR_6);
   VAR_13 = 0;
  } else {
   struct rev_note VAR_16 = { 0 };
   if (FUNC_9(VAR_11, &VAR_16))
    FUNC_4("Revision number couldn't be parsed from note.");
   VAR_13 = VAR_16.rev_nr + 1;
   FUNC_7(VAR_11);
  }
 }
 FUNC_2(VAR_13 - 1);

 if (VAR_3) {
  VAR_10 = FUNC_8(VAR_7, VAR_1);
  if(VAR_10 < 0)
   FUNC_5("Couldn't open svn dump file %s.", VAR_7);
 } else {
  VAR_14.out = -1;
  FUNC_0(&VAR_14.args, VAR_15);
  FUNC_0(&VAR_14.args, "dump");
  FUNC_0(&VAR_14.args, VAR_7);
  FUNC_1(&VAR_14.args, "-r%u:HEAD", VAR_13);

  VAR_9 = FUNC_13(&VAR_14);
  if (VAR_9)
   FUNC_4("Unable to start %s, code %d", VAR_15, VAR_9);
  VAR_10 = VAR_14.out;
 }

 FUNC_10("feature import-marks-if-exists=%s\n"
   "feature export-marks=%s\n", VAR_4, VAR_4);

 FUNC_15(VAR_10, VAR_2);
 FUNC_16(VAR_7, VAR_6, VAR_5);
 FUNC_14();
 FUNC_17();

 FUNC_3(VAR_10);
 if (!VAR_3) {
  VAR_9 = FUNC_6(&VAR_14);
  if (VAR_9)
   FUNC_18("%s, returned %d", VAR_15, VAR_9);
 }

 return 0;
}
