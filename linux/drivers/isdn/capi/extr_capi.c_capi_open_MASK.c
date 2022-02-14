
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct capidev* private_data; } ;
struct capidev {int list; int nccis; int recvwait; int recvqueue; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 struct capidev* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_4, struct file *VAR_5)
{
 struct capidev *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_4(&VAR_6->lock);
 FUNC_7(&VAR_6->recvqueue);
 FUNC_1(&VAR_6->recvwait);
 FUNC_0(&VAR_6->nccis);
 VAR_5->private_data = VAR_6;

 FUNC_5(&VAR_3);
 FUNC_3(&VAR_6->list, &VAR_2);
 FUNC_6(&VAR_3);

 return FUNC_8(VAR_4, VAR_5);
}
