
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct checkout_opts {TYPE_2__* source_tree; scalar_t__ count_checkout_paths; scalar_t__ merge; int overlay_mode; scalar_t__ writeout_stage; } ;
struct checkout {int force; int refresh_cache; int * istate; } ;
struct cache_entry {int ce_flags; } ;
struct TYPE_3__ {int oid; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 int VAR_0 ;
 struct checkout VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int) ;
 struct cache_entry** VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct cache_entry*) ;
 int FUNC_2 (struct cache_entry*,struct checkout*,int *,int*) ;
 int FUNC_3 (int,struct checkout*,int*) ;
 int FUNC_4 (scalar_t__,struct cache_entry*,int,struct checkout*,int*,int ) ;
 int FUNC_5 (struct checkout*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct checkout*,int*) ;
 int FUNC_8 (int ,int ,int,...) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 () ;
 int FUNC_11 (struct cache_entry*,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_12(const struct checkout_opts *VAR_7)
{
 struct checkout VAR_8 = VAR_1;
 int VAR_9 = 0, VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12;

 VAR_8.force = 1;
 VAR_8.refresh_cache = 1;
 VAR_8.istate = &VAR_6;

 FUNC_5(&VAR_8);
 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  struct cache_entry *VAR_13 = VAR_3[VAR_12];
  if (VAR_13->ce_flags & VAR_0) {
   if (!FUNC_1(VAR_13)) {
    VAR_11 |= FUNC_2(VAR_13, &VAR_8,
             ((void*)0), &VAR_9);
    continue;
   }
   if (VAR_7->writeout_stage)
    VAR_11 |= FUNC_4(VAR_7->writeout_stage,
             VAR_13, VAR_12,
             &VAR_8,
             &VAR_9, VAR_7->overlay_mode);
   else if (VAR_7->merge)
    VAR_11 |= FUNC_3(VAR_12, &VAR_8,
       &VAR_10);
   VAR_12 = FUNC_11(VAR_13, VAR_12) - 1;
  }
 }
 FUNC_9(&VAR_6, 1);
 FUNC_10();
 VAR_11 |= FUNC_7(&VAR_8, &VAR_9);

 if (VAR_7->count_checkout_paths) {
  if (VAR_10)
   FUNC_8(VAR_5, FUNC_0("Recreated %d merge conflict",
           "Recreated %d merge conflicts",
           VAR_10),
       VAR_10);
  if (VAR_7->source_tree)
   FUNC_8(VAR_5, FUNC_0("Updated %d path from %s",
           "Updated %d paths from %s",
           VAR_9),
       VAR_9,
       FUNC_6(&VAR_7->source_tree->object.oid,
            VAR_2));
  else if (!VAR_10 || VAR_9)
   FUNC_8(VAR_5, FUNC_0("Updated %d path from the index",
           "Updated %d paths from the index",
           VAR_9),
       VAR_9);
 }

 return VAR_11;
}
