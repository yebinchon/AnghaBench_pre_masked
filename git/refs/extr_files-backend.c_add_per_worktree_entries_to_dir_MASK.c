
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_entry {int dummy; } ;
struct ref_dir {int cache; } ;


 int FUNC_0 (char const**) ;
 int FUNC_1 (struct ref_dir*,struct ref_entry*) ;
 struct ref_entry* FUNC_2 (int ,char const*,int,int) ;
 int FUNC_3 (struct ref_dir*,char const*,int) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(struct ref_dir *VAR_0, const char *VAR_1)
{
 const char *VAR_2[] = { "refs/bisect/", "refs/worktree/", "refs/rewritten/" };
 int VAR_3;

 if (FUNC_4(VAR_1, "refs/"))
  return;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++) {
  const char *VAR_4 = VAR_2[VAR_3];
  int VAR_5 = FUNC_5(VAR_4);
  struct ref_entry *VAR_6;
  int VAR_7;

  VAR_7 = FUNC_3(VAR_0, VAR_4, VAR_5);
  if (VAR_7 >= 0)
   continue;
  VAR_6 = FUNC_2(VAR_0->cache, VAR_4, VAR_5, 1);
  FUNC_1(VAR_0, VAR_6);
 }
}
