
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_mode; int i_ctime; int i_mtime; int i_atime; int i_ino; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct super_block*,scalar_t__) ;
 struct inode* FUNC_2 (struct super_block*) ;

__attribute__((used)) static struct inode *FUNC_3(struct super_block *VAR_2, int VAR_3)
{
 struct inode *VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4) {
  VAR_4->i_ino = FUNC_1(VAR_2, VAR_0 + VAR_1);
  VAR_4->i_mode = VAR_3;
  VAR_4->i_atime = VAR_4->i_mtime = VAR_4->i_ctime = FUNC_0(VAR_4);
 }
 return VAR_4;
}
