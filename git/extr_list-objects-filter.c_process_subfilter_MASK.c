
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subfilter {int is_skipping_tree; int skip_tree; int seen; int filter; } ;
struct repository {int dummy; } ;
struct object {int oid; } ;
typedef enum list_objects_filter_situation { ____Placeholder_list_objects_filter_situation } list_objects_filter_situation ;
typedef enum list_objects_filter_result { ____Placeholder_list_objects_filter_result } list_objects_filter_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct repository*,int,struct object*,char const*,char const*,int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static enum list_objects_filter_result FUNC_4(
 struct repository *VAR_4,
 enum list_objects_filter_situation VAR_5,
 struct object *VAR_6,
 const char *VAR_7,
 const char *VAR_8,
 struct subfilter *VAR_9)
{
 enum list_objects_filter_result VAR_10;
 if (VAR_9->is_skipping_tree) {
  if (VAR_5 == VAR_3 &&
      FUNC_1(&VAR_6->oid, &VAR_9->skip_tree))
   VAR_9->is_skipping_tree = 0;
  else
   return VAR_2;
 }
 if (FUNC_2(&VAR_9->seen, &VAR_6->oid))
  return VAR_2;

 VAR_10 = FUNC_0(
  VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9->filter);

 if (VAR_10 & VAR_0)
  FUNC_3(&VAR_9->seen, &VAR_6->oid);

 if (VAR_10 & VAR_1) {
  VAR_9->is_skipping_tree = 1;
  VAR_9->skip_tree = VAR_6->oid;
 }

 return VAR_10;
}
