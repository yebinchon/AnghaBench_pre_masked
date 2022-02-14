
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spufs_sb_info {scalar_t__ debug; } ;
struct seq_file {int dummy; } ;
struct inode {int i_mode; int i_gid; int i_uid; } ;
struct dentry {struct inode* d_inode; int d_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct seq_file*,char*,int) ;
 int FUNC_4 (struct seq_file*,char*) ;
 struct spufs_sb_info* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_4, struct dentry *VAR_5)
{
 struct spufs_sb_info *VAR_6 = FUNC_5(VAR_5->d_sb);
 struct inode *VAR_7 = VAR_5->d_inode;

 if (!FUNC_6(VAR_7->i_uid, VAR_1))
  FUNC_3(VAR_4, ",uid=%u",
      FUNC_1(&VAR_3, VAR_7->i_uid));
 if (!FUNC_2(VAR_7->i_gid, VAR_0))
  FUNC_3(VAR_4, ",gid=%u",
      FUNC_0(&VAR_3, VAR_7->i_gid));
 if ((VAR_7->i_mode & VAR_2) != 0775)
  FUNC_3(VAR_4, ",mode=%o", VAR_7->i_mode);
 if (VAR_6->debug)
  FUNC_4(VAR_4, ",debug");
 return 0;
}
