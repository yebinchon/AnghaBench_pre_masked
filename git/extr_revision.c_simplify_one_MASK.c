
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rev_info {scalar_t__ first_parent_only; } ;
struct merge_simplify_state {struct commit* simplified; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_3__ {int flags; } ;
struct commit {struct commit_list* parents; TYPE_1__ object; } ;
struct TYPE_4__ {struct commit_list* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct commit*,struct commit_list**) ;
 scalar_t__ FUNC_1 (struct rev_info*,struct commit*) ;
 struct merge_simplify_state* FUNC_2 (struct rev_info*,struct commit*) ;
 int FUNC_3 (struct commit*) ;
 scalar_t__ FUNC_4 (struct commit*) ;
 struct commit* FUNC_5 (struct rev_info*,struct commit_list*) ;
 int FUNC_6 (struct rev_info*,struct commit*) ;
 int FUNC_7 (struct rev_info*,struct commit*) ;

__attribute__((used)) static struct commit_list **FUNC_8(struct rev_info *VAR_2, struct commit *VAR_3, struct commit_list **VAR_4)
{
 struct commit_list *VAR_5;
 struct commit *VAR_6;
 struct merge_simplify_state *VAR_7, *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(VAR_2, VAR_3);




 if (VAR_7->simplified)
  return VAR_4;






 if ((VAR_3->object.flags & VAR_1) || !VAR_3->parents) {
  VAR_7->simplified = VAR_3;
  return VAR_4;
 }






 for (VAR_9 = 0, VAR_5 = VAR_3->parents; VAR_5; VAR_5 = VAR_5->next) {
  VAR_8 = FUNC_2(VAR_2, VAR_5->item);
  if (!VAR_8->simplified) {
   VAR_4 = &FUNC_0(VAR_5->item, VAR_4)->next;
   VAR_9++;
  }
  if (VAR_2->first_parent_only)
   break;
 }
 if (VAR_9) {
  VAR_4 = &FUNC_0(VAR_3, VAR_4)->next;
  return VAR_4;
 }






 for (VAR_5 = VAR_3->parents; VAR_5; VAR_5 = VAR_5->next) {
  VAR_8 = FUNC_2(VAR_2, VAR_5->item);
  VAR_5->item = VAR_8->simplified;
  if (VAR_2->first_parent_only)
   break;
 }

 if (VAR_2->first_parent_only)
  VAR_9 = 1;
 else
  VAR_9 = FUNC_6(VAR_2, VAR_3);
 if (1 < VAR_9) {
  int VAR_10 = FUNC_3(VAR_3);
  VAR_10 += FUNC_4(VAR_3);
  if (VAR_10)
   VAR_10 -= FUNC_1(VAR_2, VAR_3);
  if (VAR_10)
   VAR_9 = FUNC_7(VAR_2, VAR_3);
 }
 if (!VAR_9 ||
     (VAR_3->object.flags & VAR_1) ||
     !(VAR_3->object.flags & VAR_0) ||
     (VAR_6 = FUNC_5(VAR_2, VAR_3->parents)) == ((void*)0))
  VAR_7->simplified = VAR_3;
 else {
  VAR_8 = FUNC_2(VAR_2, VAR_6);
  VAR_7->simplified = VAR_8->simplified;
 }
 return VAR_4;
}
