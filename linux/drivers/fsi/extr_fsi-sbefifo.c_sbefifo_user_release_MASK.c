
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbefifo_user {scalar_t__ cmd_page; } ;
struct inode {int dummy; } ;
struct file {struct sbefifo_user* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct sbefifo_user*) ;
 int FUNC_2 (struct sbefifo_user*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 struct sbefifo_user *VAR_3 = VAR_2->private_data;

 if (!VAR_3)
  return -VAR_0;

 FUNC_2(VAR_3);
 FUNC_0((unsigned long)VAR_3->cmd_page);
 FUNC_1(VAR_3);

 return 0;
}
