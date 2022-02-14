
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_filedata {int rec_cpu_num; } ;
struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_2, struct file *VAR_3)
{

 VAR_3->private_data = FUNC_0(sizeof(struct qib_filedata), VAR_1);
 if (VAR_3->private_data)
  ((struct qib_filedata *)VAR_3->private_data)->rec_cpu_num = -1;
 return VAR_3->private_data ? 0 : -VAR_0;
}
