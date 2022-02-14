
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kcs_bmc {int running; int lock; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct kcs_bmc* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 struct kcs_bmc *VAR_3 = FUNC_2(VAR_2);
 int VAR_4 = 0;

 FUNC_0(&VAR_3->lock);
 if (!VAR_3->running)
  VAR_3->running = 1;
 else
  VAR_4 = -VAR_0;
 FUNC_1(&VAR_3->lock);

 return VAR_4;
}
