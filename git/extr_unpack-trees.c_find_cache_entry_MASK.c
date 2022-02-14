
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unpack_trees_options {TYPE_1__* src_index; } ;
struct traverse_info {struct unpack_trees_options* data; } ;
struct name_entry {int pathlen; int path; } ;
struct cache_entry {int dummy; } ;
struct TYPE_2__ {struct cache_entry** cache; } ;


 int FUNC_0 (struct traverse_info*,int ,int ) ;

__attribute__((used)) static struct cache_entry *FUNC_1(struct traverse_info *VAR_0,
         const struct name_entry *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, VAR_1->path, VAR_1->pathlen);
 struct unpack_trees_options *VAR_3 = VAR_0->data;

 if (0 <= VAR_2)
  return VAR_3->src_index->cache[VAR_2];
 else
  return ((void*)0);
}
