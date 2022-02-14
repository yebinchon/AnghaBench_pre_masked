
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int dummy; } ;
struct cache_entry {int oid; } ;


 int FUNC_0 (struct cache_entry const*,char const*,int ,struct unpack_trees_options*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cache_entry const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0,
      const struct cache_entry *VAR_1,
      struct unpack_trees_options *VAR_2)
{
 if (!FUNC_2(VAR_1))
  return 0;

 return FUNC_0(VAR_1, VAR_0,
      FUNC_1(&VAR_1->oid), VAR_2);
}
