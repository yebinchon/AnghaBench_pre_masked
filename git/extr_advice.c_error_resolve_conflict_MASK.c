
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,...) ;
 int FUNC_3 (char const*,char*) ;

int FUNC_4(const char *VAR_1)
{
 if (!FUNC_3(VAR_1, "cherry-pick"))
  FUNC_2(FUNC_0("Cherry-picking is not possible because you have unmerged files."));
 else if (!FUNC_3(VAR_1, "commit"))
  FUNC_2(FUNC_0("Committing is not possible because you have unmerged files."));
 else if (!FUNC_3(VAR_1, "merge"))
  FUNC_2(FUNC_0("Merging is not possible because you have unmerged files."));
 else if (!FUNC_3(VAR_1, "pull"))
  FUNC_2(FUNC_0("Pulling is not possible because you have unmerged files."));
 else if (!FUNC_3(VAR_1, "revert"))
  FUNC_2(FUNC_0("Reverting is not possible because you have unmerged files."));
 else
  FUNC_2(FUNC_0("It is not possible to %s because you have unmerged files."),
   VAR_1);

 if (VAR_0)




  FUNC_1(FUNC_0("Fix them up in the work tree, and then use 'git add/rm <file>'\n"
    "as appropriate to mark resolution and make a commit."));
 return -1;
}
