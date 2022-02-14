
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cmdq_thread {int task_busy_list; } ;
struct cmdq {int suspended; int thread_nr; int clock; struct cmdq_thread* thread; } ;


 int FUNC_0 (int ) ;
 struct cmdq* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct cmdq *VAR_1 = FUNC_1(VAR_0);
 struct cmdq_thread *VAR_2;
 int VAR_3;
 bool VAR_4 = 0;

 VAR_1->suspended = 1;

 for (VAR_3 = 0; VAR_3 < VAR_1->thread_nr; VAR_3++) {
  VAR_2 = &VAR_1->thread[VAR_3];
  if (!FUNC_3(&VAR_2->task_busy_list)) {
   VAR_4 = 1;
   break;
  }
 }

 if (VAR_4)
  FUNC_2(VAR_0, "exist running task(s) in suspend\n");

 FUNC_0(VAR_1->clock);

 return 0;
}
