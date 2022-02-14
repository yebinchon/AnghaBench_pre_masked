
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_pat {scalar_t__ token; int no; int origin; int patternlen; int pattern; int field; struct grep_pat* next; } ;
struct grep_opt {struct grep_pat* pattern_list; struct grep_pat** pattern_tail; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct grep_opt*,int ,int ,int ,int ,scalar_t__) ;
 int FUNC_1 (struct grep_opt*,int ,int ) ;
 struct grep_opt* FUNC_2 (int) ;

struct grep_opt *FUNC_3(const struct grep_opt *VAR_1)
{
 struct grep_pat *VAR_2;
 struct grep_opt *VAR_3 = FUNC_2(sizeof(struct grep_opt));
 *VAR_3 = *VAR_1;

 VAR_3->pattern_list = ((void*)0);
 VAR_3->pattern_tail = &VAR_3->pattern_list;

 for(VAR_2 = VAR_1->pattern_list; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
 {
  if(VAR_2->token == VAR_0)
   FUNC_1(VAR_3, VAR_2->field,
         VAR_2->pattern);
  else
   FUNC_0(VAR_3, VAR_2->pattern, VAR_2->patternlen,
     VAR_2->origin, VAR_2->no, VAR_2->token);
 }

 return VAR_3;
}
