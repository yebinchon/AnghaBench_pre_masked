
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_private {int list; scalar_t__ backlight_locker; int wait; int lock; scalar_t__ rb_put; scalar_t__ rb_get; } ;
struct inode {int dummy; } ;
struct file {struct pmu_private* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct pmu_private* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_8(struct inode *VAR_5, struct file *VAR_6)
{
 struct pmu_private *VAR_7;
 unsigned long VAR_8;

 VAR_7 = FUNC_1(sizeof(struct pmu_private), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_7->rb_get = VAR_7->rb_put = 0;
 FUNC_5(&VAR_7->lock);
 FUNC_0(&VAR_7->wait);
 FUNC_3(&VAR_4);
 FUNC_6(&VAR_3, VAR_8);



 FUNC_2(&VAR_7->list, &VAR_2);
 FUNC_7(&VAR_3, VAR_8);
 VAR_6->private_data = VAR_7;
 FUNC_4(&VAR_4);
 return 0;
}
