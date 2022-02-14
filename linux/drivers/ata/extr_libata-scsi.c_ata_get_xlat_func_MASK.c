
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_device {int flags; } ;
typedef int * ata_xlat_func_t ;




 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int FUNC_0 (struct ata_device*) ;

__attribute__((used)) static inline ata_xlat_func_t FUNC_1(struct ata_device *VAR_12, u8 VAR_13)
{
 switch (VAR_13) {
 case 141:
 case 143:
 case 142:

 case 131:
 case 133:
 case 132:
  return VAR_4;

 case 130:
  return VAR_9;

 case 137:
  if (FUNC_0(VAR_12))
   return VAR_1;
  break;

 case 135:
 case 134:
  return VAR_8;

 case 147:
 case 146:
  return VAR_3;

 case 136:
  return VAR_7;

 case 145:
 case 144:
  return VAR_2;
  break;

 case 129:
  return VAR_10;

 case 128:
  return VAR_11;

 case 140:
 case 139:
  if (!(VAR_12->flags & VAR_0))
   break;
  return VAR_5;

 case 138:
  return VAR_6;
 }

 return ((void*)0);
}
