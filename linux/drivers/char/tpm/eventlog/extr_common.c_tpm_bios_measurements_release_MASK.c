
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dev; } ;
struct seq_file {scalar_t__ private; } ;
struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0,
      struct file *VAR_1)
{
 struct seq_file *VAR_2 = (struct seq_file *)VAR_1->private_data;
 struct tpm_chip *VAR_3 = (struct tpm_chip *)VAR_2->private;

 FUNC_0(&VAR_3->dev);

 return FUNC_1(VAR_0, VAR_1);
}
