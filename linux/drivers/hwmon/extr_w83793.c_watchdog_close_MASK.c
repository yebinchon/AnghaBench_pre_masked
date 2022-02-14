
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w83793_data {int kref; int watchdog_is_open; TYPE_1__* client; scalar_t__ watchdog_expect_close; } ;
struct inode {int dummy; } ;
struct file {struct w83793_data* private_data; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct w83793_data*) ;
 int FUNC_6 (struct w83793_data*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_2, struct file *VAR_3)
{
 struct w83793_data *VAR_4 = VAR_3->private_data;

 if (VAR_4->watchdog_expect_close) {
  FUNC_5(VAR_4);
  VAR_4->watchdog_expect_close = 0;
 } else {
  FUNC_6(VAR_4);
  FUNC_1(&VAR_4->client->dev,
   "unexpected close, not stopping watchdog!\n");
 }

 FUNC_0(0, &VAR_4->watchdog_is_open);


 FUNC_3(&VAR_1);
 FUNC_2(&VAR_4->kref, VAR_0);
 FUNC_4(&VAR_1);

 return 0;
}
