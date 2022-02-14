
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kcs_bmc {int lock; scalar_t__ running; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct kcs_bmc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct kcs_bmc* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, struct file *VAR_1)
{
 struct kcs_bmc *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(&VAR_2->lock);
 VAR_2->running = 0;
 FUNC_0(VAR_2);
 FUNC_2(&VAR_2->lock);

 return 0;
}
