
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int dummy; } ;
struct cache_entry {int ce_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct unpack_trees_options*,struct cache_entry const*,int ,int ) ;
 int FUNC_1 (struct cache_entry const*,struct unpack_trees_options*) ;
 scalar_t__ FUNC_2 (struct cache_entry const*,int ,struct unpack_trees_options*) ;
 scalar_t__ FUNC_3 (struct cache_entry const*,struct unpack_trees_options*) ;

__attribute__((used)) static int FUNC_4(const struct cache_entry *VAR_3,
    const struct cache_entry *VAR_4,
    struct unpack_trees_options *VAR_5)
{

 if (!VAR_4) {
  if (FUNC_2(VAR_3, VAR_2, VAR_5))
   return -1;
  return 0;
 }
 if (!(VAR_4->ce_flags & VAR_0) && FUNC_3(VAR_4, VAR_5))
  return -1;
 FUNC_0(VAR_5, VAR_3, VAR_1, 0);
 FUNC_1(VAR_3, VAR_5);
 return 1;
}
