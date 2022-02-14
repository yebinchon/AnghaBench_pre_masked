
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {struct index_state* src_index; } ;
struct index_state {int dummy; } ;
struct cache_entry {int name; } ;


 int FUNC_0 (struct cache_entry const*) ;
 int FUNC_1 (struct index_state*,int ,int) ;

__attribute__((used)) static int FUNC_2(const struct cache_entry *VAR_0,
          struct unpack_trees_options *VAR_1)
{
 struct index_state *VAR_2 = VAR_1->src_index;
 int VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = FUNC_1(VAR_2, VAR_0->name, VAR_3);
 if (VAR_4 < 0)
  VAR_4 = -1 - VAR_4;
 return VAR_4;
}
