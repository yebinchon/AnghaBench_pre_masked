
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (struct object_id const*,struct object_id const*) ;

__attribute__((used)) static int FUNC_1(const struct object_id *VAR_0,
       const struct object_id *VAR_1,
       enum object_type VAR_2,
       enum object_type VAR_3)
{
 int VAR_4 = VAR_2 - VAR_3;
 if (VAR_4)
  return VAR_4;
 return FUNC_0(VAR_0, VAR_1);
}
