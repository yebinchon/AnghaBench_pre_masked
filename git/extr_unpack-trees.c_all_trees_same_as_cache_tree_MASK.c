
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unpack_trees_options {TYPE_1__* src_index; int merge; } ;
struct traverse_info {struct unpack_trees_options* data; } ;
struct name_entry {int dummy; } ;
struct TYPE_2__ {int cache_tree; } ;


 int FUNC_0 (struct name_entry*,struct name_entry*) ;
 int FUNC_1 (int ,struct name_entry*,struct traverse_info*) ;

__attribute__((used)) static int FUNC_2(int VAR_0, unsigned long VAR_1,
     struct name_entry *VAR_2,
     struct traverse_info *VAR_3)
{
 struct unpack_trees_options *VAR_4 = VAR_3->data;
 int VAR_5;

 if (!VAR_4->merge || VAR_1 != ((1 << VAR_0) - 1))
  return 0;

 for (VAR_5 = 1; VAR_5 < VAR_0; VAR_5++)
  if (!FUNC_0(VAR_2, VAR_2 + VAR_5))
   return 0;

 return FUNC_1(VAR_4->src_index->cache_tree, VAR_2, VAR_3);
}
