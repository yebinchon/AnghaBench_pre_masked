
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oid; } ;
struct seen_map_entry {scalar_t__ depth; TYPE_1__ base; } ;
struct repository {int dummy; } ;
struct oidset {int dummy; } ;
struct object {int oid; int type; } ;
struct filter_trees_depth_data {scalar_t__ current_depth; scalar_t__ exclude_depth; int seen_at_depth; } ;
typedef enum list_objects_filter_situation { ____Placeholder_list_objects_filter_situation } list_objects_filter_situation ;
typedef enum list_objects_filter_result { ____Placeholder_list_objects_filter_result } list_objects_filter_result ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct object*,struct oidset*,int) ;
 int FUNC_3 (int *,int *) ;
 struct seen_map_entry* FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,struct seen_map_entry*) ;
 struct seen_map_entry* FUNC_6 (int,int) ;

__attribute__((used)) static enum list_objects_filter_result FUNC_7(
 struct repository *VAR_5,
 enum list_objects_filter_situation VAR_6,
 struct object *VAR_7,
 const char *VAR_8,
 const char *VAR_9,
 struct oidset *VAR_10,
 void *VAR_11)
{
 struct filter_trees_depth_data *VAR_12 = VAR_11;
 struct seen_map_entry *VAR_13;
 int VAR_14 = VAR_12->current_depth <
  VAR_12->exclude_depth;
 int VAR_15;
 int VAR_16;






 switch (VAR_6) {
 default:
  FUNC_0("unknown filter_situation: %d", VAR_6);

 case 128:
  FUNC_1(VAR_7->type == VAR_4);
  VAR_12->current_depth--;
  return VAR_3;

 case 129:
  FUNC_2(VAR_7, VAR_10, VAR_14);
  return VAR_14 ? VAR_1 | VAR_0 : VAR_3;

 case 130:
  VAR_13 = FUNC_4(
   &VAR_12->seen_at_depth, &VAR_7->oid);
  if (!VAR_13) {
   VAR_13 = FUNC_6(1, sizeof(*VAR_13));
   FUNC_3(&VAR_13->base.oid, &VAR_7->oid);
   VAR_13->depth = VAR_12->current_depth;
   FUNC_5(&VAR_12->seen_at_depth, VAR_13);
   VAR_16 = 0;
  } else {
   VAR_16 =
    VAR_12->current_depth >= VAR_13->depth;
  }

  if (VAR_16) {
   VAR_15 = VAR_2;
  } else {
   int VAR_17 = FUNC_2(
    VAR_7, VAR_10, VAR_14);
   VAR_13->depth = VAR_12->current_depth;

   if (VAR_14)
    VAR_15 = VAR_0;
   else if (VAR_10 && !VAR_17)




    VAR_15 = VAR_3;
   else
    VAR_15 = VAR_2;
  }

  VAR_12->current_depth++;
  return VAR_15;
 }
}
