
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree {int dummy; } ;
struct repository {int dummy; } ;
struct TYPE_2__ {int parsed; } ;
struct commit {scalar_t__ graph_pos; struct tree* maybe_tree; TYPE_1__ object; } ;


 scalar_t__ VAR_0 ;
 struct tree* FUNC_0 (struct repository*,struct commit const*) ;

struct tree *FUNC_1(struct repository *VAR_1,
      const struct commit *VAR_2)
{
 if (VAR_2->maybe_tree || !VAR_2->object.parsed)
  return VAR_2->maybe_tree;

 if (VAR_2->graph_pos != VAR_0)
  return FUNC_0(VAR_1, VAR_2);

 return ((void*)0);
}
