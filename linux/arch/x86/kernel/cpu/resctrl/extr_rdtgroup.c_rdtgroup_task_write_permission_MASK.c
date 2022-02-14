
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int pid; } ;
struct kernfs_open_file {int dummy; } ;
struct cred {int suid; int euid; int uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cred* FUNC_0 () ;
 struct cred* FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct cred const*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct task_struct *VAR_2,
       struct kernfs_open_file *VAR_3)
{
 const struct cred *VAR_4 = FUNC_1(VAR_2);
 const struct cred *VAR_5 = FUNC_0();
 int VAR_6 = 0;





 if (!FUNC_4(VAR_5->euid, VAR_1) &&
     !FUNC_4(VAR_5->euid, VAR_4->uid) &&
     !FUNC_4(VAR_5->euid, VAR_4->suid)) {
  FUNC_3("No permission to move task %d\n", VAR_2->pid);
  VAR_6 = -VAR_0;
 }

 FUNC_2(VAR_4);
 return VAR_6;
}
