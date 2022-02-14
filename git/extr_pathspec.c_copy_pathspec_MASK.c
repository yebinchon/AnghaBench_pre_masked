
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec_item {int attr_match_nr; char* value; int attr_check; struct pathspec_item* attr_match; void* original; void* match; } ;
struct pathspec {int nr; struct pathspec_item* items; } ;


 int FUNC_0 (struct pathspec_item*,int) ;
 int FUNC_1 (struct pathspec_item*,struct pathspec_item*,int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (void*) ;
 char* FUNC_4 (char const*) ;

void FUNC_5(struct pathspec *VAR_0, const struct pathspec *VAR_1)
{
 int VAR_2, VAR_3;

 *VAR_0 = *VAR_1;
 FUNC_0(VAR_0->items, VAR_0->nr);
 FUNC_1(VAR_0->items, VAR_1->items, VAR_0->nr);

 for (VAR_2 = 0; VAR_2 < VAR_0->nr; VAR_2++) {
  struct pathspec_item *VAR_4 = &VAR_0->items[VAR_2];
  struct pathspec_item *VAR_5 = &VAR_1->items[VAR_2];

  VAR_4->match = FUNC_3(VAR_5->match);
  VAR_4->original = FUNC_3(VAR_5->original);

  FUNC_0(VAR_4->attr_match, VAR_4->attr_match_nr);
  FUNC_1(VAR_4->attr_match, VAR_5->attr_match, VAR_4->attr_match_nr);
  for (VAR_3 = 0; VAR_3 < VAR_4->attr_match_nr; VAR_3++) {
   const char *VAR_6 = VAR_5->attr_match[VAR_3].value;
   VAR_4->attr_match[VAR_3].value = FUNC_4(VAR_6);
  }

  VAR_4->attr_check = FUNC_2(VAR_5->attr_check);
 }
}
