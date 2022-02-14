
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpg_data {int pattern; unsigned int src_width; } ;
typedef enum tpg_color { ____Placeholder_tpg_color } tpg_color ;
 int VAR_0 ;
__attribute__((used)) static enum tpg_color FUNC_0(const struct tpg_data *VAR_1,
        unsigned VAR_2, unsigned VAR_3)
{


 static const enum tpg_color VAR_4[3][8] = {

  { 150, 157,
    161, 160,
    159, 158,
    162, 170, },

  { 164, 163,
    168, 167,
    166, 165,
    169, 170, },

  { 150, 149,
    154, 153,
    152, 151,
    155, 156, },
 };

 switch (VAR_1->pattern) {
 case 145:
 case 148:
 case 132:
  return VAR_4[VAR_1->pattern][((VAR_3 * 8) / VAR_1->src_width) % 8];
 case 147:
  return VAR_4[1][(VAR_2 + (VAR_3 * 8) / VAR_1->src_width) % 8];
 case 146:
  return VAR_4[1][VAR_2];
 case 142:
  return 170;
 case 128:
  return 164;
 case 129:
  return 165;
 case 130:
  return 167;
 case 141:
  return 169;
 case 140:
  return (((VAR_3 >> 4) & 1) ^ (VAR_2 & 1)) ?
   170 : 164;
 case 139:
  return ((VAR_3 & 1) ^ (VAR_2 & 1)) ?
   164 : 170;
 case 137:
  return ((VAR_3 & 1) ^ (VAR_2 & 1)) ?
   165 : 169;
 case 138:
  return (((VAR_3 >> 1) & 1) ^ (VAR_2 & 1)) ?
   164 : 170;
 case 136:
  return (((VAR_3 >> 1) & 1) ^ (VAR_2 & 1)) ?
   165 : 169;
 case 144:
  return VAR_2 ? 164 : 170;
 case 143:
  return (VAR_3 & 1) ? 164 : 170;
 case 134:
  if (VAR_2 || (VAR_3 % VAR_1->src_width) == VAR_1->src_width / 2)
   return 170;
  return 164;
 case 133:
  if (VAR_2 || ((VAR_3 % VAR_1->src_width) + 1) / 2 == VAR_1->src_width / 4)
   return 170;
  return 164;
 case 135:
  if (VAR_2 || ((VAR_3 % VAR_1->src_width) + 10) / 20 == VAR_1->src_width / 40)
   return 170;
  return 164;
 case 131:
  return VAR_0 + ((VAR_3 % VAR_1->src_width) * 256) / VAR_1->src_width;
 default:
  return 165;
 }
}
