
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graphics_object_id {int type; int enum_id; int id; } ;


 int VAR_0 ;




__attribute__((used)) static bool FUNC_0(struct graphics_object_id VAR_1)
{
 bool VAR_2 = 1;

 switch (VAR_1.type) {
 case 128:
  VAR_2 = 0;
  break;
 case 129:
 case 130:

  if (VAR_1.enum_id == VAR_0)
   VAR_2 = 0;
  break;
 default:
  if (VAR_1.id == 0 || VAR_1.enum_id == VAR_0)
   VAR_2 = 0;
  break;
 }

 return VAR_2;
}
