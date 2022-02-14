
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct grep_pat {int token; struct grep_pat* next; } ;
struct grep_opt {struct grep_pat* pattern_list; } ;
struct TYPE_4__ {int rm_so; int rm_eo; } ;
typedef TYPE_1__ regmatch_t ;
typedef enum grep_context { ____Placeholder_grep_context } grep_context ;





 int FUNC_0 (struct grep_pat*,char*,char*,int,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(struct grep_opt *VAR_0, char *VAR_1, char *VAR_2,
        enum grep_context VAR_3, regmatch_t *VAR_4, int VAR_5)
{
 struct grep_pat *VAR_6;
 int VAR_7 = 0;

 VAR_4->rm_so = VAR_4->rm_eo = -1;
 if (VAR_1 < VAR_2) {
  for (VAR_6 = VAR_0->pattern_list; VAR_6; VAR_6 = VAR_6->next) {
   switch (VAR_6->token) {
   case 130:
   case 128:
   case 129:
    VAR_7 |= FUNC_0(VAR_6, VAR_1, VAR_2, VAR_3,
         VAR_4, VAR_5);
    break;
   default:
    break;
   }
  }
 }
 return VAR_7;
}
