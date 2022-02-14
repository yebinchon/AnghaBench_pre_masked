
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct repository {int dummy; } ;
struct index_state {int cache_tree; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*) ;
 int FUNC_1 (struct repository*,struct index_state*,int ,struct strbuf*) ;

void FUNC_2(struct repository *VAR_1, struct index_state *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;

 if (!VAR_2->cache_tree)
  return;
 FUNC_1(VAR_1, VAR_2, VAR_2->cache_tree, &VAR_3);
 FUNC_0(&VAR_3);
}
