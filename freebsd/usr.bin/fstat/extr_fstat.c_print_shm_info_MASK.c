
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shmstat {int mode; int size; } ;
struct procstat {int dummy; } ;
struct filestat {char* fs_path; int fs_fflags; } ;
typedef int mode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct procstat*,struct filestat*,struct shmstat*,char*) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static void
FUNC_5(struct procstat *VAR_2, struct filestat *VAR_3)
{
 struct shmstat VAR_4;
 char VAR_5[VAR_0];
 char VAR_6[15];
 int VAR_7;

 VAR_7 = FUNC_2(VAR_2, VAR_3, &VAR_4, VAR_5);
 if (VAR_7 != 0) {
  FUNC_1("* error");
  return;
 }
 if (VAR_1) {
  FUNC_1("             ");
  (void)FUNC_3(VAR_6, sizeof(VAR_6), "%o", VAR_4.mode);
 } else {
  FUNC_1(" %-15s", VAR_3->fs_path != ((void*)0) ? VAR_3->fs_path : "-");
  FUNC_4(VAR_4.mode, VAR_6);
 }
 FUNC_1(" %10s %6ju", VAR_6, VAR_4.size);
 FUNC_0(VAR_3->fs_fflags);
}
