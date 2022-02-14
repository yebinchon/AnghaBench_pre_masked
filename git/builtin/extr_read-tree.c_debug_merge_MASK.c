
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int merge_size; } ;
struct cache_entry {int dummy; } ;
typedef int buf ;


 int FUNC_0 (char*,struct cache_entry const* const,struct unpack_trees_options*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_3(const struct cache_entry * const *VAR_0,
         struct unpack_trees_options *VAR_1)
{
 int VAR_2;

 FUNC_1("* %d-way merge\n", VAR_1->merge_size);
 FUNC_0("index", VAR_0[0], VAR_1);
 for (VAR_2 = 1; VAR_2 <= VAR_1->merge_size; VAR_2++) {
  char VAR_3[24];
  FUNC_2(VAR_3, sizeof(VAR_3), "ent#%d", VAR_2);
  FUNC_0(VAR_3, VAR_0[VAR_2], VAR_1);
 }
 return 0;
}
