
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufsmount {struct fs* um_fs; } ;
struct mount {int mnt_kern_flag; } ;
struct fs {int fs_fsmnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 struct ufsmount* FUNC_1 (struct mount*) ;
 int VAR_3 ;
 int FUNC_2 (struct mount*,int ,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct mount*) ;
 int FUNC_4 (struct mount*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(void *VAR_5)
{
 struct fs *VAR_6;
 struct ufsmount *VAR_7;
 struct mount *VAR_8;
 int VAR_9;

 FUNC_6(&VAR_4);

 VAR_8 = (struct mount *)VAR_5;
 VAR_7 = FUNC_1(VAR_8);
 VAR_6 = VAR_7->um_fs;

 if (FUNC_3(VAR_8) == 0) {
  FUNC_7(&VAR_4);
  return;
 }

 FUNC_0((VAR_8->mnt_kern_flag & VAR_2) != 0,
     ("MNTK_SUSPEND not set"));

 VAR_9 = FUNC_2(VAR_8, VAR_3, VAR_0 | VAR_1);
 if (VAR_9 != 0)
  FUNC_5("failed to unsuspend writes on %s", VAR_6->fs_fsmnt);

 FUNC_4(VAR_8);
 FUNC_7(&VAR_4);
}
