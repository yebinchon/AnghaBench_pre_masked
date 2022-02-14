
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unpack_trees_options {int cache_bottom; TYPE_1__* src_index; scalar_t__ diff_index_cached; } ;
struct traverse_info {int namelen; int name; int prev; struct unpack_trees_options* data; } ;
struct TYPE_2__ {int cache_nr; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct traverse_info *VAR_0)
{
 struct unpack_trees_options *VAR_1 = VAR_0->data;
 int VAR_2, VAR_3;

 if (VAR_1->diff_index_cached)
  return 0;
 VAR_2 = VAR_1->cache_bottom;
 VAR_3 = FUNC_0(VAR_0->prev, VAR_0->name, VAR_0->namelen);

 if (VAR_3 < -1)
  VAR_1->cache_bottom = -2 - VAR_3;
 else if (VAR_3 < 0)
  VAR_1->cache_bottom = VAR_1->src_index->cache_nr;
 return VAR_2;
}
