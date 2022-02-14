
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,...) ;
 int FUNC_2 (int ,struct object_id const*,int *) ;
 int FUNC_3 (struct object_id const*) ;
 int VAR_0 ;
 int FUNC_4 (int) ;

void FUNC_5(const struct object_id *VAR_1, enum object_type VAR_2)
{
 enum object_type VAR_3 = FUNC_2(VAR_0, VAR_1, ((void*)0));
 if (VAR_3 < 0)
  FUNC_1(FUNC_0("%s is not a valid object"), FUNC_3(VAR_1));
 if (VAR_3 != VAR_2)
  FUNC_1(FUNC_0("%s is not a valid '%s' object"), FUNC_3(VAR_1),
      FUNC_4(VAR_2));
}
