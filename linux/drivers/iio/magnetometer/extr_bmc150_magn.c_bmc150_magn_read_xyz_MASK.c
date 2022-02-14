
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int values ;
typedef int u16 ;
typedef int tregs ;
struct bmc150_magn_trim_regs {int dummy; } ;
struct bmc150_magn_data {int regmap; } ;
typedef int s32 ;
typedef int s16 ;
typedef struct bmc150_magn_trim_regs __le16 ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (struct bmc150_magn_trim_regs*,int,int) ;
 int FUNC_1 (struct bmc150_magn_trim_regs*,int,int) ;
 int FUNC_2 (struct bmc150_magn_trim_regs*,int,int) ;
 int FUNC_3 (struct bmc150_magn_trim_regs) ;
 int FUNC_4 (int ,int ,struct bmc150_magn_trim_regs*,int) ;

__attribute__((used)) static int FUNC_5(struct bmc150_magn_data *VAR_10, s32 *VAR_11)
{
 int VAR_12;
 __le16 VAR_13[VAR_1];
 s16 VAR_14, VAR_15, VAR_16;
 u16 VAR_17;
 struct bmc150_magn_trim_regs VAR_18;

 VAR_12 = FUNC_4(VAR_10->regmap, VAR_5,
          VAR_13, sizeof(VAR_13));
 if (VAR_12 < 0)
  return VAR_12;

 VAR_14 = (s16)FUNC_3(VAR_13[VAR_0]) >> VAR_7;
 VAR_15 = (s16)FUNC_3(VAR_13[VAR_2]) >> VAR_7;
 VAR_16 = (s16)FUNC_3(VAR_13[VAR_3]) >> VAR_8;
 VAR_17 = FUNC_3(VAR_13[VAR_9]) >> VAR_6;

 VAR_12 = FUNC_4(VAR_10->regmap, VAR_4,
          &VAR_18, sizeof(VAR_18));
 if (VAR_12 < 0)
  return VAR_12;

 VAR_11[VAR_0] = FUNC_0(&VAR_18, VAR_14, VAR_17);
 VAR_11[VAR_2] = FUNC_1(&VAR_18, VAR_15, VAR_17);
 VAR_11[VAR_3] = FUNC_2(&VAR_18, VAR_16, VAR_17);

 return 0;
}
