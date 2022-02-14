
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notes_tree {int root; int initialized; } ;
typedef int each_note_fn ;


 int FUNC_0 (int ) ;
 struct notes_tree VAR_0 ;
 int FUNC_1 (struct notes_tree*,int ,int ,int ,int,int ,void*) ;

int FUNC_2(struct notes_tree *VAR_1, int VAR_2, each_note_fn VAR_3,
  void *VAR_4)
{
 if (!VAR_1)
  VAR_1 = &VAR_0;
 FUNC_0(VAR_1->initialized);
 return FUNC_1(VAR_1, VAR_1->root, 0, 0, VAR_2, VAR_3, VAR_4);
}
