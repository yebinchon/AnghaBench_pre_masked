
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct object {int flags; } ;
struct filter {int (* filter_object_fn ) (struct repository*,int,struct object*,char const*,char const*,int ,int ) ;int filter_data; int omits; } ;
typedef enum list_objects_filter_situation { ____Placeholder_list_objects_filter_situation } list_objects_filter_situation ;
typedef enum list_objects_filter_result { ____Placeholder_list_objects_filter_result } list_objects_filter_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct repository*,int,struct object*,char const*,char const*,int ,int ) ;

enum list_objects_filter_result FUNC_1(
 struct repository *VAR_4,
 enum list_objects_filter_situation VAR_5,
 struct object *VAR_6,
 const char *VAR_7,
 const char *VAR_8,
 struct filter *VAR_9)
{
 if (VAR_9 && (VAR_6->flags & VAR_3))
  return VAR_9->filter_object_fn(VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8,
      VAR_9->omits,
      VAR_9->filter_data);





 if (VAR_5 == VAR_2)
  return 0;
 return VAR_1 | VAR_0;
}
