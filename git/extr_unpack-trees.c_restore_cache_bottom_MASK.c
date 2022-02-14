
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int cache_bottom; scalar_t__ diff_index_cached; } ;
struct traverse_info {struct unpack_trees_options* data; } ;



__attribute__((used)) static void FUNC_0(struct traverse_info *VAR_0, int VAR_1)
{
 struct unpack_trees_options *VAR_2 = VAR_0->data;

 if (VAR_2->diff_index_cached)
  return;
 VAR_2->cache_bottom = VAR_1;
}
