
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int VAR_0 ;
 int FUNC_5 (char*,int) ;

void FUNC_6(void)
{
 FUNC_2("attr/.gitignore");

 FUNC_3(FUNC_5("attr/dir1", 0777));
 FUNC_3(FUNC_5("attr/dir1/dir2", 0777));
 FUNC_3(FUNC_5("attr/dir1/dir2/dir3", 0777));

 FUNC_1("attr/dir1/dir2/dir3/.gitignore", "dir1/\ndir1/subdir/");

 FUNC_0(0, "dir1/file");
 FUNC_0(0, "dir1/dir2/file");
 FUNC_0(0, "dir1/dir2/dir3/file");
 FUNC_0(1, "dir1/dir2/dir3/dir1/file");
 FUNC_0(1, "dir1/dir2/dir3/dir1/subdir/foo");

 if (FUNC_4(VAR_0, "core.ignorecase")) {
  FUNC_1("attr/dir1/dir2/dir3/.gitignore", "DiR1/\nDiR1/subdir/\n");

  FUNC_0(0, "dir1/file");
  FUNC_0(0, "dir1/dir2/file");
  FUNC_0(0, "dir1/dir2/dir3/file");
  FUNC_0(1, "dir1/dir2/dir3/dir1/file");
  FUNC_0(1, "dir1/dir2/dir3/dir1/subdir/foo");
 }
}
