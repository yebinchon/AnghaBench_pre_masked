
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ref_filter_cbdata {int array; int no_contains_cache; int contains_cache; struct ref_filter* filter; } ;
struct TYPE_2__ {scalar_t__ nr; } ;
struct ref_filter {unsigned int kind; scalar_t__ no_commit; scalar_t__ with_commit; scalar_t__ verbose; scalar_t__ merge_commit; TYPE_1__ points_at; } ;
struct ref_array_item {int flag; unsigned int kind; struct commit* commit; } ;
struct object_id {int dummy; } ;
struct commit {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct ref_filter*,struct commit*,scalar_t__,int *) ;
 int FUNC_2 (struct ref_filter*,char const*) ;
 unsigned int FUNC_3 (struct ref_filter*,char const*) ;
 struct commit* FUNC_4 (int ,struct object_id const*,int) ;
 int FUNC_5 (TYPE_1__*,struct object_id const*,char const*) ;
 struct ref_array_item* FUNC_6 (int ,char const*,struct object_id const*) ;
 int VAR_2 ;
 int FUNC_7 (int ,char const*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_3, const struct object_id *VAR_4, int VAR_5, void *VAR_6)
{
 struct ref_filter_cbdata *VAR_7 = VAR_6;
 struct ref_filter *VAR_8 = VAR_7->filter;
 struct ref_array_item *VAR_9;
 struct commit *VAR_10 = ((void*)0);
 unsigned int VAR_11;

 if (VAR_5 & VAR_0) {
  FUNC_7(FUNC_0("ignoring ref with broken name %s"), VAR_3);
  return 0;
 }

 if (VAR_5 & VAR_1) {
  FUNC_7(FUNC_0("ignoring broken ref %s"), VAR_3);
  return 0;
 }


 VAR_11 = FUNC_3(VAR_8, VAR_3);
 if (!(VAR_11 & VAR_8->kind))
  return 0;

 if (!FUNC_2(VAR_8, VAR_3))
  return 0;

 if (VAR_8->points_at.nr && !FUNC_5(&VAR_8->points_at, VAR_4, VAR_3))
  return 0;






 if (VAR_8->merge_commit || VAR_8->with_commit || VAR_8->no_commit || VAR_8->verbose) {
  VAR_10 = FUNC_4(VAR_2, VAR_4,
       1);
  if (!VAR_10)
   return 0;

  if (VAR_8->with_commit &&
      !FUNC_1(VAR_8, VAR_10, VAR_8->with_commit, &VAR_7->contains_cache))
   return 0;

  if (VAR_8->no_commit &&
      FUNC_1(VAR_8, VAR_10, VAR_8->no_commit, &VAR_7->no_contains_cache))
   return 0;
 }






 VAR_9 = FUNC_6(VAR_7->array, VAR_3, VAR_4);
 VAR_9->commit = VAR_10;
 VAR_9->flag = VAR_5;
 VAR_9->kind = VAR_11;

 return 0;
}
