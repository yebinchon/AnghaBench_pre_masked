
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_name {int prio; int name_checked; int path; scalar_t__ tag; int sha1; } ;
typedef int git_repository ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (scalar_t__*,int *,int *) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(git_buf *VAR_1, git_repository *VAR_2, struct commit_name *VAR_3)
{
 if (VAR_3->prio == 2 && !VAR_3->tag) {
  if (FUNC_2(&VAR_3->tag, VAR_2, &VAR_3->sha1) < 0) {
   FUNC_1(VAR_0, "annotated tag '%s' not available", VAR_3->path);
   return -1;
  }
 }

 if (VAR_3->tag && !VAR_3->name_checked) {
  if (!FUNC_3(VAR_3->tag)) {
   FUNC_1(VAR_0, "annotated tag '%s' has no embedded name", VAR_3->path);
   return -1;
  }






  VAR_3->name_checked = 1;
 }

 if (VAR_3->tag)
  FUNC_0(VAR_1, "%s", FUNC_3(VAR_3->tag));
 else
  FUNC_0(VAR_1, "%s", VAR_3->path);

 return 0;
}
