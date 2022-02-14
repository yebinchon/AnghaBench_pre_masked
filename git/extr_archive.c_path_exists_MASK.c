
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int recursive; } ;
struct path_exists_context {TYPE_1__ pathspec; struct archiver_args* args; } ;
struct archiver_args {int tree; int repo; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,char*,char const**) ;
 int FUNC_2 (int ,int ,char*,int ,int ,TYPE_1__*,int ,struct path_exists_context*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct archiver_args *VAR_1, const char *VAR_2)
{
 const char *VAR_3[] = { VAR_2, ((void*)0) };
 struct path_exists_context VAR_4;
 int VAR_5;

 VAR_4.args = VAR_1;
 FUNC_1(&VAR_4.pathspec, 0, 0, "", VAR_3);
 VAR_4.pathspec.recursive = 1;
 VAR_5 = FUNC_2(VAR_1->repo, VAR_1->tree, "",
      0, 0, &VAR_4.pathspec,
      VAR_0, &VAR_4);
 FUNC_0(&VAR_4.pathspec);
 return VAR_5 != 0;
}
