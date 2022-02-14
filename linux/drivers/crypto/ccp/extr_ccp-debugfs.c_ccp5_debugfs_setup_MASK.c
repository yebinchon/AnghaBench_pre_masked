
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct ccp_device {char* name; int cmd_q_count; int id; struct dentry* debugfs_instance; struct ccp_device* cmd_q; } ;
struct ccp_cmd_queue {char* name; int cmd_q_count; int id; struct dentry* debugfs_instance; struct ccp_cmd_queue* cmd_q; } ;


 char* VAR_0 ;
 int VAR_1 ;
 struct dentry* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (char*,struct dentry*) ;
 int FUNC_1 (char*,int,struct dentry*,struct ccp_device*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,char*,int) ;

void FUNC_6(struct ccp_device *VAR_7)
{
 struct ccp_cmd_queue *VAR_8;
 char VAR_9[VAR_1 + 1];
 struct dentry *VAR_10;
 int VAR_11;

 if (!FUNC_2())
  return;

 FUNC_3(&VAR_4);
 if (!VAR_2)
  VAR_2 = FUNC_0(VAR_0, ((void*)0));
 FUNC_4(&VAR_4);

 VAR_7->debugfs_instance = FUNC_0(VAR_7->name, VAR_2);

 FUNC_1("info", 0400, VAR_7->debugfs_instance, VAR_7,
       &VAR_3);

 FUNC_1("stats", 0600, VAR_7->debugfs_instance, VAR_7,
       &VAR_6);

 for (VAR_11 = 0; VAR_11 < VAR_7->cmd_q_count; VAR_11++) {
  VAR_8 = &VAR_7->cmd_q[VAR_11];

  FUNC_5(VAR_9, VAR_1 - 1, "q%d", VAR_8->id);

  VAR_10 =
   FUNC_0(VAR_9, VAR_7->debugfs_instance);

  FUNC_1("stats", 0600, VAR_10, VAR_8,
        &VAR_5);
 }

 return;
}
