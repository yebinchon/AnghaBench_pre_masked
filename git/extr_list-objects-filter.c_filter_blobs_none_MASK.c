
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct oidset {int dummy; } ;
struct object {int flags; int oid; int type; } ;
typedef enum list_objects_filter_situation { ____Placeholder_list_objects_filter_situation } list_objects_filter_situation ;
typedef enum list_objects_filter_result { ____Placeholder_list_objects_filter_result } list_objects_filter_result ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct oidset*,int *) ;

__attribute__((used)) static enum list_objects_filter_result FUNC_3(
 struct repository *VAR_6,
 enum list_objects_filter_situation VAR_7,
 struct object *VAR_8,
 const char *VAR_9,
 const char *VAR_10,
 struct oidset *VAR_11,
 void *VAR_12)
{
 switch (VAR_7) {
 default:
  FUNC_0("unknown filter_situation: %d", VAR_7);

 case 130:
  FUNC_1(VAR_8->type == VAR_4);

  return VAR_1 | VAR_0;

 case 128:
  FUNC_1(VAR_8->type == VAR_4);
  return VAR_2;

 case 129:
  FUNC_1(VAR_8->type == VAR_3);
  FUNC_1((VAR_8->flags & VAR_5) == 0);

  if (VAR_11)
   FUNC_2(VAR_11, &VAR_8->oid);
  return VAR_1;
 }
}
