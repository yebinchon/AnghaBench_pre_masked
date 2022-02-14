
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val ;
struct hts221_hw {TYPE_1__* sensors; int regmap; } ;
typedef int s32 ;
typedef int s16 ;
typedef int __le16 ;
struct TYPE_2__ {int slope; int b_gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct hts221_hw *VAR_6)
{
 int VAR_7, *VAR_8, *VAR_9, VAR_10, VAR_11;
 s16 VAR_12, VAR_13, VAR_14, VAR_15;
 __le16 VAR_16;

 VAR_7 = FUNC_2(VAR_6->regmap, VAR_1, &VAR_10);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_6->regmap, VAR_4, &VAR_11);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_14 = ((VAR_11 & 0x3) << 8) | VAR_10;

 VAR_7 = FUNC_2(VAR_6->regmap, VAR_3, &VAR_10);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_15 = (((VAR_11 & 0xc) >> 2) << 8) | VAR_10;

 VAR_7 = FUNC_1(VAR_6->regmap, VAR_0,
          &VAR_16, sizeof(VAR_16));
 if (VAR_7 < 0)
  return VAR_7;
 VAR_12 = FUNC_0(VAR_16);

 VAR_7 = FUNC_1(VAR_6->regmap, VAR_2,
          &VAR_16, sizeof(VAR_16));
 if (VAR_7 < 0)
  return VAR_7;
 VAR_13 = FUNC_0(VAR_16);

 VAR_8 = &VAR_6->sensors[VAR_5].slope;
 VAR_9 = &VAR_6->sensors[VAR_5].b_gen;

 *VAR_8 = ((VAR_15 - VAR_14) * 8000) / (VAR_13 - VAR_12);
 *VAR_9 = (((s32)VAR_13 * VAR_14 - (s32)VAR_12 * VAR_15) * 1000) /
   (VAR_13 - VAR_12);
 *VAR_9 *= 8;

 return 0;
}
