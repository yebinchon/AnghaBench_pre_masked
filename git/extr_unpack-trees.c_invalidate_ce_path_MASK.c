
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int src_index; } ;
struct cache_entry {int name; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(const struct cache_entry *VAR_0,
          struct unpack_trees_options *VAR_1)
{
 if (!VAR_0)
  return;
 FUNC_0(VAR_1->src_index, VAR_0->name);
 FUNC_1(VAR_1->src_index, VAR_0->name, 1);
}
