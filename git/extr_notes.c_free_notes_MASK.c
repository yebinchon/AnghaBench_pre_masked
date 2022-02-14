
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct notes_tree {TYPE_1__* ref; TYPE_1__* prev_non_note; TYPE_1__* first_non_note; TYPE_1__* root; } ;
struct TYPE_3__ {struct TYPE_3__* path; struct TYPE_3__* next; } ;


 struct notes_tree VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct notes_tree*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(struct notes_tree *VAR_1)
{
 if (!VAR_1)
  VAR_1 = &VAR_0;
 if (VAR_1->root)
  FUNC_2(VAR_1->root);
 FUNC_0(VAR_1->root);
 while (VAR_1->first_non_note) {
  VAR_1->prev_non_note = VAR_1->first_non_note->next;
  FUNC_0(VAR_1->first_non_note->path);
  FUNC_0(VAR_1->first_non_note);
  VAR_1->first_non_note = VAR_1->prev_non_note;
 }
 FUNC_0(VAR_1->ref);
 FUNC_1(VAR_1, 0, sizeof(struct notes_tree));
}
