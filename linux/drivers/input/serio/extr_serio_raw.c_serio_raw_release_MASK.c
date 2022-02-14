
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio_raw_client {int node; struct serio_raw* serio_raw; } ;
struct serio_raw {int kref; int serio; } ;
struct inode {int dummy; } ;
struct file {struct serio_raw_client* private_data; } ;


 int FUNC_0 (struct serio_raw_client*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1, struct file *VAR_2)
{
 struct serio_raw_client *VAR_3 = VAR_2->private_data;
 struct serio_raw *VAR_4 = VAR_3->serio_raw;

 FUNC_4(VAR_4->serio);
 FUNC_2(&VAR_3->node);
 FUNC_3(VAR_4->serio);

 FUNC_0(VAR_3);

 FUNC_1(&VAR_4->kref, VAR_0);

 return 0;
}
