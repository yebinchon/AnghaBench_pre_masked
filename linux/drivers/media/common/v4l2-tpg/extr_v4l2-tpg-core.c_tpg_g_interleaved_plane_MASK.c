
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpg_data {int fourcc; } ;
unsigned FUNC_0(const struct tpg_data *VAR_0, unsigned VAR_1)
{
 switch (VAR_0->fourcc) {
 case 140:
 case 136:
 case 132:
 case 128:
 case 143:
 case 139:
 case 135:
 case 131:
 case 142:
 case 138:
 case 134:
 case 130:
 case 141:
 case 137:
 case 133:
 case 129:
  return VAR_1 & 1;
 default:
  return 0;
 }
}
