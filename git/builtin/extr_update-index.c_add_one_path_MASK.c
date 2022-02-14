
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct cache_entry {int ce_namelen; int oid; int ce_mode; int ce_flags; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct cache_entry*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct cache_entry const*,struct stat*,int ) ;
 int FUNC_2 (struct cache_entry const*,int ) ;
 int FUNC_3 (struct cache_entry const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct cache_entry*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (int *,struct cache_entry*,struct stat*) ;
 scalar_t__ FUNC_8 (int *,int *,char const*,struct stat*,int ) ;
 scalar_t__ VAR_5 ;
 struct cache_entry* FUNC_9 (int *,int) ;
 int FUNC_10 (int ,char const*,int) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_11(const struct cache_entry *VAR_7, const char *VAR_8, int VAR_9, struct stat *VAR_10)
{
 int VAR_11;
 struct cache_entry *VAR_12;


 if (VAR_7 && !FUNC_3(VAR_7) && !FUNC_1(VAR_7, VAR_10, 0))
  return 0;

 VAR_12 = FUNC_9(&VAR_6, VAR_9);
 FUNC_10(VAR_12->name, VAR_8, VAR_9);
 VAR_12->ce_flags = FUNC_4(0);
 VAR_12->ce_namelen = VAR_9;
 FUNC_7(&VAR_6, VAR_12, VAR_10);
 VAR_12->ce_mode = FUNC_2(VAR_7, VAR_10->st_mode);

 if (FUNC_8(&VAR_6, &VAR_12->oid, VAR_8, VAR_10,
         VAR_5 ? 0 : VAR_2)) {
  FUNC_5(VAR_12);
  return -1;
 }
 VAR_11 = VAR_3 ? VAR_0 : 0;
 VAR_11 |= VAR_4 ? VAR_1 : 0;
 if (FUNC_0(VAR_12, VAR_11)) {
  FUNC_5(VAR_12);
  return FUNC_6("%s: cannot add to the index - missing --add option?", VAR_8);
 }
 return 0;
}
