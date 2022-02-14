
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct unpack_trees_options {scalar_t__ clone; scalar_t__ update; int dry_run; struct index_state result; } ;
struct progress {int dummy; } ;
struct oid_array {scalar_t__ nr; int oid; } ;
struct checkout {int force; int quiet; int refresh_cache; struct index_state* istate; } ;
struct cache_entry {int ce_flags; int name; int oid; int ce_mode; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct checkout VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct oid_array VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct cache_entry*,struct checkout*,int *,int *) ;
 int FUNC_3 (struct progress*,unsigned int) ;
 int FUNC_4 (struct checkout*) ;
 int FUNC_5 (struct checkout*,int *) ;
 struct progress* FUNC_6 (struct unpack_trees_options*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (struct index_state*,struct checkout*) ;
 int FUNC_10 (struct oid_array*,int *) ;
 int FUNC_11 (struct oid_array*) ;
 int FUNC_12 (int ,int *,int *,int ) ;
 int FUNC_13 (int ,int ,scalar_t__) ;
 int FUNC_14 (struct index_state*,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (struct index_state*) ;
 int FUNC_17 (struct checkout*,struct index_state*) ;
 scalar_t__ FUNC_18 () ;
 int FUNC_19 (struct progress**) ;
 int VAR_7 ;
 int FUNC_20 () ;
 int FUNC_21 (char*) ;
 int FUNC_22 (struct cache_entry const*) ;

__attribute__((used)) static int FUNC_23(struct unpack_trees_options *VAR_8)
{
 unsigned VAR_9 = 0;
 int VAR_10 = 0;
 struct progress *VAR_11;
 struct index_state *VAR_12 = &VAR_8->result;
 struct checkout VAR_13 = VAR_2;
 int VAR_14;

 FUNC_20();
 VAR_13.force = 1;
 VAR_13.quiet = 1;
 VAR_13.refresh_cache = 1;
 VAR_13.istate = VAR_12;

 if (VAR_8->clone)
  FUNC_17(&VAR_13, VAR_12);

 VAR_11 = FUNC_6(VAR_8);

 if (VAR_8->update)
  FUNC_7(VAR_4);

 if (FUNC_18() && VAR_8->update && !VAR_8->dry_run)
  FUNC_9(VAR_12, ((void*)0));

 for (VAR_14 = 0; VAR_14 < VAR_12->cache_nr; VAR_14++) {
  const struct cache_entry *VAR_15 = VAR_12->cache[VAR_14];

  if (VAR_15->ce_flags & VAR_1) {
   FUNC_3(VAR_11, ++VAR_9);
   if (VAR_8->update && !VAR_8->dry_run)
    FUNC_22(VAR_15);
  }
 }
 FUNC_14(VAR_12, 0);
 FUNC_15();

 if (FUNC_18() && VAR_8->update && !VAR_8->dry_run)
  FUNC_9(VAR_12, &VAR_13);

 FUNC_4(&VAR_13);
 if (FUNC_8() && VAR_8->update && !VAR_8->dry_run) {




  struct oid_array VAR_16 = VAR_6;
  for (VAR_14 = 0; VAR_14 < VAR_12->cache_nr; VAR_14++) {
   struct cache_entry *VAR_17 = VAR_12->cache[VAR_14];

   if (!(VAR_17->ce_flags & VAR_0) ||
       FUNC_1(VAR_17->ce_mode))
    continue;
   if (!FUNC_12(VAR_7, &VAR_17->oid,
            ((void*)0),
            VAR_5))
    continue;
   FUNC_10(&VAR_16, &VAR_17->oid);
  }
  if (VAR_16.nr)
   FUNC_13(VAR_7,
         VAR_16.oid, VAR_16.nr);
  FUNC_11(&VAR_16);
 }
 for (VAR_14 = 0; VAR_14 < VAR_12->cache_nr; VAR_14++) {
  struct cache_entry *VAR_18 = VAR_12->cache[VAR_14];

  if (VAR_18->ce_flags & VAR_0) {
   if (VAR_18->ce_flags & VAR_1)
    FUNC_0("both update and delete flags are set on %s",
        VAR_18->name);
   FUNC_3(VAR_11, ++VAR_9);
   VAR_18->ce_flags &= ~VAR_0;
   if (VAR_8->update && !VAR_8->dry_run) {
    VAR_10 |= FUNC_2(VAR_18, &VAR_13, ((void*)0), ((void*)0));
   }
  }
 }
 FUNC_19(&VAR_11);
 VAR_10 |= FUNC_5(&VAR_13, ((void*)0));
 if (VAR_8->update)
  FUNC_7(VAR_3);

 if (VAR_8->clone)
  FUNC_16(VAR_12);

 FUNC_21("check_updates");
 return VAR_10 != 0;
}
