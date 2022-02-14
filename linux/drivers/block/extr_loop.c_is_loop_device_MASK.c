
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_rdev; int i_mode; } ;
struct file {TYPE_1__* f_mapping; } ;
struct TYPE_2__ {struct inode* host; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct file *VAR_1)
{
 struct inode *VAR_2 = VAR_1->f_mapping->host;

 return VAR_2 && FUNC_1(VAR_2->i_mode) && FUNC_0(VAR_2->i_rdev) == VAR_0;
}
