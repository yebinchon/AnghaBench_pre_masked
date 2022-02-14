
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notes_tree {int initialized; } ;
struct note_delete_list {struct note_delete_list* next; int sha1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct notes_tree VAR_2 ;
 int FUNC_1 (struct notes_tree*,int ,int ,struct note_delete_list**) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int VAR_3 ;
 int FUNC_4 (struct notes_tree*,int ) ;

void FUNC_5(struct notes_tree *VAR_4, int VAR_5)
{
 struct note_delete_list *VAR_6 = ((void*)0);

 if (!VAR_4)
  VAR_4 = &VAR_2;
 FUNC_0(VAR_4->initialized);

 FUNC_1(VAR_4, 0, VAR_3, &VAR_6);

 while (VAR_6) {
  if (VAR_5 & VAR_1)
   FUNC_3("%s\n", FUNC_2(VAR_6->sha1));
  if (!(VAR_5 & VAR_0))
   FUNC_4(VAR_4, VAR_6->sha1);
  VAR_6 = VAR_6->next;
 }
}
