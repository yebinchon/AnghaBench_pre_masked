
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,struct object_id*) ;
 int FUNC_3 (struct string_list*,char*,char**) ;
 char* FUNC_4 (struct object_id*,int*,unsigned long*) ;

__attribute__((used)) static int FUNC_5(struct string_list *VAR_1,
        const char *VAR_2,
        char **VAR_3)
{
 struct object_id VAR_4;
 char *VAR_5;
 unsigned long VAR_6;
 enum object_type VAR_7;

 if (!VAR_2)
  return 0;
 if (FUNC_2(VAR_2, &VAR_4) < 0)
  return 0;

 VAR_5 = FUNC_4(&VAR_4, &VAR_7, &VAR_6);
 if (!VAR_5)
  return FUNC_0("unable to read mailmap object at %s", VAR_2);
 if (VAR_7 != VAR_0)
  return FUNC_0("mailmap is not a blob: %s", VAR_2);

 FUNC_3(VAR_1, VAR_5, VAR_3);

 FUNC_1(VAR_5);
 return 0;
}
