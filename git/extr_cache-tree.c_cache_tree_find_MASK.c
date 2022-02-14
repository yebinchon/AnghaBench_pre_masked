
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_tree_sub {struct cache_tree* cache_tree; } ;
struct cache_tree {int dummy; } ;


 struct cache_tree_sub* FUNC_0 (struct cache_tree*,char const*,int,int ) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static struct cache_tree *FUNC_2(struct cache_tree *VAR_0, const char *VAR_1)
{
 if (!VAR_0)
  return ((void*)0);
 while (*VAR_1) {
  const char *VAR_2;
  struct cache_tree_sub *VAR_3;

  VAR_2 = FUNC_1(VAR_1, '/');




  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2 - VAR_1, 0);
  if (!VAR_3)
   return ((void*)0);
  VAR_0 = VAR_3->cache_tree;

  VAR_1 = VAR_2;
  while (*VAR_1 == '/')
   VAR_1++;
 }
 return VAR_0;
}
