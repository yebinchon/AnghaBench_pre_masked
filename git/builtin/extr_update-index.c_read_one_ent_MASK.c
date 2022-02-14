
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct cache_entry {int ce_namelen; int ce_mode; int ce_flags; int name; int oid; } ;


 unsigned short VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned short) ;
 int FUNC_2 (char*,char const*,char const*) ;
 scalar_t__ FUNC_3 (int ,struct object_id*,char const*,struct object_id*,unsigned short*) ;
 struct cache_entry* FUNC_4 (int *,int) ;
 int FUNC_5 (int ,char const*,int) ;
 int FUNC_6 (int *,struct object_id*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct cache_entry *FUNC_7(const char *VAR_3,
     struct object_id *VAR_4, const char *VAR_5,
     int VAR_6, int VAR_7)
{
 unsigned short VAR_8;
 struct object_id VAR_9;
 struct cache_entry *VAR_10;

 if (FUNC_3(VAR_2, VAR_4, VAR_5, &VAR_9, &VAR_8)) {
  if (VAR_3)
   FUNC_2("%s: not in %s branch.", VAR_5, VAR_3);
  return ((void*)0);
 }
 if (VAR_8 == VAR_0) {
  if (VAR_3)
   FUNC_2("%s: not a blob in %s branch.", VAR_5, VAR_3);
  return ((void*)0);
 }
 VAR_10 = FUNC_4(&VAR_1, VAR_6);

 FUNC_6(&VAR_10->oid, &VAR_9);
 FUNC_5(VAR_10->name, VAR_5, VAR_6);
 VAR_10->ce_flags = FUNC_0(VAR_7);
 VAR_10->ce_namelen = VAR_6;
 VAR_10->ce_mode = FUNC_1(VAR_8);
 return VAR_10;
}
