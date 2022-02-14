
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* opts; int * repo; } ;
typedef TYPE_1__ tag_state ;
struct TYPE_5__ {char* target; int force; int tag_name; } ;
typedef TYPE_2__ tag_options ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_object ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,char*) ;
 int FUNC_4 (int *,int *,int ,int *,int ) ;

__attribute__((used)) static void FUNC_5(tag_state *VAR_0)
{
 git_repository *VAR_1 = VAR_0->repo;
 tag_options *VAR_2 = VAR_0->opts;
 git_oid VAR_3;
 git_object *VAR_4;

 FUNC_0(!VAR_2->tag_name, "Name required");

 if (!VAR_2->target) VAR_2->target = "HEAD";

 FUNC_0(!VAR_2->target, "Target required");

 FUNC_1(FUNC_3(&VAR_4, VAR_1, VAR_2->target),
   "Unable to resolve spec", VAR_2->target);

 FUNC_1(FUNC_4(&VAR_3, VAR_1, VAR_2->tag_name,
    VAR_4, VAR_2->force), "Unable to create tag", ((void*)0));

 FUNC_2(VAR_4);
}
