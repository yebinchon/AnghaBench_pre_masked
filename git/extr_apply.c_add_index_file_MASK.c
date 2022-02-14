
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int dummy; } ;
struct cache_entry {int ce_namelen; int oid; int ce_flags; int ce_mode; int name; } ;
struct apply_state {TYPE_1__* repo; int cached; scalar_t__ ita_only; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,struct cache_entry*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct cache_entry*) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (int ,char const*) ;
 int FUNC_8 (int ,struct cache_entry*,struct stat*) ;
 scalar_t__ FUNC_9 (char const*,int *) ;
 scalar_t__ FUNC_10 (char const*,struct stat*) ;
 struct cache_entry* FUNC_11 (int ,int) ;
 int FUNC_12 (int ,char const*,int) ;
 int FUNC_13 (struct cache_entry*) ;
 int FUNC_14 (void*,char*,char const**) ;
 int FUNC_15 (char const*) ;
 scalar_t__ FUNC_16 (void*,unsigned long,int ,int *) ;

__attribute__((used)) static int FUNC_17(struct apply_state *VAR_3,
     const char *VAR_4,
     unsigned VAR_5,
     void *VAR_6,
     unsigned long VAR_7)
{
 struct stat VAR_8;
 struct cache_entry *VAR_9;
 int VAR_10 = FUNC_15(VAR_4);

 VAR_9 = FUNC_11(VAR_3->repo->index, VAR_10);
 FUNC_12(VAR_9->name, VAR_4, VAR_10);
 VAR_9->ce_mode = FUNC_4(VAR_5);
 VAR_9->ce_flags = FUNC_3(0);
 VAR_9->ce_namelen = VAR_10;
 if (VAR_3->ita_only) {
  VAR_9->ce_flags |= VAR_1;
  FUNC_13(VAR_9);
 } else if (FUNC_0(VAR_5)) {
  const char *VAR_11;

  if (!FUNC_14(VAR_6, "Subproject commit ", &VAR_11) ||
      FUNC_9(VAR_11, &VAR_9->oid)) {
   FUNC_5(VAR_9);
   return FUNC_6(FUNC_1("corrupt patch for submodule %s"), VAR_4);
  }
 } else {
  if (!VAR_3->cached) {
   if (FUNC_10(VAR_4, &VAR_8) < 0) {
    FUNC_5(VAR_9);
    return FUNC_7(FUNC_1("unable to stat newly "
           "created file '%s'"),
         VAR_4);
   }
   FUNC_8(VAR_3->repo->index, VAR_9, &VAR_8);
  }
  if (FUNC_16(VAR_6, VAR_7, VAR_2, &VAR_9->oid) < 0) {
   FUNC_5(VAR_9);
   return FUNC_6(FUNC_1("unable to create backing store "
           "for newly created file %s"), VAR_4);
  }
 }
 if (FUNC_2(VAR_3->repo->index, VAR_9, VAR_0) < 0) {
  FUNC_5(VAR_9);
  return FUNC_6(FUNC_1("unable to add cache entry for %s"), VAR_4);
 }

 return 0;
}
