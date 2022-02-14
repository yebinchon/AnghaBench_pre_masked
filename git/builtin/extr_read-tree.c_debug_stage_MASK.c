
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {struct cache_entry const* df_conflict_entry; } ;
struct cache_entry {int ce_mode; char* name; int oid; } ;


 int FUNC_0 (struct cache_entry const*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(const char *VAR_0, const struct cache_entry *VAR_1,
   struct unpack_trees_options *VAR_2)
{
 FUNC_2("%s ", VAR_0);
 if (!VAR_1)
  FUNC_2("(missing)\n");
 else if (VAR_1 == VAR_2->df_conflict_entry)
  FUNC_2("(conflict)\n");
 else
  FUNC_2("%06o #%d %s %.8s\n",
         VAR_1->ce_mode, FUNC_0(VAR_1), VAR_1->name,
         FUNC_1(&VAR_1->oid));
}
