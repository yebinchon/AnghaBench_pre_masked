
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rewrites {int rewrite_nr; TYPE_1__** rewrite; } ;
struct counted_string {scalar_t__ len; int s; } ;
struct TYPE_2__ {int instead_of_nr; int base; struct counted_string* instead_of; } ;


 scalar_t__ FUNC_0 (char const*,int ) ;
 char const* FUNC_1 (char*,int ,char const*) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_0, struct rewrites *VAR_1)
{
 int VAR_2, VAR_3;
 struct counted_string *VAR_4;
 int VAR_5;

 VAR_4 = ((void*)0);
 VAR_5 = -1;
 for (VAR_2 = 0; VAR_2 < VAR_1->rewrite_nr; VAR_2++) {
  if (!VAR_1->rewrite[VAR_2])
   continue;
  for (VAR_3 = 0; VAR_3 < VAR_1->rewrite[VAR_2]->instead_of_nr; VAR_3++) {
   if (FUNC_0(VAR_0, VAR_1->rewrite[VAR_2]->instead_of[VAR_3].s) &&
       (!VAR_4 ||
        VAR_4->len < VAR_1->rewrite[VAR_2]->instead_of[VAR_3].len)) {
    VAR_4 = &(VAR_1->rewrite[VAR_2]->instead_of[VAR_3]);
    VAR_5 = VAR_2;
   }
  }
 }
 if (!VAR_4)
  return VAR_0;

 return FUNC_1("%s%s", VAR_1->rewrite[VAR_5]->base, VAR_0 + VAR_4->len);
}
