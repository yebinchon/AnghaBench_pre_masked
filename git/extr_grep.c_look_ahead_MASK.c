
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct grep_pat {struct grep_pat* next; } ;
struct grep_opt {struct grep_pat* pattern_list; } ;
typedef scalar_t__ regoff_t ;
struct TYPE_3__ {scalar_t__ rm_so; scalar_t__ rm_eo; } ;
typedef TYPE_1__ regmatch_t ;


 int FUNC_0 (struct grep_pat*,char*,char*,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_1(struct grep_opt *VAR_0,
        unsigned long *VAR_1,
        unsigned *VAR_2,
        char **VAR_3)
{
 unsigned VAR_4 = *VAR_2;
 char *VAR_5 = *VAR_3;
 struct grep_pat *VAR_6;
 char *VAR_7, *VAR_8;
 regoff_t VAR_9 = -1;

 for (VAR_6 = VAR_0->pattern_list; VAR_6; VAR_6 = VAR_6->next) {
  int VAR_10;
  regmatch_t VAR_11;

  VAR_10 = FUNC_0(VAR_6, VAR_5, VAR_5 + *VAR_1, &VAR_11, 0);
  if (!VAR_10 || VAR_11.rm_so < 0 || VAR_11.rm_eo < 0)
   continue;
  if (VAR_9 < 0 || VAR_11.rm_so < VAR_9)
   VAR_9 = VAR_11.rm_so;
 }

 if (VAR_9 < 0) {
  *VAR_3 = VAR_5 + *VAR_1;
  *VAR_1 = 0;
  return 1;
 }
 for (VAR_7 = VAR_5 + VAR_9; VAR_5 < VAR_7 && VAR_7[-1] != '\n'; VAR_7--)
  ;
 VAR_8 = VAR_7;

 for (VAR_7 = VAR_5; VAR_7 < VAR_8; VAR_7++) {
  if (*VAR_7 == '\n')
   VAR_4++;
 }
 *VAR_1 -= VAR_8 - VAR_5;
 *VAR_3 = VAR_8;
 *VAR_2 = VAR_4;
 return 0;
}
