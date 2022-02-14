
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct cache_entry {int ce_namelen; int ce_mode; int ce_flags; int name; int oid; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,char const*) ;
 struct cache_entry* FUNC_4 (int) ;
 int FUNC_5 (int ,char const*,int) ;
 int FUNC_6 (int *,struct object_id const*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char const*,unsigned int) ;

struct cache_entry *FUNC_9(unsigned int VAR_0, const struct object_id *VAR_1,
            const char *VAR_2, int VAR_3)
{
 struct cache_entry *VAR_4;
 int VAR_5;

 if (!FUNC_8(VAR_2, VAR_0)) {
  FUNC_3(FUNC_0("invalid path '%s'"), VAR_2);
  return ((void*)0);
 }

 VAR_5 = FUNC_7(VAR_2);
 VAR_4 = FUNC_4(VAR_5);

 FUNC_6(&VAR_4->oid, VAR_1);
 FUNC_5(VAR_4->name, VAR_2, VAR_5);
 VAR_4->ce_flags = FUNC_1(VAR_3);
 VAR_4->ce_namelen = VAR_5;
 VAR_4->ce_mode = FUNC_2(VAR_0);

 return VAR_4;
}
