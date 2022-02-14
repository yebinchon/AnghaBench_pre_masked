
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pattern_list {int dummy; } ;
struct oid_stat {int dummy; } ;
struct dir_struct {int unmanaged_exclude_files; int untracked; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct pattern_list* FUNC_1 (struct dir_struct*,int ,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,int ,struct pattern_list*,int *,struct oid_stat*) ;
 int FUNC_3 (int ,char const*) ;

__attribute__((used)) static void FUNC_4(struct dir_struct *VAR_1, const char *VAR_2,
         struct oid_stat *VAR_3)
{
 struct pattern_list *VAR_4;





 if (!VAR_1->untracked)
  VAR_1->unmanaged_exclude_files++;
 VAR_4 = FUNC_1(VAR_1, VAR_0, VAR_2);
 if (FUNC_2(VAR_2, "", 0, VAR_4, ((void*)0), VAR_3) < 0)
  FUNC_3(FUNC_0("cannot use %s as an exclude file"), VAR_2);
}
