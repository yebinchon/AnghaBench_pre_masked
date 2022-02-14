
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_flags; struct dvb_device* private_data; } ;
struct dvb_device {int users; int writers; int readers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(struct inode *VAR_4, struct file *VAR_5)
{
 struct dvb_device *VAR_6 = VAR_5->private_data;

 if (!VAR_6)
  return -VAR_1;

 if (!VAR_6->users)
  return -VAR_0;

 if ((VAR_5->f_flags & VAR_2) == VAR_3) {
  if (!VAR_6->readers)
   return -VAR_0;
  VAR_6->readers--;
 } else {
  if (!VAR_6->writers)
   return -VAR_0;
  VAR_6->writers--;
 }

 VAR_6->users--;
 return 0;
}
