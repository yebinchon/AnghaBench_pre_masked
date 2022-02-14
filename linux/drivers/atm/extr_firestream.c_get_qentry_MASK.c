
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {int offset; } ;
struct fs_dev {int dummy; } ;
struct FS_QENTRY {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct FS_QENTRY* FUNC_1 (int) ;
 int FUNC_2 (struct fs_dev*,int ) ;

__attribute__((used)) static inline struct FS_QENTRY *FUNC_3 (struct fs_dev *VAR_1, struct queue *VAR_2)
{
 return FUNC_1 (FUNC_2 (VAR_1, FUNC_0(VAR_2->offset)) & VAR_0);
}
