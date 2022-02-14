
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip_seqops {struct tpm_chip* chip; struct seq_operations* seqops; } ;
struct tpm_chip {int dev; } ;
struct seq_operations {int dummy; } ;
struct seq_file {struct tpm_chip* private; } ;
struct inode {scalar_t__ i_private; } ;
struct file {struct seq_file* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct file*,struct seq_operations const*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1,
         struct file *VAR_2)
{
 int VAR_3;
 struct seq_file *VAR_4;
 struct tpm_chip_seqops *VAR_5;
 const struct seq_operations *VAR_6;
 struct tpm_chip *VAR_7;

 FUNC_1(VAR_1);
 if (!VAR_1->i_private) {
  FUNC_2(VAR_1);
  return -VAR_0;
 }
 VAR_5 = (struct tpm_chip_seqops *)VAR_1->i_private;
 VAR_6 = VAR_5->seqops;
 VAR_7 = VAR_5->chip;
 FUNC_0(&VAR_7->dev);
 FUNC_2(VAR_1);


 VAR_3 = FUNC_3(VAR_2, VAR_6);
 if (!VAR_3) {
  VAR_4 = VAR_2->private_data;
  VAR_4->private = VAR_7;
 }

 return VAR_3;
}
