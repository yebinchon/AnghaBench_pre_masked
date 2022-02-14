
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio_raw_client {int node; struct serio_raw* serio_raw; } ;
struct serio_raw {int serio; int client_list; int kref; scalar_t__ dead; } ;
struct inode {int dummy; } ;
struct file {struct serio_raw_client* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 struct serio_raw_client* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct serio_raw* FUNC_8 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_4, struct file *VAR_5)
{
 struct serio_raw *VAR_6;
 struct serio_raw_client *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(&VAR_3);
 if (VAR_8)
  return VAR_8;

 VAR_6 = FUNC_8(FUNC_0(VAR_4));
 if (!VAR_6) {
  VAR_8 = -VAR_0;
  goto out;
 }

 if (VAR_6->dead) {
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_2(sizeof(struct serio_raw_client), VAR_2);
 if (!VAR_7) {
  VAR_8 = -VAR_1;
  goto out;
 }

 VAR_7->serio_raw = VAR_6;
 VAR_5->private_data = VAR_7;

 FUNC_1(&VAR_6->kref);

 FUNC_7(VAR_6->serio);
 FUNC_3(&VAR_7->node, &VAR_6->client_list);
 FUNC_6(VAR_6->serio);

out:
 FUNC_5(&VAR_3);
 return VAR_8;
}
