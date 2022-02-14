
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct devx_obj {int obj_id; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static u16 FUNC_2(struct devx_obj *VAR_13, u16 VAR_14)
{
 u16 VAR_15;

 VAR_15 = (VAR_13->obj_id >> 32) & 0xffff;

 if (FUNC_1(VAR_14))
  return FUNC_0(VAR_15);

 switch (VAR_15) {
 case 139:
  return (VAR_13->obj_id >> 48);
 case 135:
  return VAR_6;
 case 137:
  return VAR_4;
 case 133:
  return VAR_8;
 case 140:
  return VAR_1;
 case 132:
  return VAR_9;
 case 131:
  return VAR_10;
 case 138:
  return VAR_3;
 case 128:
  return 128;
 case 136:
  return VAR_5;
 case 130:
  return VAR_11;
 case 129:
  return VAR_12;
 case 134:
  return VAR_7;
 case 142:
  return VAR_2;
 case 141:
  return VAR_0;
 default:
  return 0;
 }
}
