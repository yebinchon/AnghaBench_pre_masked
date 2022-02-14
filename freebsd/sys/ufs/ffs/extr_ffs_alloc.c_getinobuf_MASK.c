
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
typedef int u_int ;
struct inode {int dummy; } ;
struct fs {int fs_ipg; scalar_t__ fs_bsize; } ;
struct buf {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 struct fs* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct fs*,int ) ;
 struct buf* FUNC_3 (int ,int ,int,int ,int ,int) ;
 int FUNC_4 (struct fs*,scalar_t__) ;

__attribute__((used)) static inline struct buf *
FUNC_5(struct inode *VAR_0, u_int VAR_1, u_int32_t VAR_2, int VAR_3)
{
 struct fs *VAR_4;

 VAR_4 = FUNC_1(VAR_0);
 return (FUNC_3(FUNC_0(VAR_0), FUNC_2(VAR_4, FUNC_4(VAR_4,
     VAR_1 * VAR_4->fs_ipg + VAR_2)), (int)VAR_4->fs_bsize, 0, 0,
     VAR_3));
}
