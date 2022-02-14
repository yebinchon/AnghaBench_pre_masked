
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_origin {int dummy; } ;
struct blame_line_tracker {int s_lno; scalar_t__ is_parent; } ;
struct blame_entry {int num_lines; int ignored; int unblamable; struct blame_entry* next; int s_lno; struct blame_origin* suspect; } ;


 scalar_t__ FUNC_0 (struct blame_line_tracker*,struct blame_line_tracker*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct blame_origin*) ;
 struct blame_origin* FUNC_3 (struct blame_origin*) ;
 struct blame_entry* FUNC_4 (struct blame_entry*,int,struct blame_origin*) ;

__attribute__((used)) static void FUNC_5(struct blame_entry *VAR_0,
          struct blame_origin *VAR_1,
          struct blame_entry **VAR_2,
          struct blame_entry **VAR_3,
          struct blame_line_tracker *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;






 VAR_5 = 1;
 VAR_6 = VAR_0->num_lines;
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  struct blame_entry *VAR_8 = ((void*)0);





  if (VAR_7 + 1 < VAR_6) {
   if (FUNC_0(&VAR_4[VAR_7],
            &VAR_4[VAR_7 + 1])) {
    VAR_5++;
    continue;
   }
   VAR_8 = FUNC_4(VAR_0, VAR_5,
           FUNC_3(VAR_0->suspect));
  }
  if (VAR_4[VAR_7].is_parent) {
   VAR_0->ignored = 1;
   FUNC_2(VAR_0->suspect);
   VAR_0->suspect = FUNC_3(VAR_1);
   VAR_0->s_lno = VAR_4[VAR_7 - VAR_5 + 1].s_lno;
   VAR_0->next = *VAR_3;
   *VAR_3 = VAR_0;
  } else {
   VAR_0->unblamable = 1;

   VAR_0->next = *VAR_2;
   *VAR_2 = VAR_0;
  }
  FUNC_1(VAR_0->num_lines == VAR_5);
  VAR_0 = VAR_8;
  VAR_5 = 1;
 }
 FUNC_1(!VAR_0);
}
