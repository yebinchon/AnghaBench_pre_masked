
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int index; } ;
struct oidset {int dummy; } ;
struct object {int flags; int oid; int type; } ;
struct frame {int default_match; int child_prov_omit; } ;
struct filter_sparse_data {size_t nr; int pl; struct frame* array_frame; int alloc; } ;
typedef enum pattern_match_result { ____Placeholder_pattern_match_result } pattern_match_result ;
typedef enum list_objects_filter_situation { ____Placeholder_list_objects_filter_situation } list_objects_filter_situation ;
typedef enum list_objects_filter_result { ____Placeholder_list_objects_filter_result } list_objects_filter_result ;


 int FUNC_0 (struct frame*,int ,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct oidset*,int *) ;
 int FUNC_4 (struct oidset*,int *) ;
 int FUNC_5 (char const*,int ,char const*,int*,int *,int ) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static enum list_objects_filter_result FUNC_7(
 struct repository *VAR_11,
 enum list_objects_filter_situation VAR_12,
 struct object *VAR_13,
 const char *VAR_14,
 const char *VAR_15,
 struct oidset *VAR_16,
 void *VAR_17)
{
 struct filter_sparse_data *VAR_18 = VAR_17;
 int VAR_19;
 struct frame *VAR_20;
 enum pattern_match_result VAR_21;

 switch (VAR_12) {
 default:
  FUNC_1("unknown filter_situation: %d", VAR_12);

 case 130:
  FUNC_2(VAR_13->type == VAR_8);
  VAR_19 = VAR_0;
  VAR_21 = FUNC_5(VAR_14, FUNC_6(VAR_14),
        VAR_15, &VAR_19, &VAR_18->pl,
        VAR_11->index);
  if (VAR_21 == VAR_10)
   VAR_21 = VAR_18->array_frame[VAR_18->nr - 1].default_match;

  FUNC_0(VAR_18->array_frame, VAR_18->nr + 1,
      VAR_18->alloc);
  VAR_18->array_frame[VAR_18->nr].default_match = VAR_21;
  VAR_18->array_frame[VAR_18->nr].child_prov_omit = 0;
  VAR_18->nr++;
  if (VAR_13->flags & VAR_2)
   return VAR_5;
  VAR_13->flags |= VAR_2;
  return VAR_3;

 case 128:
  FUNC_2(VAR_13->type == VAR_8);
  FUNC_2(VAR_18->nr > 1);

  VAR_20 = &VAR_18->array_frame[--VAR_18->nr];





  VAR_18->array_frame[VAR_18->nr - 1].child_prov_omit |=
   VAR_20->child_prov_omit;






  if (!VAR_20->child_prov_omit)
   return VAR_4;
  return VAR_5;

 case 129:
  FUNC_2(VAR_13->type == VAR_7);
  FUNC_2((VAR_13->flags & VAR_9) == 0);

  VAR_20 = &VAR_18->array_frame[VAR_18->nr - 1];

  VAR_19 = VAR_1;
  VAR_21 = FUNC_5(VAR_14, FUNC_6(VAR_14),
         VAR_15, &VAR_19, &VAR_18->pl,
         VAR_11->index);
  if (VAR_21 == VAR_10)
   VAR_21 = VAR_20->default_match;
  if (VAR_21 == VAR_6) {
   if (VAR_16)
    FUNC_4(VAR_16, &VAR_13->oid);
   return VAR_4 | VAR_3;
  }
  if (VAR_16)
   FUNC_3(VAR_16, &VAR_13->oid);






  VAR_20->child_prov_omit = 1;
  return VAR_5;
 }
}
