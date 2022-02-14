
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int wait_for_quiescent; struct ppl_conf* log_private; } ;
struct ppl_log {int io_list_lock; } ;
struct ppl_conf {int count; struct ppl_log* child_logs; } ;


 int FUNC_0 (struct r5conf*,struct ppl_log*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4(struct r5conf *VAR_0, int VAR_1)
{
 struct ppl_conf *VAR_2 = VAR_0->log_private;
 int VAR_3;

 if (VAR_1) {
  for (VAR_3 = 0; VAR_3 < VAR_2->count; VAR_3++) {
   struct ppl_log *VAR_4 = &VAR_2->child_logs[VAR_3];

   FUNC_1(&VAR_4->io_list_lock);
   FUNC_3(VAR_0->wait_for_quiescent,
         FUNC_0(VAR_0, VAR_4),
         VAR_4->io_list_lock);
   FUNC_2(&VAR_4->io_list_lock);
  }
 }
}
