
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {size_t ki_pos; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct file {char* private_data; } ;
typedef size_t ssize_t ;
typedef size_t loff_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (char*,size_t,struct iov_iter*) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct iov_iter*) ;
 size_t FUNC_3 (char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct kiocb *VAR_2, struct iov_iter *VAR_3)
{
 struct file *VAR_4 = VAR_2->ki_filp;
 char *VAR_5 = VAR_4->private_data;
 size_t VAR_6 = FUNC_3(VAR_5);
 loff_t VAR_7 = VAR_2->ki_pos;
 size_t VAR_8;

 if (VAR_7 < 0)
  return -VAR_1;
 if (VAR_7 >= VAR_6 || !FUNC_2(VAR_3))
  return 0;
 VAR_8 = FUNC_0(VAR_5 + VAR_7, VAR_6 - VAR_7, VAR_3);
 if (!VAR_8)
  return -VAR_0;
 VAR_2->ki_pos = VAR_7 + VAR_8;
 FUNC_1(VAR_4);
 return VAR_8;
}
