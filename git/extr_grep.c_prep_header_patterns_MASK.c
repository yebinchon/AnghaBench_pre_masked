
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_pat {scalar_t__ token; int field; struct grep_pat* next; } ;
struct grep_opt {struct grep_pat* header_list; } ;
struct grep_expr {int dummy; } ;
typedef enum grep_header_field { ____Placeholder_grep_header_field } grep_header_field ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct grep_expr* FUNC_1 (struct grep_pat**) ;
 int FUNC_2 (struct grep_pat*,struct grep_opt*) ;
 struct grep_expr* FUNC_3 (struct grep_expr*,struct grep_expr*) ;
 struct grep_expr* FUNC_4 () ;

__attribute__((used)) static struct grep_expr *FUNC_5(struct grep_opt *VAR_3)
{
 struct grep_pat *VAR_4;
 struct grep_expr *VAR_5;
 struct grep_expr *(VAR_6[VAR_0]);
 enum grep_header_field VAR_7;

 if (!VAR_3->header_list)
  return ((void*)0);

 for (VAR_4 = VAR_3->header_list; VAR_4; VAR_4 = VAR_4->next) {
  if (VAR_4->token != VAR_2)
   FUNC_0("a non-header pattern in grep header list.");
  if (VAR_4->field < VAR_1 ||
      VAR_0 <= VAR_4->field)
   FUNC_0("unknown header field %d", VAR_4->field);
  FUNC_2(VAR_4, VAR_3);
 }

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_6[VAR_7] = ((void*)0);

 for (VAR_4 = VAR_3->header_list; VAR_4; VAR_4 = VAR_4->next) {
  struct grep_expr *VAR_8;
  struct grep_pat *VAR_9 = VAR_4;

  VAR_8 = FUNC_1(&VAR_9);
  if (!VAR_8 || VAR_9 != VAR_4->next)
   FUNC_0("malformed header expr");
  if (!VAR_6[VAR_4->field]) {
   VAR_6[VAR_4->field] = VAR_8;
   continue;
  }
  VAR_6[VAR_4->field] = FUNC_3(VAR_8, VAR_6[VAR_4->field]);
 }

 VAR_5 = ((void*)0);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (!VAR_6[VAR_7])
   continue;
  if (!VAR_5)
   VAR_5 = FUNC_4();
  VAR_5 = FUNC_3(VAR_6[VAR_7], VAR_5);
 }
 return VAR_5;
}
