
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {TYPE_1__* objects; } ;
struct commit {int dummy; } ;
struct TYPE_2__ {int commit_graph; } ;


 int FUNC_0 (struct repository*,int ,struct commit*) ;
 int FUNC_1 (struct repository*) ;

int FUNC_2(struct repository *VAR_0, struct commit *VAR_1)
{
 if (!FUNC_1(VAR_0))
  return 0;
 return FUNC_0(VAR_0, VAR_0->objects->commit_graph, VAR_1);
}
