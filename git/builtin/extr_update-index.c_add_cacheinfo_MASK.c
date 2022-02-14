
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct cache_entry {int ce_namelen; int ce_flags; int ce_mode; int name; int oid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct cache_entry*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (char*,char const*) ;
 struct cache_entry* FUNC_4 (int *,int) ;
 int FUNC_5 (int ,char const*,int) ;
 int FUNC_6 (int *,struct object_id const*) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char const*) ;
 int VAR_6 ;
 int FUNC_9 (char const*,unsigned int) ;

__attribute__((used)) static int FUNC_10(unsigned int VAR_7, const struct object_id *VAR_8,
    const char *VAR_9, int VAR_10)
{
 int VAR_11, VAR_12;
 struct cache_entry *VAR_13;

 if (!FUNC_9(VAR_9, VAR_7))
  return FUNC_3("Invalid path '%s'", VAR_9);

 VAR_11 = FUNC_8(VAR_9);
 VAR_13 = FUNC_4(&VAR_6, VAR_11);

 FUNC_6(&VAR_13->oid, VAR_8);
 FUNC_5(VAR_13->name, VAR_9, VAR_11);
 VAR_13->ce_flags = FUNC_1(VAR_10);
 VAR_13->ce_namelen = VAR_11;
 VAR_13->ce_mode = FUNC_2(VAR_7);
 if (VAR_5)
  VAR_13->ce_flags |= VAR_2;
 VAR_12 = VAR_3 ? VAR_0 : 0;
 VAR_12 |= VAR_4 ? VAR_1 : 0;
 if (FUNC_0(VAR_13, VAR_12))
  return FUNC_3("%s: cannot add to the index - missing --add option?",
        VAR_9);
 FUNC_7("add '%s'", VAR_9);
 return 0;
}
