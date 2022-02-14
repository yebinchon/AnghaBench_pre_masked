
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {struct capidev* private_data; } ;
struct TYPE_2__ {scalar_t__ applid; } ;
struct capidev {int recvqueue; TYPE_1__ ap; int list; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (struct capidev*,int) ;
 int FUNC_2 (struct capidev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1, struct file *VAR_2)
{
 struct capidev *VAR_3 = VAR_2->private_data;

 FUNC_4(&VAR_0);
 FUNC_3(&VAR_3->list);
 FUNC_5(&VAR_0);

 if (VAR_3->ap.applid)
  FUNC_0(&VAR_3->ap);
 FUNC_6(&VAR_3->recvqueue);
 FUNC_1(VAR_3, 0xffffffff);

 FUNC_2(VAR_3);
 return 0;
}
