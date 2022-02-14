
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_data {int offset; int nr; struct progress_data* progress; int pathspec; struct index_state* index; } ;
struct stat {int dummy; } ;
struct progress_data {int n; int mutex; int progress; } ;
struct index_state {scalar_t__ cache_nr; struct cache_entry** cache; } ;
struct cache_entry {int ce_flags; int name; int ce_mode; } ;
struct cache_def {int dummy; } ;


 struct cache_def VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct cache_def*) ;
 int FUNC_2 (struct cache_entry*) ;
 int FUNC_3 (struct cache_entry*) ;
 int FUNC_4 (struct index_state*,struct cache_entry*,int *,int *) ;
 scalar_t__ FUNC_5 (struct cache_entry*) ;
 scalar_t__ FUNC_6 (struct cache_entry*) ;
 scalar_t__ FUNC_7 (struct cache_entry*) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (struct index_state*,struct cache_entry*,struct stat*,int) ;
 scalar_t__ FUNC_10 (int ,struct stat*) ;
 int FUNC_11 (struct index_state*,struct cache_entry*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct cache_def*,int ,int ) ;

__attribute__((used)) static void *FUNC_15(void *VAR_4)
{
 int VAR_5, VAR_6;
 struct thread_data *VAR_7 = VAR_4;
 struct index_state *VAR_8 = VAR_7->index;
 struct cache_entry **VAR_9 = VAR_8->cache + VAR_7->offset;
 struct cache_def VAR_10 = VAR_0;

 VAR_5 = VAR_7->nr;
 if (VAR_5 + VAR_7->offset > VAR_8->cache_nr)
  VAR_5 = VAR_8->cache_nr - VAR_7->offset;
 VAR_6 = VAR_5;

 do {
  struct cache_entry *VAR_11 = *VAR_9++;
  struct stat VAR_12;

  if (FUNC_6(VAR_11))
   continue;
  if (FUNC_0(VAR_11->ce_mode))
   continue;
  if (FUNC_7(VAR_11))
   continue;
  if (FUNC_5(VAR_11))
   continue;
  if (VAR_11->ce_flags & VAR_1)
   continue;
  if (VAR_7->progress && !(VAR_5 & 31)) {
   struct progress_data *VAR_13 = VAR_7->progress;

   FUNC_12(&VAR_13->mutex);
   VAR_13->n += VAR_6 - VAR_5;
   FUNC_8(VAR_13->progress, VAR_13->n);
   FUNC_13(&VAR_13->mutex);
   VAR_6 = VAR_5;
  }
  if (!FUNC_4(VAR_8, VAR_11, &VAR_7->pathspec, ((void*)0)))
   continue;
  if (FUNC_14(&VAR_10, VAR_11->name, FUNC_3(VAR_11)))
   continue;
  if (FUNC_10(VAR_11->name, &VAR_12))
   continue;
  if (FUNC_9(VAR_8, VAR_11, &VAR_12, VAR_3|VAR_2))
   continue;
  FUNC_2(VAR_11);
  FUNC_11(VAR_8, VAR_11);
 } while (--VAR_5 > 0);
 if (VAR_7->progress) {
  struct progress_data *VAR_14 = VAR_7->progress;

  FUNC_12(&VAR_14->mutex);
  FUNC_8(VAR_14->progress, VAR_14->n + VAR_6);
  FUNC_13(&VAR_14->mutex);
 }
 FUNC_1(&VAR_10);
 return ((void*)0);
}
