
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct grep_pat {struct grep_pat* next; } ;
struct grep_opt {int columnnum; struct grep_pat* pattern_list; scalar_t__ extended; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_3__ {scalar_t__ rm_so; } ;
typedef TYPE_1__ regmatch_t ;
typedef enum grep_context { ____Placeholder_grep_context } grep_context ;


 int FUNC_0 (struct grep_opt*,char*,char*,int,scalar_t__*,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (struct grep_pat*,char*,char*,int,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_2(struct grep_opt *VAR_0, char *VAR_1, char *VAR_2,
        ssize_t *VAR_3, ssize_t *VAR_4,
        enum grep_context VAR_5, int VAR_6)
{
 struct grep_pat *VAR_7;
 int VAR_8 = 0;

 if (VAR_0->extended)
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5, VAR_3, VAR_4,
      VAR_6);


 for (VAR_7 = VAR_0->pattern_list; VAR_7; VAR_7 = VAR_7->next) {
  regmatch_t VAR_9;
  if (FUNC_1(VAR_7, VAR_1, VAR_2, VAR_5, &VAR_9, 0)) {
   VAR_8 |= 1;
   if (!VAR_0->columnnum) {






    break;
   }
   if (*VAR_3 < 0 || VAR_9.rm_so < *VAR_3)
    *VAR_3 = VAR_9.rm_so;
  }
 }
 return VAR_8;
}
