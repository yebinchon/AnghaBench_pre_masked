
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct merge_options {TYPE_1__* repo; } ;
struct index_state {int dummy; } ;
struct diff_filespec {int oid; int mode; } ;
struct cache_entry {int dummy; } ;
struct TYPE_2__ {struct index_state* index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct index_state*,struct cache_entry*,int) ;
 int FUNC_2 (struct merge_options*,int ,char const*) ;
 struct cache_entry* FUNC_3 (struct index_state*,int ,int *,char const*,int,int ) ;
 struct cache_entry* FUNC_4 (struct index_state*,struct cache_entry*,int) ;

__attribute__((used)) static int FUNC_5(struct merge_options *VAR_2,
    const struct diff_filespec *VAR_3,
    const char *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct index_state *VAR_8 = VAR_2->repo->index;
 struct cache_entry *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_8, VAR_3->mode, &VAR_3->oid, VAR_4, VAR_5, 0);
 if (!VAR_9)
  return FUNC_2(VAR_2, FUNC_0("add_cacheinfo failed for path '%s'; merge aborting."), VAR_4);

 VAR_10 = FUNC_1(VAR_8, VAR_9, VAR_7);
 if (VAR_6) {
  struct cache_entry *VAR_11;

  VAR_11 = FUNC_4(VAR_8, VAR_9,
       VAR_1 | VAR_0);
  if (!VAR_11)
   return FUNC_2(VAR_2, FUNC_0("add_cacheinfo failed to refresh for path '%s'; merge aborting."), VAR_4);
  if (VAR_11 != VAR_9)
   VAR_10 = FUNC_1(VAR_8, VAR_11, VAR_7);
 }
 return VAR_10;
}
