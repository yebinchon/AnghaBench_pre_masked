
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct grep_pat {int dummy; } ;
struct TYPE_4__ {scalar_t__ rm_so; scalar_t__ rm_eo; } ;
typedef TYPE_1__ regmatch_t ;
typedef enum grep_context { ____Placeholder_grep_context } grep_context ;


 int FUNC_0 (struct grep_pat*,char*,char*,int,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(struct grep_pat *VAR_0, char *VAR_1, char *VAR_2,
         enum grep_context VAR_3,
         regmatch_t *VAR_4, int VAR_5)
{
 regmatch_t VAR_6;

 if (!FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_6, VAR_5))
  return 0;
 if (VAR_6.rm_so < 0 || VAR_6.rm_eo < 0)
  return 0;
 if (VAR_4->rm_so >= 0 && VAR_4->rm_eo >= 0) {
  if (VAR_6.rm_so > VAR_4->rm_so)
   return 1;
  if (VAR_6.rm_so == VAR_4->rm_so && VAR_6.rm_eo < VAR_4->rm_eo)
   return 1;
 }
 VAR_4->rm_so = VAR_6.rm_so;
 VAR_4->rm_eo = VAR_6.rm_eo;
 return 1;
}
