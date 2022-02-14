
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat_data {int dummy; } ;
struct stat {int dummy; } ;
struct TYPE_4__ {int buf; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct stat_data*,struct stat*) ;
 int FUNC_7 (int ,char*,char*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (char,int ) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (struct stat_data*,struct stat*) ;
 int FUNC_12 (int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_13 (int ) ;
 int VAR_2 ;
 int FUNC_14 (TYPE_1__*,char*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int,char*,int) ;
 char* FUNC_17 () ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (struct stat*) ;
 int FUNC_21 (char*) ;

__attribute__((used)) static int FUNC_22(void)
{
 struct stat VAR_3;
 struct stat_data VAR_4;
 int VAR_5, VAR_6 = 0;
 char *VAR_7;

 FUNC_14(&VAR_0, "mtime-test-XXXXXX");
 if (!FUNC_12(VAR_0.buf))
  FUNC_5("Could not make temporary directory");

 VAR_7 = FUNC_17();
 FUNC_7(VAR_2, FUNC_0("Testing mtime in '%s' "), VAR_7);
 FUNC_10(VAR_7);

 FUNC_1(VAR_1);
 FUNC_20(&VAR_3);
 FUNC_6(&VAR_4, &VAR_3);
 FUNC_9('.', VAR_2);

 FUNC_2();
 VAR_5 = FUNC_4("newfile");
 FUNC_20(&VAR_3);
 if (!FUNC_11(&VAR_4, &VAR_3)) {
  FUNC_3(VAR_5);
  FUNC_9('\n', VAR_2);
  FUNC_8(VAR_2,FUNC_0("directory stat info does not "
        "change after adding a new file"));
  goto done;
 }
 FUNC_6(&VAR_4, &VAR_3);
 FUNC_9('.', VAR_2);

 FUNC_2();
 FUNC_18("new-dir");
 FUNC_20(&VAR_3);
 if (!FUNC_11(&VAR_4, &VAR_3)) {
  FUNC_3(VAR_5);
  FUNC_9('\n', VAR_2);
  FUNC_8(VAR_2, FUNC_0("directory stat info does not change "
         "after adding a new directory"));
  goto done;
 }
 FUNC_6(&VAR_4, &VAR_3);
 FUNC_9('.', VAR_2);

 FUNC_2();
 FUNC_16(VAR_5, "data", 4);
 FUNC_3(VAR_5);
 FUNC_20(&VAR_3);
 if (FUNC_11(&VAR_4, &VAR_3)) {
  FUNC_9('\n', VAR_2);
  FUNC_8(VAR_2, FUNC_0("directory stat info changes "
         "after updating a file"));
  goto done;
 }
 FUNC_9('.', VAR_2);

 FUNC_2();
 FUNC_3(FUNC_4("new-dir/new"));
 FUNC_20(&VAR_3);
 if (FUNC_11(&VAR_4, &VAR_3)) {
  FUNC_9('\n', VAR_2);
  FUNC_8(VAR_2, FUNC_0("directory stat info changes after "
         "adding a file inside subdirectory"));
  goto done;
 }
 FUNC_9('.', VAR_2);

 FUNC_2();
 FUNC_21("newfile");
 FUNC_20(&VAR_3);
 if (!FUNC_11(&VAR_4, &VAR_3)) {
  FUNC_9('\n', VAR_2);
  FUNC_8(VAR_2, FUNC_0("directory stat info does not "
         "change after deleting a file"));
  goto done;
 }
 FUNC_6(&VAR_4, &VAR_3);
 FUNC_9('.', VAR_2);

 FUNC_2();
 FUNC_21("new-dir/new");
 FUNC_19("new-dir");
 FUNC_20(&VAR_3);
 if (!FUNC_11(&VAR_4, &VAR_3)) {
  FUNC_9('\n', VAR_2);
  FUNC_8(VAR_2, FUNC_0("directory stat info does not "
         "change after deleting a directory"));
  goto done;
 }

 if (FUNC_13(VAR_0.buf))
  FUNC_5(FUNC_0("failed to delete directory %s"), VAR_0.buf);
 FUNC_8(VAR_2, FUNC_0(" OK"));
 VAR_6 = 1;

done:
 FUNC_15(&VAR_0);
 return VAR_6;
}
