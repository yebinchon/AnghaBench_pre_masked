
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_info {int dummy; } ;
struct line_log_data {int diff; int pair; struct line_log_data* next; int path; } ;
struct diff_ranges {int dummy; } ;
struct diff_queue_struct {int nr; struct diff_filepair** queue; } ;
struct diff_filepair {TYPE_1__* two; } ;
struct TYPE_2__ {int path; } ;


 int FUNC_0 (struct line_log_data*) ;
 int FUNC_1 (struct diff_filepair*) ;
 int FUNC_2 (struct diff_ranges*) ;
 struct line_log_data* FUNC_3 (struct line_log_data*) ;
 int FUNC_4 (int *,struct diff_ranges*,int) ;
 scalar_t__ FUNC_5 (struct rev_info*,struct diff_filepair*,struct line_log_data*,struct diff_ranges**) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct line_log_data **VAR_0,
        struct rev_info *VAR_1,
        struct diff_queue_struct *VAR_2,
        struct line_log_data *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 *VAR_0 = FUNC_3(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_2->nr; VAR_4++) {
  struct diff_ranges *VAR_6 = ((void*)0);
  struct diff_filepair *VAR_7 = VAR_2->queue[VAR_4];
  if (FUNC_5(VAR_1, VAR_7, *VAR_0, &VAR_6)) {
   struct line_log_data *VAR_8 = VAR_3;
   VAR_5++;
   while (VAR_8 && FUNC_6(VAR_8->path, VAR_7->two->path))
    VAR_8 = VAR_8->next;
   FUNC_0(VAR_8);
   VAR_8->pair = FUNC_1(VAR_2->queue[VAR_4]);
   FUNC_4(&VAR_8->diff, VAR_6, sizeof(struct diff_ranges));
  }
  FUNC_2(VAR_6);
 }

 return VAR_5;
}
