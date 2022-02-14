
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct index_state {int dummy; } ;
struct cache_entry {int ce_namelen; int oid; scalar_t__ name; int ce_flags; int ce_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (struct index_state*,struct cache_entry*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int) ;
 struct cache_entry* FUNC_4 (struct index_state*,int) ;
 int FUNC_5 (scalar_t__,char const*,int) ;
 int FUNC_6 (int *,struct object_id const*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(struct index_state *VAR_1,
         const struct object_id *VAR_2,
         const char *VAR_3, int VAR_4,
         const char *VAR_5,
         unsigned VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9;
 struct cache_entry *VAR_10;

 if (FUNC_0(VAR_6))
  return VAR_0;

 VAR_9 = FUNC_7(VAR_5);
 VAR_10 = FUNC_4(VAR_1, VAR_4 + VAR_9);

 VAR_10->ce_mode = FUNC_3(VAR_6);
 VAR_10->ce_flags = FUNC_2(VAR_7);
 VAR_10->ce_namelen = VAR_4 + VAR_9;
 FUNC_5(VAR_10->name, VAR_3, VAR_4);
 FUNC_5(VAR_10->name + VAR_4, VAR_5, VAR_9+1);
 FUNC_6(&VAR_10->oid, VAR_2);
 return FUNC_1(VAR_1, VAR_10, VAR_8);
}
