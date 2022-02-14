
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct memdev {TYPE_1__* fops; int fmode; } ;
struct inode {int dummy; } ;
struct file {int f_mode; TYPE_1__* f_op; } ;
struct TYPE_2__ {int (* open ) (struct inode*,struct file*) ;} ;


 int FUNC_0 (struct memdev*) ;
 int VAR_0 ;
 struct memdev* VAR_1 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 int VAR_4;
 const struct memdev *VAR_5;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 >= FUNC_0(VAR_1))
  return -VAR_0;

 VAR_5 = &VAR_1[VAR_4];
 if (!VAR_5->fops)
  return -VAR_0;

 VAR_3->f_op = VAR_5->fops;
 VAR_3->f_mode |= VAR_5->fmode;

 if (VAR_5->fops->open)
  return VAR_5->fops->open(VAR_2, VAR_3);

 return 0;
}
