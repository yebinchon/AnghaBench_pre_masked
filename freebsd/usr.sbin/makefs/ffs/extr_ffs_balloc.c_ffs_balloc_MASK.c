
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_fs; } ;
struct buf {int dummy; } ;
typedef int off_t ;
struct TYPE_2__ {scalar_t__ fs_magic; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct inode*,int ,int,struct buf**) ;
 int FUNC_1 (struct inode*,int ,int,struct buf**) ;

int
FUNC_2(struct inode *VAR_1, off_t VAR_2, int VAR_3, struct buf **VAR_4)
{
 if (VAR_1->i_fs->fs_magic == VAR_0)
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 else
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
