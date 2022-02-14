
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct index_state {int dummy; } ;
struct cache_entry {int ce_namelen; int ce_mode; int ce_flags; int name; int oid; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct cache_entry*) ;
 int FUNC_4 (int ,char const*) ;
 struct cache_entry* FUNC_5 (struct index_state*,int) ;
 int FUNC_6 (int ,char const*,int) ;
 int FUNC_7 (int *,struct object_id const*) ;
 struct cache_entry* FUNC_8 (struct index_state*,struct cache_entry*,unsigned int) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char const*,unsigned int) ;

struct cache_entry *FUNC_11(struct index_state *VAR_0,
         unsigned int VAR_1,
         const struct object_id *VAR_2,
         const char *VAR_3,
         int VAR_4,
         unsigned int VAR_5)
{
 struct cache_entry *VAR_6, *VAR_7;
 int VAR_8;

 if (!FUNC_10(VAR_3, VAR_1)) {
  FUNC_4(FUNC_0("invalid path '%s'"), VAR_3);
  return ((void*)0);
 }

 VAR_8 = FUNC_9(VAR_3);
 VAR_6 = FUNC_5(VAR_0, VAR_8);

 FUNC_7(&VAR_6->oid, VAR_2);
 FUNC_6(VAR_6->name, VAR_3, VAR_8);
 VAR_6->ce_flags = FUNC_1(VAR_4);
 VAR_6->ce_namelen = VAR_8;
 VAR_6->ce_mode = FUNC_2(VAR_1);

 VAR_7 = FUNC_8(VAR_0, VAR_6, VAR_5);
 if (VAR_7 != VAR_6)
  FUNC_3(VAR_6);
 return VAR_7;
}
