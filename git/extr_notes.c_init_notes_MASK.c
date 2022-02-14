
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct notes_tree {int initialized; struct int_node* root; scalar_t__ dirty; scalar_t__ combine_notes; int * ref; int * update_ref; int * prev_non_note; int * first_non_note; } ;
struct leaf_node {int val_oid; int key_oid; } ;
struct int_node {int dummy; } ;
typedef scalar_t__ combine_notes_fn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 () ;
 struct notes_tree VAR_3 ;
 int FUNC_2 (char*,char const*,...) ;
 scalar_t__ FUNC_3 (char const*,struct object_id*) ;
 scalar_t__ FUNC_4 (int ,struct object_id*,char*,struct object_id*,unsigned short*) ;
 int FUNC_5 (struct notes_tree*,struct leaf_node*,struct int_node*,int ) ;
 int FUNC_6 (struct object_id*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct object_id*) ;
 scalar_t__ FUNC_9 (char const*,struct object_id*) ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (int,int) ;
 int * FUNC_11 (char const*) ;

void FUNC_12(struct notes_tree *VAR_5, const char *VAR_6,
  combine_notes_fn VAR_7, int VAR_8)
{
 struct object_id VAR_9, VAR_10;
 unsigned short VAR_11;
 struct leaf_node VAR_12;

 if (!VAR_5)
  VAR_5 = &VAR_3;
 FUNC_0(!VAR_5->initialized);

 if (!VAR_6)
  VAR_6 = FUNC_1();

 if (!VAR_7)
  VAR_7 = VAR_2;

 VAR_5->root = (struct int_node *) FUNC_10(1, sizeof(struct int_node));
 VAR_5->first_non_note = ((void*)0);
 VAR_5->prev_non_note = ((void*)0);
 VAR_5->ref = FUNC_11(VAR_6);
 VAR_5->update_ref = (VAR_8 & VAR_1) ? VAR_5->ref : ((void*)0);
 VAR_5->combine_notes = VAR_7;
 VAR_5->initialized = 1;
 VAR_5->dirty = 0;

 if (VAR_8 & VAR_0 || !VAR_6 ||
     FUNC_3(VAR_6, &VAR_10))
  return;
 if (VAR_8 & VAR_1 && FUNC_9(VAR_6, &VAR_10))
  FUNC_2("Cannot use notes ref %s", VAR_6);
 if (FUNC_4(VAR_4, &VAR_10, "", &VAR_9, &VAR_11))
  FUNC_2("Failed to read notes tree referenced by %s (%s)",
      VAR_6, FUNC_6(&VAR_10));

 FUNC_7(&VAR_12.key_oid);
 FUNC_8(&VAR_12.val_oid, &VAR_9);
 FUNC_5(VAR_5, &VAR_12, VAR_5->root, 0);
}
