
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; char const* buf; } ;
struct object_id {int dummy; } ;
struct cache_entry {int ce_flags; int ce_namelen; scalar_t__ ce_mode; int oid; scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 struct cache_entry** VAR_4 ;
 int FUNC_1 (struct cache_entry*,int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct cache_entry*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 int FUNC_6 (struct cache_entry*) ;
 struct cache_entry* FUNC_7 (int *,int) ;
 int FUNC_8 (scalar_t__,char const*,int) ;
 int FUNC_9 (int *,struct object_id const*) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 int FUNC_11 (char const*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_12(const struct object_id *VAR_6, struct strbuf *VAR_7,
  const char *VAR_8, unsigned VAR_9, int VAR_10, void *VAR_11)
{
 int VAR_12;
 struct cache_entry *VAR_13;
 int VAR_14;

 if (FUNC_0(VAR_9))
  return VAR_3;

 VAR_12 = VAR_7->len + FUNC_11(VAR_8);
 VAR_13 = FUNC_7(&VAR_5, VAR_12);
 FUNC_9(&VAR_13->oid, VAR_6);
 FUNC_8(VAR_13->name, VAR_7->buf, VAR_7->len);
 FUNC_8(VAR_13->name + VAR_7->len, VAR_8, VAR_12 - VAR_7->len);
 VAR_13->ce_flags = FUNC_4(0) | VAR_2;
 VAR_13->ce_namelen = VAR_12;
 VAR_13->ce_mode = FUNC_5(VAR_9);






 VAR_14 = FUNC_2(VAR_13->name, VAR_13->ce_namelen);
 if (VAR_14 >= 0) {
  struct cache_entry *VAR_15 = VAR_4[VAR_14];
  if (VAR_13->ce_mode == VAR_15->ce_mode &&
      !FUNC_3(VAR_15) &&
      FUNC_10(&VAR_13->oid, &VAR_15->oid)) {
   VAR_15->ce_flags |= VAR_2;
   FUNC_6(VAR_13);
   return 0;
  }
 }

 FUNC_1(VAR_13, VAR_0 | VAR_1);
 return 0;
}
