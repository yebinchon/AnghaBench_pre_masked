
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct moved_entry {int ent; struct moved_entry* next_line; } ;
struct moved_block {struct moved_entry* match; } ;
struct hashmap {int (* cmpfn ) (struct diff_options*,int *,int *,int *) ;} ;
struct diff_options {int dummy; } ;


 int FUNC_0 (struct diff_options*,int *,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct diff_options *VAR_0,
    struct moved_entry *VAR_1,
    struct hashmap *VAR_2,
    struct moved_block *VAR_3,
    int VAR_4)
{
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  struct moved_entry *VAR_6 = VAR_3[VAR_5].match;
  struct moved_entry *VAR_7 = (VAR_6 && VAR_6->next_line) ?
    VAR_6->next_line : ((void*)0);
  if (VAR_7 && !VAR_2->cmpfn(VAR_0, &VAR_7->ent, &VAR_1->ent, ((void*)0))) {
   VAR_3[VAR_5].match = VAR_7;
  } else {
   VAR_3[VAR_5].match = ((void*)0);
  }
 }
}
