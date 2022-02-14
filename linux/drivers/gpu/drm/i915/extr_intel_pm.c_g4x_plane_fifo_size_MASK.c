
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum plane_id { ____Placeholder_plane_id } plane_id ;


 int VAR_0 ;
 int FUNC_0 (int) ;




__attribute__((used)) static int FUNC_1(enum plane_id VAR_1, int VAR_2)
{
 switch (VAR_1) {
 case 130:
  return 63;
 case 129:
  return VAR_2 == VAR_0 ? 127 : 511;
 case 128:
  return VAR_2 == VAR_0 ? 127 : 0;
 default:
  FUNC_0(VAR_1);
  return 0;
 }
}
