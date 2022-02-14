
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_root; struct hypfs_sb_info* s_fs_info; } ;
struct kiocb {int ki_filp; } ;
struct iov_iter {int dummy; } ;
struct hypfs_sb_info {scalar_t__ last_update; int lock; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct super_block* i_sb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct iov_iter*,size_t) ;
 size_t FUNC_6 (struct iov_iter*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static ssize_t FUNC_11(struct kiocb *VAR_2, struct iov_iter *VAR_3)
{
 int VAR_4;
 struct super_block *VAR_5 = FUNC_0(VAR_2->ki_filp)->i_sb;
 struct hypfs_sb_info *VAR_6 = VAR_5->s_fs_info;
 size_t VAR_7 = FUNC_6(VAR_3);
 FUNC_8(&VAR_6->lock);
 if (VAR_6->last_update == FUNC_7()) {
  VAR_4 = -VAR_0;
  goto out;
 }
 FUNC_1(VAR_5->s_root);
 if (VAR_1)
  VAR_4 = FUNC_4(VAR_5->s_root);
 else
  VAR_4 = FUNC_2(VAR_5->s_root);
 if (VAR_4) {
  FUNC_10("Updating the hypfs tree failed\n");
  FUNC_1(VAR_5->s_root);
  goto out;
 }
 FUNC_3(VAR_5);
 VAR_4 = VAR_7;
 FUNC_5(VAR_3, VAR_7);
out:
 FUNC_9(&VAR_6->lock);
 return VAR_4;
}
