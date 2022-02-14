
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct traverse_info {int name; struct traverse_info* prev; } ;
struct cache_tree {int dummy; } ;


 struct cache_tree* FUNC_0 (struct cache_tree*,int ) ;

__attribute__((used)) static struct cache_tree *FUNC_1(struct cache_tree *VAR_0,
        struct traverse_info *VAR_1)
{
 struct cache_tree *VAR_2;

 if (!VAR_1->prev)
  return VAR_0;
 VAR_2 = FUNC_1(VAR_0, VAR_1->prev);
 return FUNC_0(VAR_2, VAR_1->name);
}
