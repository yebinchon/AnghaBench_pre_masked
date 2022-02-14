
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nct7904_data {int* fan_alarm; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nct7904_data* FUNC_0 (struct device*) ;



 int FUNC_1 (struct nct7904_data*,int ,int ) ;
 int FUNC_2 (struct nct7904_data*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_6, u32 VAR_7, int VAR_8,
       long *VAR_9)
{
 struct nct7904_data *VAR_10 = FUNC_0(VAR_6);
 unsigned int VAR_11, VAR_12;
 int VAR_13;

 switch (VAR_7) {
 case 129:
  VAR_13 = FUNC_2(VAR_10, VAR_0,
      VAR_4 + VAR_8 * 2);
  if (VAR_13 < 0)
   return VAR_13;
  VAR_11 = ((VAR_13 & 0xff00) >> 3) | (VAR_13 & 0x1f);
  if (VAR_11 == 0x1fff)
   VAR_12 = 0;
  else
   VAR_12 = 1350000 / VAR_11;
  *VAR_9 = VAR_12;
  return 0;
 case 128:
  VAR_13 = FUNC_2(VAR_10, VAR_1,
      VAR_3 + VAR_8 * 2);
  if (VAR_13 < 0)
   return VAR_13;
  VAR_11 = ((VAR_13 & 0xff00) >> 3) | (VAR_13 & 0x1f);
  if (VAR_11 == 0x1fff)
   VAR_12 = 0;
  else
   VAR_12 = 1350000 / VAR_11;
  *VAR_9 = VAR_12;
  return 0;
 case 130:
  VAR_13 = FUNC_1(VAR_10, VAR_0,
           VAR_5 + (VAR_8 >> 3));
  if (VAR_13 < 0)
   return VAR_13;
  if (!VAR_10->fan_alarm[VAR_8 >> 3])
   VAR_10->fan_alarm[VAR_8 >> 3] = VAR_13 & 0xff;
  else

   VAR_10->fan_alarm[VAR_8 >> 3] |= (VAR_13 & 0xff);
  *VAR_9 = (VAR_10->fan_alarm[VAR_8 >> 3] >> (VAR_8 & 0x07)) & 1;

  if (*VAR_9)
   VAR_10->fan_alarm[VAR_8 >> 3] ^= 1 << (VAR_8 & 0x07);
  return 0;
 default:
  return -VAR_2;
 }
}
