
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository_format {int unknown_extensions; void* worktree_config; int partial_clone; void* precious_objects; int version; } ;


 int FUNC_0 (char const*) ;
 void* FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*,char const*,void*) ;
 scalar_t__ FUNC_4 (char const*,char*,char const**) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_0, const char *VAR_1, void *VAR_2)
{
 struct repository_format *VAR_3 = VAR_2;
 const char *VAR_4;

 if (FUNC_5(VAR_0, "core.repositoryformatversion") == 0)
  VAR_3->version = FUNC_2(VAR_0, VAR_1);
 else if (FUNC_4(VAR_0, "extensions.", &VAR_4)) {





  if (!FUNC_5(VAR_4, "noop"))
   ;
  else if (!FUNC_5(VAR_4, "preciousobjects"))
   VAR_3->precious_objects = FUNC_1(VAR_0, VAR_1);
  else if (!FUNC_5(VAR_4, "partialclone")) {
   if (!VAR_1)
    return FUNC_0(VAR_0);
   VAR_3->partial_clone = FUNC_7(VAR_1);
  } else if (!FUNC_5(VAR_4, "worktreeconfig"))
   VAR_3->worktree_config = FUNC_1(VAR_0, VAR_1);
  else
   FUNC_6(&VAR_3->unknown_extensions, VAR_4);
 }

 return FUNC_3(VAR_0, VAR_1, VAR_2);
}
