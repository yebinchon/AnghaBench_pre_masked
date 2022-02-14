
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_gid; int st_uid; int st_mtime; int st_atime; int st_mode; } ;
struct lev_filesys_xfs_change_attrs {int filename_size; int gid; int uid; int modtime; int actime; int mode; int filename; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,int *,char*,struct stat*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int,char*,char*) ;

__attribute__((used)) static void FUNC_5 (struct lev_filesys_xfs_change_attrs *VAR_2) {
  char VAR_3[VAR_0];
  FUNC_0 (VAR_2->filename_size < VAR_0 - 1);
  FUNC_1 (VAR_3, VAR_2->filename, VAR_2->filename_size);
  VAR_3[VAR_2->filename_size] = 0;
  FUNC_4 (3, "name = %s\n", VAR_3);
  struct stat VAR_4;
  VAR_4.st_mode = VAR_2->mode;
  VAR_4.st_atime = VAR_2->actime;
  VAR_4.st_mtime = VAR_2->modtime;
  VAR_4.st_uid = VAR_2->uid;
  VAR_4.st_gid = VAR_2->gid;
  FUNC_3 (FUNC_2 (VAR_1, ((void*)0), VAR_3, &VAR_4));
}
