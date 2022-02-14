
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
typedef int config_fn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,char const*,char*,unsigned long,void*,int *) ;
 char* FUNC_4 (struct object_id const*,int*,unsigned long*) ;

int FUNC_5(config_fn_t VAR_2,
         const char *VAR_3,
         const struct object_id *VAR_4,
         void *VAR_5)
{
 enum object_type VAR_6;
 char *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_7 = FUNC_4(VAR_4, &VAR_6, &VAR_8);
 if (!VAR_7)
  return FUNC_1(FUNC_0("unable to load config blob object '%s'"), VAR_3);
 if (VAR_6 != VAR_1) {
  FUNC_2(VAR_7);
  return FUNC_1(FUNC_0("reference '%s' does not point to a blob"), VAR_3);
 }

 VAR_9 = FUNC_3(VAR_2, VAR_0, VAR_3, VAR_7, VAR_8,
      VAR_5, ((void*)0));
 FUNC_2(VAR_7);

 return VAR_9;
}
