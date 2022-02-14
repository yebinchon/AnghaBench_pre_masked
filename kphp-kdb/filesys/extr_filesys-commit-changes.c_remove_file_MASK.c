
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lev_filesys_rmdir {int dirpath_size; int dirpath; } ;
struct TYPE_3__ {int filename; } ;
typedef TYPE_1__ file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 struct lev_filesys_rmdir* FUNC_3 (int ,int) ;
 int FUNC_4 (char*,char*,char*,int) ;
 int FUNC_5 (int ,char*,int const) ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,int *,char*,int *) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,int,char*,char*,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (char*) ;
 char* VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_11 (int,char*,char*) ;

void FUNC_12 (int VAR_9, file_t *VAR_10) {
  char *VAR_11 = VAR_3 + VAR_4 + 1;
  FUNC_0 (VAR_3, VAR_9, VAR_10->filename);
  FUNC_11 (3, "Remove: %s\n", VAR_11);
  if (VAR_6) {
    FUNC_8 ("Remove: %s\n", VAR_11);
  } else {
    char VAR_12[VAR_1];
    int VAR_13 = 0;
    FUNC_1 (FUNC_9 (VAR_12, VAR_1, "%s/%s", VAR_7, VAR_11) < VAR_1);
    if (VAR_8) {
      VAR_13 = FUNC_2 (VAR_12);
    } else {
      FUNC_7 (FUNC_6 (VAR_5, ((void*)0), VAR_11, ((void*)0)));
    }
    if (!VAR_13) {
      const int VAR_14 = FUNC_10 (VAR_11);
      struct lev_filesys_rmdir *VAR_15 = FUNC_3 (VAR_0, sizeof (struct lev_filesys_rmdir) + VAR_14);
      VAR_15->dirpath_size = VAR_14;
      FUNC_5 (VAR_15->dirpath, VAR_11, VAR_14);
    } else {
      FUNC_4 ("delete_file (%s/%s) failed (exit_code = %d).\n", VAR_7, VAR_11, VAR_13);
      VAR_2++;
    }
  }
  VAR_3[VAR_9] = 0;
}
