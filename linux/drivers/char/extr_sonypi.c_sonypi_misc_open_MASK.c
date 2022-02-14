
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int lock; int open_count; int fifo; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 FUNC_1(&VAR_0.lock);

 if (!VAR_0.open_count)
  FUNC_0(&VAR_0.fifo);
 VAR_0.open_count++;
 FUNC_2(&VAR_0.lock);

 return 0;
}
