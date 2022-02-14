
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ path; scalar_t__ name; struct TYPE_5__* branch; struct TYPE_5__* url; int * repo; } ;
typedef TYPE_1__ git_submodule ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(git_submodule *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->repo) {
  VAR_0->repo = ((void*)0);
 }

 if (VAR_0->path != VAR_0->name)
  FUNC_0(VAR_0->path);
 FUNC_0(VAR_0->name);
 FUNC_0(VAR_0->url);
 FUNC_0(VAR_0->branch);
 FUNC_1(VAR_0, sizeof(*VAR_0));
 FUNC_0(VAR_0);
}
