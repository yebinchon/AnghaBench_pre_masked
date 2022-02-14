
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {char* lock_file; char* spool_dir; char* status_file; } ;
typedef int statfile ;
typedef int lockfile ;
typedef int fline ;
typedef enum PrinterStatus { ____Placeholder_PrinterStatus } PrinterStatus ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 scalar_t__ FUNC_3 (int,int) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char,int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int,char*,char*,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,char*,int) ;
 int * FUNC_10 (char*,char*) ;
 int FUNC_11 (int ,char*,int ) ;

__attribute__((used)) static enum PrinterStatus
FUNC_12(const struct printer *VAR_10)
{
 char VAR_11[VAR_3];
 char VAR_12[VAR_3];
 char VAR_13[128];
 int VAR_14;
 FILE *VAR_15 = ((void*)0);
 enum PrinterStatus VAR_16 = VAR_8;

 if (VAR_10->lock_file[0] == '/')
  FUNC_9(VAR_12, VAR_10->lock_file, sizeof(VAR_12));
 else
  FUNC_7(VAR_12, sizeof(VAR_12), "%s/%s",
      VAR_10->spool_dir, VAR_10->lock_file);

 VAR_14 = FUNC_6(VAR_12, VAR_4);
 if (VAR_14 < 0 || FUNC_3(VAR_14, VAR_1 | VAR_0) == 0) {
  VAR_16 = VAR_5;
  goto LABEL_DONE;
 }

 if (VAR_10->status_file[0] == '/')
  FUNC_9(VAR_11, VAR_10->status_file, sizeof(VAR_11));
 else
  FUNC_7(VAR_11, sizeof(VAR_11), "%s/%s",
      VAR_10->spool_dir, VAR_10->status_file);

 VAR_15 = FUNC_4(VAR_11, "r");
 if (VAR_15 == ((void*)0)) {
  FUNC_11(VAR_2, "cannot open status file: %s", FUNC_8(VAR_9));
  VAR_16 = VAR_8;
  goto LABEL_DONE;
 }

 FUNC_5(&VAR_13[0], '\0', sizeof(VAR_13));
 if (FUNC_2(VAR_13, sizeof(VAR_13) -1, VAR_15) == ((void*)0)) {
  VAR_16 = VAR_8;
  goto LABEL_DONE;
 }

 if (FUNC_10(VAR_13, "is ready and printing") != ((void*)0)) {
  VAR_16 = VAR_7;
  goto LABEL_DONE;
 }

 if (FUNC_10(VAR_13, "to become ready (offline?)") != ((void*)0)) {
  VAR_16 = VAR_6;
  goto LABEL_DONE;
 }

LABEL_DONE:
 if (VAR_14 >= 0)
  (void)FUNC_0(VAR_14);

 if (VAR_15 != ((void*)0))
  (void)FUNC_1(VAR_15);

 return (VAR_16);
}
