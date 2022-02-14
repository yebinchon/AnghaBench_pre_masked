
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct submodule {int dummy; } ;
struct stream_filter {int dummy; } ;
struct strbuf {int dummy; } ;
struct stat {int dummy; } ;
struct delayed_checkout {int paths; int state; } ;
struct checkout {TYPE_1__* istate; scalar_t__ refresh_cache; int force; struct delayed_checkout* delayed_checkout; } ;
struct cache_entry {unsigned int ce_mode; char* name; int ce_flags; int oid; } ;
typedef int ssize_t ;
struct TYPE_7__ {int cache_changed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct strbuf VAR_4 ;
 int VAR_5 ;


 unsigned int VAR_6 ;

 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,char*,unsigned long,struct strbuf*,struct delayed_checkout*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,char*,char*,unsigned long,struct strbuf*) ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (TYPE_1__*,struct cache_entry*,struct stat*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,struct checkout const*,struct stat*) ;
 struct stream_filter* FUNC_9 (TYPE_1__*,char*,int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (char*,struct stat*) ;
 int FUNC_11 (TYPE_1__*,struct cache_entry*) ;
 int FUNC_12 (char*,int) ;
 char* FUNC_13 (int *) ;
 int FUNC_14 (char*,struct cache_entry*,int) ;
 char* FUNC_15 (struct cache_entry*,unsigned long*) ;
 char* FUNC_16 (struct strbuf*,size_t*) ;
 int FUNC_17 (struct cache_entry*,char*,struct stream_filter*,struct checkout const*,int,int*,struct stat*) ;
 int FUNC_18 (int *,char*) ;
 struct submodule* FUNC_19 (struct cache_entry*) ;
 int FUNC_20 (char*,int *,char*,int ) ;
 int FUNC_21 (char*,char*) ;
 int FUNC_22 (int,char*,unsigned long) ;

__attribute__((used)) static int FUNC_23(struct cache_entry *VAR_8,
         char *VAR_9, const struct checkout *VAR_10, int VAR_11)
{
 unsigned int VAR_12 = VAR_8->ce_mode & VAR_6;
 struct delayed_checkout *VAR_13 = VAR_10->delayed_checkout;
 int VAR_14, VAR_15, VAR_16 = 0;
 char *VAR_17;
 struct strbuf VAR_18 = VAR_4;
 unsigned long VAR_19;
 ssize_t VAR_20;
 size_t VAR_21 = 0;
 struct stat VAR_22;
 const struct submodule *VAR_23;

 if (VAR_12 == 128) {
  struct stream_filter *VAR_24 = FUNC_9(VAR_10->istate, VAR_8->name,
         &VAR_8->oid);
  if (VAR_24 &&
      !FUNC_17(VAR_8, VAR_9, VAR_24,
        VAR_10, VAR_11,
        &VAR_16, &VAR_22))
   goto finish;
 }

 switch (VAR_12) {
 case 129:
  VAR_17 = FUNC_15(VAR_8, &VAR_19);
  if (!VAR_17)
   return FUNC_4("unable to read sha1 file of %s (%s)",
         VAR_9, FUNC_13(&VAR_8->oid));





  if (!VAR_7 || VAR_11)
   goto write_file_entry;

  VAR_15 = FUNC_21(VAR_17, VAR_9);
  FUNC_7(VAR_17);
  if (VAR_15)
   return FUNC_5("unable to create symlink %s", VAR_9);
  break;

 case 128:




  if (VAR_13 && VAR_13->state == VAR_2) {
   VAR_17 = ((void*)0);
   VAR_19 = 0;
  } else {
   VAR_17 = FUNC_15(VAR_8, &VAR_19);
   if (!VAR_17)
    return FUNC_4("unable to read sha1 file of %s (%s)",
          VAR_9, FUNC_13(&VAR_8->oid));
  }




  if (VAR_13 && VAR_13->state != VAR_1) {
   VAR_15 = FUNC_1(VAR_10->istate, VAR_8->name, VAR_17,
           VAR_19, &VAR_18, VAR_13);
   if (VAR_15 && FUNC_18(&VAR_13->paths, VAR_8->name)) {
    FUNC_7(VAR_17);
    goto delayed;
   }
  } else
   VAR_15 = FUNC_3(VAR_10->istate, VAR_8->name, VAR_17, VAR_19, &VAR_18);

  if (VAR_15) {
   FUNC_7(VAR_17);
   VAR_17 = FUNC_16(&VAR_18, &VAR_21);
   VAR_19 = VAR_21;
  }






 write_file_entry:
  VAR_14 = FUNC_14(VAR_9, VAR_8, VAR_11);
  if (VAR_14 < 0) {
   FUNC_7(VAR_17);
   return FUNC_5("unable to create file %s", VAR_9);
  }

  VAR_20 = FUNC_22(VAR_14, VAR_17, VAR_19);
  if (!VAR_11)
   VAR_16 = FUNC_8(VAR_14, VAR_10, &VAR_22);
  FUNC_2(VAR_14);
  FUNC_7(VAR_17);
  if (VAR_20 < 0)
   return FUNC_4("unable to write file %s", VAR_9);
  break;

 case 130:
  if (VAR_11)
   return FUNC_4("cannot create temporary submodule %s", VAR_9);
  if (FUNC_12(VAR_9, 0777) < 0)
   return FUNC_4("cannot create submodule directory %s", VAR_9);
  VAR_23 = FUNC_19(VAR_8);
  if (VAR_23)
   return FUNC_20(VAR_8->name,
    ((void*)0), FUNC_13(&VAR_8->oid),
    VAR_10->force ? VAR_5 : 0);
  break;

 default:
  return FUNC_4("unknown file mode for %s in index", VAR_9);
 }

finish:
 if (VAR_10->refresh_cache) {
  FUNC_0(VAR_10->istate);
  if (!VAR_16)
   if (FUNC_10(VAR_8->name, &VAR_22) < 0)
    return FUNC_5("unable to stat just-written file %s",
         VAR_8->name);
  FUNC_6(VAR_10->istate, VAR_8, &VAR_22);
  VAR_8->ce_flags |= VAR_3;
  FUNC_11(VAR_10->istate, VAR_8);
  VAR_10->istate->cache_changed |= VAR_0;
 }
delayed:
 return 0;
}
