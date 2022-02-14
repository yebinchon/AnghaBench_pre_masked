
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pbase_tree_cache {struct pbase_tree_cache* tree_data; int ref; int temporary; } ;


 int FUNC_0 (struct pbase_tree_cache*) ;

__attribute__((used)) static void FUNC_1(struct pbase_tree_cache *VAR_0)
{
 if (!VAR_0->temporary) {
  VAR_0->ref--;
  return;
 }
 FUNC_0(VAR_0->tree_data);
 FUNC_0(VAR_0);
}
