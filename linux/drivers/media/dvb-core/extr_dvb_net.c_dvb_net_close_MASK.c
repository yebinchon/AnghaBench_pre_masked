
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct dvb_device* private_data; } ;
struct dvb_net {int exit; } ;
struct dvb_device {int users; int wait_queue; struct dvb_net* priv; } ;


 int FUNC_0 (struct inode*,struct file*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct dvb_device *VAR_2 = VAR_1->private_data;
 struct dvb_net *VAR_3 = VAR_2->priv;

 FUNC_0(VAR_0, VAR_1);

 if(VAR_2->users == 1 && VAR_3->exit == 1)
  FUNC_1(&VAR_2->wait_queue);
 return 0;
}
