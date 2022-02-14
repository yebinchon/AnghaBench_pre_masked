
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nct7904_data {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long FUNC_0 (long,int ,int) ;
 struct nct7904_data* FUNC_1 (struct device*) ;


 int* VAR_6 ;
 int FUNC_2 (struct nct7904_data*,int ,int ) ;
 int FUNC_3 (struct nct7904_data*,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_7, u32 VAR_8, int VAR_9,
       long VAR_10)
{
 struct nct7904_data *VAR_11 = FUNC_1(VAR_7);
 int VAR_12, VAR_13, VAR_14;

 VAR_13 = VAR_6[VAR_9];

 if (VAR_13 < 14)
  VAR_10 = VAR_10 / 2;
 else
  VAR_10 = VAR_10 / 6;

 VAR_10 = FUNC_0(VAR_10, 0, 0x7ff);

 switch (VAR_8) {
 case 128:
  VAR_14 = FUNC_2(VAR_11, VAR_0,
           VAR_5 + VAR_13 * 4);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_14 &= ~0x7;
  VAR_14 |= VAR_10 & 0x7;
  VAR_12 = FUNC_3(VAR_11, VAR_0,
     VAR_5 + VAR_13 * 4, VAR_14);
  if (VAR_12 < 0)
   return VAR_12;
  VAR_14 = FUNC_2(VAR_11, VAR_0,
           VAR_3 + VAR_13 * 4);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_14 = (VAR_10 >> 3) & 0xff;
  VAR_12 = FUNC_3(VAR_11, VAR_0,
     VAR_3 + VAR_13 * 4, VAR_14);
  return VAR_12;
 case 129:
  VAR_14 = FUNC_2(VAR_11, VAR_0,
           VAR_4 + VAR_13 * 4);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_14 &= ~0x7;
  VAR_14 |= VAR_10 & 0x7;
  VAR_12 = FUNC_3(VAR_11, VAR_0,
     VAR_4 + VAR_13 * 4, VAR_14);
  if (VAR_12 < 0)
   return VAR_12;
  VAR_14 = FUNC_2(VAR_11, VAR_0,
           VAR_2 + VAR_13 * 4);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_14 = (VAR_10 >> 3) & 0xff;
  VAR_12 = FUNC_3(VAR_11, VAR_0,
     VAR_2 + VAR_13 * 4, VAR_14);
  return VAR_12;
 default:
  return -VAR_1;
 }
}
