
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notes_merge_options {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,char*,int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct notes_merge_options*) ;

__attribute__((used)) static int FUNC_4(struct notes_merge_options *VAR_1)
{
 int VAR_2 = 0;






 if (FUNC_1(((void*)0), "NOTES_MERGE_PARTIAL", ((void*)0), 0))
  VAR_2 += FUNC_2(FUNC_0("failed to delete ref NOTES_MERGE_PARTIAL"));
 if (FUNC_1(((void*)0), "NOTES_MERGE_REF", ((void*)0), VAR_0))
  VAR_2 += FUNC_2(FUNC_0("failed to delete ref NOTES_MERGE_REF"));
 if (FUNC_3(VAR_1))
  VAR_2 += FUNC_2(FUNC_0("failed to remove 'git notes merge' worktree"));
 return VAR_2;
}
