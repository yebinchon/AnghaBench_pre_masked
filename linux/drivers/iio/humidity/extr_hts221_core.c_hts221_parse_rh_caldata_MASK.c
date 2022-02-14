
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
 size_t VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct hts221_hw *VAR_5)
{
 int VAR_6, *VAR_7, *VAR_8, VAR_9;
 s16 VAR_10, VAR_11, VAR_12, VAR_13;
 __le16 VAR_14;

 VAR_6 = FUNC_2(VAR_5->regmap, VAR_1, &VAR_9);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_12 = VAR_9;

 VAR_6 = FUNC_2(VAR_5->regmap, VAR_3, &VAR_9);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_13 = VAR_9;

 VAR_6 = FUNC_1(VAR_5->regmap, VAR_0,
          &VAR_14, sizeof(VAR_14));
 if (VAR_6 < 0)
  return VAR_6;
 VAR_10 = FUNC_0(VAR_14);

 VAR_6 = FUNC_1(VAR_5->regmap, VAR_2,
          &VAR_14, sizeof(VAR_14));
 if (VAR_6 < 0)
  return VAR_6;
 VAR_11 = FUNC_0(VAR_14);

 VAR_7 = &VAR_5->sensors[VAR_4].slope;
 VAR_8 = &VAR_5->sensors[VAR_4].b_gen;

 *VAR_7 = ((VAR_13 - VAR_12) * 8000) / (VAR_11 - VAR_10);
 *VAR_8 = (((s32)VAR_11 * VAR_12 - (s32)VAR_10 * VAR_13) * 1000) /
   (VAR_11 - VAR_10);
 *VAR_8 *= 8;

 return 0;
}
