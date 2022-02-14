
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {scalar_t__ is_detached; scalar_t__ is_bare; } ;
struct ref_store {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct worktree**) ;
 struct ref_store* FUNC_1 (struct worktree*) ;
 struct worktree** FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct worktree*,char const*) ;
 scalar_t__ FUNC_4 (struct worktree*,char const*) ;
 char* FUNC_5 (struct ref_store*,char const*,int ,int *,int*) ;
 int FUNC_6 (char const*,char const*) ;

const struct worktree *FUNC_7(const char *VAR_1,
       const char *VAR_2)
{
 const struct worktree *VAR_3 = ((void*)0);
 static struct worktree **VAR_4;
 int VAR_5 = 0;

 if (VAR_4)
  FUNC_0(VAR_4);
 VAR_4 = FUNC_2(0);

 for (VAR_5 = 0; VAR_4[VAR_5]; VAR_5++) {
  struct worktree *VAR_6 = VAR_4[VAR_5];
  const char *VAR_7;
  struct ref_store *VAR_8;
  int VAR_9;

  if (VAR_6->is_bare)
   continue;

  if (VAR_6->is_detached && !FUNC_6(VAR_1, "HEAD")) {
   if (FUNC_4(VAR_6, VAR_2)) {
    VAR_3 = VAR_6;
    break;
   }
   if (FUNC_3(VAR_6, VAR_2)) {
    VAR_3 = VAR_6;
    break;
   }
  }

  VAR_8 = FUNC_1(VAR_6);
  VAR_7 = FUNC_5(VAR_8, VAR_1, 0,
       ((void*)0), &VAR_9);
  if ((VAR_9 & VAR_0) &&
      VAR_7 && !FUNC_6(VAR_7, VAR_2)) {
   VAR_3 = VAR_6;
   break;
  }
 }

 return VAR_3;
}
