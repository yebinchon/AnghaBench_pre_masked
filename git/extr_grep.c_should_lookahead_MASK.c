
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_pat {scalar_t__ token; struct grep_pat* next; } ;
struct grep_opt {struct grep_pat* pattern_list; scalar_t__ invert; scalar_t__ extended; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct grep_opt *VAR_1)
{
 struct grep_pat *VAR_2;

 if (VAR_1->extended)
  return 0;
 if (VAR_1->invert)
  return 0;
 for (VAR_2 = VAR_1->pattern_list; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2->token != VAR_0)
   return 0;
 }
 return 1;
}
