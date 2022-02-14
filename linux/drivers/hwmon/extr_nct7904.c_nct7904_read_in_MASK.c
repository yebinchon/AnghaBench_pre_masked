
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nct7904_data {int* vsen_alarm; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct nct7904_data* FUNC_0 (struct device*) ;




 int* VAR_7 ;
 int FUNC_1 (struct nct7904_data*,int ,int ) ;
 int FUNC_2 (struct nct7904_data*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_8, u32 VAR_9, int VAR_10,
      long *VAR_11)
{
 struct nct7904_data *VAR_12 = FUNC_0(VAR_8);
 int VAR_13, VAR_14, VAR_15;

 VAR_15 = VAR_7[VAR_10];

 switch (VAR_9) {
 case 130:
  VAR_13 = FUNC_2(VAR_12, VAR_0,
      VAR_6 + VAR_15 * 2);
  if (VAR_13 < 0)
   return VAR_13;
  VAR_14 = ((VAR_13 & 0xff00) >> 5) | (VAR_13 & 0x7);
  if (VAR_15 < 14)
   VAR_14 *= 2;
  else
   VAR_14 *= 6;
  *VAR_11 = VAR_14;
  return 0;
 case 128:
  VAR_13 = FUNC_2(VAR_12, VAR_1,
      VAR_5 + VAR_15 * 4);
  if (VAR_13 < 0)
   return VAR_13;
  VAR_14 = ((VAR_13 & 0xff00) >> 5) | (VAR_13 & 0x7);
  if (VAR_15 < 14)
   VAR_14 *= 2;
  else
   VAR_14 *= 6;
  *VAR_11 = VAR_14;
  return 0;
 case 129:
  VAR_13 = FUNC_2(VAR_12, VAR_1,
      VAR_4 + VAR_15 * 4);
  if (VAR_13 < 0)
   return VAR_13;
  VAR_14 = ((VAR_13 & 0xff00) >> 5) | (VAR_13 & 0x7);
  if (VAR_15 < 14)
   VAR_14 *= 2;
  else
   VAR_14 *= 6;
  *VAR_11 = VAR_14;
  return 0;
 case 131:
  VAR_13 = FUNC_1(VAR_12, VAR_0,
           VAR_3 + (VAR_15 >> 3));
  if (VAR_13 < 0)
   return VAR_13;
  if (!VAR_12->vsen_alarm[VAR_15 >> 3])
   VAR_12->vsen_alarm[VAR_15 >> 3] = VAR_13 & 0xff;
  else

   VAR_12->vsen_alarm[VAR_15 >> 3] |= (VAR_13 & 0xff);
  *VAR_11 = (VAR_12->vsen_alarm[VAR_15 >> 3] >> (VAR_15 & 0x07)) & 1;

  if (*VAR_11)
   VAR_12->vsen_alarm[VAR_15 >> 3] ^= 1 << (VAR_15 & 0x07);
  return 0;
 default:
  return -VAR_2;
 }
}
