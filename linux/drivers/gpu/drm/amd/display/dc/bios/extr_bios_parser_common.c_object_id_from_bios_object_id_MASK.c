
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct graphics_object_id {int member_0; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
typedef enum object_enum_id { ____Placeholder_object_enum_id } object_enum_id ;


 int VAR_0 ;
 int VAR_1 ;
 struct graphics_object_id FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;

struct graphics_object_id FUNC_4(uint32_t VAR_2)
{
 enum object_type VAR_3;
 enum object_enum_id VAR_4;
 struct graphics_object_id VAR_5 = { 0 };

 VAR_3 = FUNC_3(VAR_2);

 if (VAR_1 == VAR_3)
  return VAR_5;

 VAR_4 = FUNC_1(VAR_2);

 if (VAR_0 == VAR_4)
  return VAR_5;

 VAR_5 = FUNC_0(
   FUNC_2(VAR_3, VAR_2), VAR_4, VAR_3);

 return VAR_5;
}
