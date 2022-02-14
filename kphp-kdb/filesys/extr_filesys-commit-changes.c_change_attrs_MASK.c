
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lev_filesys_xfs_change_attrs {int filename_size; int filename; int gid; int uid; int modtime; int actime; int mode; } ;
struct TYPE_7__ {int st_gid; int st_uid; int st_mtime; int st_atime; int st_mode; } ;
struct TYPE_6__ {TYPE_2__ st; int filename; } ;
typedef TYPE_1__ file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int) ;
 struct lev_filesys_xfs_change_attrs* FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,TYPE_2__*) ;
 int FUNC_5 (int ,char*,int const) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int *,char*,TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,int,char*,char*,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_11 (char*) ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (int,char*,int) ;

__attribute__((used)) static int FUNC_13 (int VAR_8, file_t *VAR_9, int VAR_10) {
  FUNC_0 (VAR_2, VAR_8, VAR_9->filename);
  if (VAR_5) {
    FUNC_9 ("New attrs: %s ", VAR_2 + VAR_3 + 1);
    FUNC_8 (VAR_10);
  } else {
    char *VAR_11 = VAR_2 + VAR_3 + 1;
    const int VAR_12 = FUNC_11 (VAR_11);
    if (VAR_7) {
      char VAR_13[VAR_1];
      FUNC_1 (FUNC_10 (VAR_13, VAR_1, "%s/%s", VAR_6, VAR_11) < VAR_1);
      int VAR_14 = FUNC_4 (VAR_13, &VAR_9->st);
      if (VAR_14 < 0) {
        FUNC_12 (1, "lcopy_attrs returns error code %d.\n", VAR_14);
        return -2;
      }
    } else {
      FUNC_7 (FUNC_6 (VAR_4, ((void*)0), VAR_11, &VAR_9->st));
    }

    if (VAR_10 >= 0) {
      FUNC_3 (VAR_9);
    }
    struct lev_filesys_xfs_change_attrs *VAR_15 = FUNC_2 (VAR_0, sizeof (struct lev_filesys_xfs_change_attrs) + VAR_12);
    VAR_15->mode = VAR_9->st.st_mode;
    VAR_15->actime = VAR_9->st.st_atime;
    VAR_15->modtime = VAR_9->st.st_mtime;
    VAR_15->uid = VAR_9->st.st_uid;
    VAR_15->gid = VAR_9->st.st_gid;
    VAR_15->filename_size = VAR_12;
    FUNC_5 (VAR_15->filename, VAR_11, VAR_12);
  }
  VAR_2[VAR_8] = 0;
  return 0;
}
