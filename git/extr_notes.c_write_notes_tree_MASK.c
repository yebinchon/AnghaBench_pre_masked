
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct write_each_note_data {int next_non_note; struct tree_write_stack* root; } ;
struct TYPE_5__ {int len; int buf; } ;
struct tree_write_stack {char* path; TYPE_2__ buf; int * next; } ;
struct object_id {int dummy; } ;
struct notes_tree {int first_non_note; int initialized; } ;
struct TYPE_4__ {int hexsz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct notes_tree VAR_2 ;
 scalar_t__ FUNC_1 (struct notes_tree*,int,int ,struct write_each_note_data*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct tree_write_stack*) ;
 scalar_t__ FUNC_5 (int *,struct write_each_note_data*) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int ,int ,int ,struct object_id*) ;

int FUNC_7(struct notes_tree *VAR_6, struct object_id *VAR_7)
{
 struct tree_write_stack VAR_8;
 struct write_each_note_data VAR_9;
 int VAR_10;
 int VAR_11;

 if (!VAR_6)
  VAR_6 = &VAR_2;
 FUNC_0(VAR_6->initialized);


 VAR_8.next = ((void*)0);
 FUNC_2(&VAR_8.buf, 256 * (32 + VAR_3->hexsz));
 VAR_8.path[0] = VAR_8.path[1] = '\0';
 VAR_9.root = &VAR_8;
 VAR_9.next_non_note = VAR_6->first_non_note;


 VAR_11 = VAR_0 |
  VAR_1;
 VAR_10 = FUNC_1(VAR_6, VAR_11, VAR_5, &VAR_9) ||
       FUNC_5(((void*)0), &VAR_9) ||
       FUNC_4(&VAR_8) ||
       FUNC_6(VAR_8.buf.buf, VAR_8.buf.len, VAR_4, VAR_7);
 FUNC_3(&VAR_8.buf);
 return VAR_10;
}
