
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pathspec {int nr; TYPE_1__* items; } ;
struct line_log_data {int path; struct line_log_data* next; } ;
struct TYPE_2__ {int match; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct pathspec *VAR_0,
         struct line_log_data *VAR_1)
{
 int VAR_2;
 struct line_log_data *VAR_3;

 for (VAR_2 = 0, VAR_3 = VAR_1; VAR_2 < VAR_0->nr && VAR_3; VAR_2++, VAR_3 = VAR_3->next)
  if (FUNC_0(VAR_0->items[VAR_2].match, VAR_3->path))
   return 0;
 if (VAR_2 < VAR_0->nr || VAR_3)

  return 0;

 return 1;
}
