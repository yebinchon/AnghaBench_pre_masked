
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct object_id const*,int,char*,int ) ;
 int FUNC_2 (int ,struct object_id const*,int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,char const*) ;

__attribute__((used)) static int FUNC_4(const struct object_id *VAR_1, const char *VAR_2,
       void *VAR_3)
{
 enum object_type VAR_4 = FUNC_2(VAR_0, VAR_1, ((void*)0));

 if (VAR_4 < 0) {
  FUNC_3(FUNC_0("loose object at %s could not be examined"), VAR_2);
  return 0;
 }

 FUNC_1(VAR_1, VAR_4, "", 0);
 return 0;
}
