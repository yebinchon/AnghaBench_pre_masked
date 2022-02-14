
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_struct {int dummy; } ;
struct perf_event {int ns; struct perf_event* parent; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;


 int FUNC_0 (struct task_struct*,int,int ) ;
 struct task_struct* FUNC_1 (int,int *) ;
 int VAR_0 ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static u32 FUNC_3(struct perf_event *VAR_1,
      u32 VAR_2, enum pid_type VAR_3)
{
 struct task_struct *VAR_4;


 if (!VAR_2)
  goto out;

 VAR_4 = FUNC_1(VAR_2, &VAR_0);
 VAR_2 = -1;
 if (VAR_4) {




  if (VAR_1->parent)
   VAR_1 = VAR_1->parent;
  VAR_2 = FUNC_0(VAR_4, VAR_3, VAR_1->ns);




  if (!VAR_2 && !FUNC_2(VAR_4))
   VAR_2 = -1;
 }
out:
 return VAR_2;
}
