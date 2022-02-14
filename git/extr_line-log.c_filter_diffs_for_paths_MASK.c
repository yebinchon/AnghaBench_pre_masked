
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct line_log_data {int path; struct line_log_data* next; } ;
struct diff_queue_struct {int nr; struct diff_filepair** queue; } ;
struct diff_filepair {TYPE_1__* two; } ;
struct TYPE_2__ {int path; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct diff_queue_struct*) ;
 int FUNC_2 (struct diff_filepair*) ;
 int FUNC_3 (struct diff_queue_struct*,struct diff_filepair*) ;
 struct diff_queue_struct VAR_0 ;
 int FUNC_4 (struct diff_filepair**) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct line_log_data *VAR_1, int VAR_2)
{
 int VAR_3;
 struct diff_queue_struct VAR_4;
 FUNC_1(&VAR_4);

 for (VAR_3 = 0; VAR_3 < VAR_0.nr; VAR_3++) {
  struct diff_filepair *VAR_5 = VAR_0.queue[VAR_3];
  struct line_log_data *VAR_6 = ((void*)0);

  if (!FUNC_0(VAR_5->two)) {
   if (VAR_2)
    FUNC_3(&VAR_4, VAR_5);
   else
    FUNC_2(VAR_5);
   continue;
  }
  for (VAR_6 = VAR_1; VAR_6; VAR_6 = VAR_6->next) {
   if (!FUNC_5(VAR_6->path, VAR_5->two->path))
    break;
  }
  if (VAR_6)
   FUNC_3(&VAR_4, VAR_5);
  else
   FUNC_2(VAR_5);
 }
 FUNC_4(VAR_0.queue);
 VAR_0 = VAR_4;
}
