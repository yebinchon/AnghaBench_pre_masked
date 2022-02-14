
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; int len; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct notes_tree {int * update_ref; int dirty; int initialized; } ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct repository*,struct notes_tree*,int *,int ,int ,struct object_id*) ;
 struct notes_tree VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct strbuf*,char const*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*,int ,char*,int) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (int ,int *,struct object_id*,int *,int ,int ) ;

void FUNC_8(struct repository *VAR_3, struct notes_tree *VAR_4, const char *VAR_5)
{
 struct strbuf VAR_6 = VAR_0;
 struct object_id VAR_7;

 if (!VAR_4)
  VAR_4 = &VAR_2;
 if (!VAR_4->initialized || !VAR_4->update_ref || !*VAR_4->update_ref)
  FUNC_2(FUNC_0("Cannot commit uninitialized/unreferenced notes tree"));
 if (!VAR_4->dirty)
  return;


 FUNC_3(&VAR_6, VAR_5);
 FUNC_4(&VAR_6);

 FUNC_1(VAR_3, VAR_4, ((void*)0), VAR_6.buf, VAR_6.len, &VAR_7);
 FUNC_5(&VAR_6, 0, "notes: ", 7);
 FUNC_7(VAR_6.buf, VAR_4->update_ref, &VAR_7, ((void*)0), 0,
     VAR_1);

 FUNC_6(&VAR_6);
}
