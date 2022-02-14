
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree {int dummy; } ;
struct repository {TYPE_1__* objects; } ;
struct commit {int dummy; } ;
struct TYPE_2__ {int commit_graph; } ;


 struct tree* FUNC_0 (struct repository*,int ,struct commit const*) ;

struct tree *FUNC_1(struct repository *VAR_0, const struct commit *VAR_1)
{
 return FUNC_0(VAR_0, VAR_0->objects->commit_graph, VAR_1);
}
