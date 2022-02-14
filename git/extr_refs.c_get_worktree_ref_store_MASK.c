
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {char* id; scalar_t__ is_current; } ;
struct ref_store {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct ref_store* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 struct ref_store* FUNC_3 (int *,char const*) ;
 struct ref_store* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,char*,struct ref_store*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;

struct ref_store *FUNC_6(const struct worktree *VAR_3)
{
 struct ref_store *VAR_4;
 const char *VAR_5;

 if (VAR_3->is_current)
  return FUNC_1(VAR_1);

 VAR_5 = VAR_3->id ? VAR_3->id : "/";
 VAR_4 = FUNC_3(&VAR_2, VAR_5);
 if (VAR_4)
  return VAR_4;

 if (VAR_3->id)
  VAR_4 = FUNC_4(FUNC_2("worktrees/%s", VAR_3->id),
          VAR_0);
 else
  VAR_4 = FUNC_4(FUNC_0(),
          VAR_0);

 if (VAR_4)
  FUNC_5(&VAR_2, "worktree",
           VAR_4, VAR_5);
 return VAR_4;
}
