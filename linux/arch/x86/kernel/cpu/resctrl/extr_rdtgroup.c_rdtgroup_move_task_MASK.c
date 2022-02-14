
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct rdtgroup {int dummy; } ;
struct kernfs_open_file {int dummy; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*,struct rdtgroup*) ;
 struct task_struct* VAR_1 ;
 struct task_struct* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 (struct task_struct*,struct kernfs_open_file*) ;

__attribute__((used)) static int FUNC_8(pid_t VAR_2, struct rdtgroup *VAR_3,
         struct kernfs_open_file *VAR_4)
{
 struct task_struct *VAR_5;
 int VAR_6;

 FUNC_4();
 if (VAR_2) {
  VAR_5 = FUNC_1(VAR_2);
  if (!VAR_5) {
   FUNC_5();
   FUNC_6("No task %d\n", VAR_2);
   return -VAR_0;
  }
 } else {
  VAR_5 = VAR_1;
 }

 FUNC_2(VAR_5);
 FUNC_5();

 VAR_6 = FUNC_7(VAR_5, VAR_4);
 if (!VAR_6)
  VAR_6 = FUNC_0(VAR_5, VAR_3);

 FUNC_3(VAR_5);
 return VAR_6;
}
