
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct diff_queue_struct {int nr; struct diff_filepair** queue; } ;
struct TYPE_2__ {int no_index; } ;
struct diff_options {int skip_stat_unmatch; TYPE_1__ flags; int repo; } ;
struct diff_filepair {int dummy; } ;


 int FUNC_0 (struct diff_queue_struct*) ;
 scalar_t__ FUNC_1 (int ,struct diff_filepair*) ;
 int FUNC_2 (struct diff_filepair*) ;
 int FUNC_3 (struct diff_queue_struct*,struct diff_filepair*) ;
 struct diff_queue_struct VAR_0 ;
 int FUNC_4 (struct diff_filepair**) ;

__attribute__((used)) static void FUNC_5(struct diff_options *VAR_1)
{
 int VAR_2;
 struct diff_queue_struct *VAR_3 = &VAR_0;
 struct diff_queue_struct VAR_4;
 FUNC_0(&VAR_4);

 for (VAR_2 = 0; VAR_2 < VAR_3->nr; VAR_2++) {
  struct diff_filepair *VAR_5 = VAR_3->queue[VAR_2];

  if (FUNC_1(VAR_1->repo, VAR_5))
   FUNC_3(&VAR_4, VAR_5);
  else {





   if (!VAR_1->flags.no_index)
    VAR_1->skip_stat_unmatch++;
   FUNC_2(VAR_5);
  }
 }
 FUNC_4(VAR_3->queue);
 *VAR_3 = VAR_4;
}
