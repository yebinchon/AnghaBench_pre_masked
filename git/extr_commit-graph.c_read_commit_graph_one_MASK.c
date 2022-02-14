
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct commit_graph {int dummy; } ;


 struct commit_graph* FUNC_0 (struct repository*,char const*) ;
 struct commit_graph* FUNC_1 (struct repository*,char const*) ;

struct commit_graph *FUNC_2(struct repository *VAR_0, const char *VAR_1)
{
 struct commit_graph *VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (!VAR_2)
  VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_2;
}
