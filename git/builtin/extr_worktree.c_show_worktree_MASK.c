
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {scalar_t__ head_ref; scalar_t__ is_detached; int head_oid; scalar_t__ is_bare; int path; } ;
struct strbuf {char* buf; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct strbuf*,char*,...) ;
 int FUNC_5 (struct strbuf*,char*) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct worktree *VAR_2, int VAR_3, int VAR_4)
{
 struct strbuf VAR_5 = VAR_1;
 int VAR_6 = FUNC_7(VAR_2->path);
 int VAR_7 = VAR_6 - FUNC_8(VAR_2->path);

 FUNC_4(&VAR_5, "%-*s ", 1 + VAR_3 + VAR_7, VAR_2->path);
 if (VAR_2->is_bare)
  FUNC_5(&VAR_5, "(bare)");
 else {
  FUNC_4(&VAR_5, "%-*s ", VAR_4,
    FUNC_0(&VAR_2->head_oid, VAR_0));
  if (VAR_2->is_detached)
   FUNC_5(&VAR_5, "(detached HEAD)");
  else if (VAR_2->head_ref) {
   char *VAR_8 = FUNC_3(VAR_2->head_ref, 0);
   FUNC_4(&VAR_5, "[%s]", VAR_8);
   FUNC_1(VAR_8);
  } else
   FUNC_5(&VAR_5, "(error)");
 }
 FUNC_2("%s\n", VAR_5.buf);

 FUNC_6(&VAR_5);
}
