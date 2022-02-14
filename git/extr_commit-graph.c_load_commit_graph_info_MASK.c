
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct repository {TYPE_1__* objects; } ;
struct commit {int dummy; } ;
struct TYPE_2__ {int commit_graph; } ;


 int FUNC_0 (struct commit*,int ,int ) ;
 scalar_t__ FUNC_1 (struct commit*,int ,int *) ;
 int FUNC_2 (struct repository*) ;

void FUNC_3(struct repository *VAR_0, struct commit *VAR_1)
{
 uint32_t VAR_2;
 if (!FUNC_2(VAR_0))
  return;
 if (FUNC_1(VAR_1, VAR_0->objects->commit_graph, &VAR_2))
  FUNC_0(VAR_1, VAR_0->objects->commit_graph, VAR_2);
}
