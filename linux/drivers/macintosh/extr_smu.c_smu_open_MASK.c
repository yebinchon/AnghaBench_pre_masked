
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_private {int list; int wait; int mode; int lock; } ;
struct inode {int dummy; } ;
struct file {struct smu_private* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct smu_private* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_6, struct file *VAR_7)
{
 struct smu_private *VAR_8;
 unsigned long VAR_9;

 VAR_8 = FUNC_1(sizeof(struct smu_private), VAR_1);
 if (VAR_8 == 0)
  return -VAR_0;
 FUNC_5(&VAR_8->lock);
 VAR_8->mode = VAR_4;
 FUNC_0(&VAR_8->wait);

 FUNC_3(&VAR_5);
 FUNC_6(&VAR_3, VAR_9);
 FUNC_2(&VAR_8->list, &VAR_2);
 FUNC_7(&VAR_3, VAR_9);
 VAR_7->private_data = VAR_8;
 FUNC_4(&VAR_5);

 return 0;
}
