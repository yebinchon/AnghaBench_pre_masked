
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpg_data {int pattern; unsigned int src_height; } ;
__attribute__((used)) static unsigned FUNC_0(const struct tpg_data *VAR_0, unsigned VAR_1)
{
 switch (VAR_0->pattern) {
 case 135:
  return (VAR_1 >> 4) & 1;
 case 134:
 case 132:
 case 136:
  return VAR_1 & 1;
 case 133:
 case 131:
  return (VAR_1 & 2) >> 1;
 case 138:
 case 137:
  return (VAR_1 * 8) / VAR_0->src_height;
 case 129:
  return VAR_1 == VAR_0->src_height / 2;
 case 128:
  return (VAR_1 + 1) / 2 == VAR_0->src_height / 4;
 case 130:
  return (VAR_1 + 10) / 20 == VAR_0->src_height / 40;
 default:
  return 0;
 }
}
