
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int poll_event; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct file*,int *) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2, struct file *VAR_3)
{
 struct seq_file *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, &VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_4 = VAR_3->private_data;
 VAR_4->poll_event = FUNC_0(&VAR_0);
 return VAR_5;
}
