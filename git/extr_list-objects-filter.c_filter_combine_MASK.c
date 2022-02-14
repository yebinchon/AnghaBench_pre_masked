
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {int dummy; } ;
struct oidset {int dummy; } ;
struct object {int dummy; } ;
struct combine_filter_data {size_t nr; TYPE_1__* sub; } ;
typedef enum list_objects_filter_situation { ____Placeholder_list_objects_filter_situation } list_objects_filter_situation ;
typedef enum list_objects_filter_result { ____Placeholder_list_objects_filter_result } list_objects_filter_result ;
struct TYPE_2__ {int is_skipping_tree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct repository*,int,struct object*,char const*,char const*,TYPE_1__*) ;

__attribute__((used)) static enum list_objects_filter_result FUNC_1(
 struct repository *VAR_3,
 enum list_objects_filter_situation VAR_4,
 struct object *VAR_5,
 const char *VAR_6,
 const char *VAR_7,
 struct oidset *VAR_8,
 void *VAR_9)
{
 struct combine_filter_data *VAR_10 = VAR_9;
 enum list_objects_filter_result VAR_11 =
  VAR_0 | VAR_1 | VAR_2;
 size_t VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_10->nr; VAR_12++) {
  enum list_objects_filter_result VAR_13 = FUNC_0(
   VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
   &VAR_10->sub[VAR_12]);
  if (!(VAR_13 & VAR_0))
   VAR_11 &= ~VAR_0;
  if (!(VAR_13 & VAR_1))
   VAR_11 &= ~VAR_1;
  if (!VAR_10->sub[VAR_12].is_skipping_tree)
   VAR_11 &= ~VAR_2;
 }

 return VAR_11;
}
