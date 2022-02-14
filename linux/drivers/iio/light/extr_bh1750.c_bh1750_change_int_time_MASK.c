
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct bh1750_data {int mtreg; int client; struct bh1750_chip_info* chip_info; } ;
struct bh1750_chip_info {int mtreg_to_usec; int mtreg_min; int mtreg_max; int int_time_high_mask; int int_time_low_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct bh1750_data *VAR_4, int VAR_5)
{
 int VAR_6;
 u16 VAR_7;
 u8 VAR_8;
 const struct bh1750_chip_info *VAR_9 = VAR_4->chip_info;

 if ((VAR_5 % VAR_9->mtreg_to_usec) != 0)
  return -VAR_3;

 VAR_7 = VAR_5 / VAR_9->mtreg_to_usec;
 if (VAR_7 < VAR_9->mtreg_min || VAR_7 > VAR_9->mtreg_max)
  return -VAR_3;

 VAR_6 = FUNC_0(VAR_4->client, VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_8 = (VAR_7 & VAR_9->int_time_high_mask) >> 5;
 VAR_6 = FUNC_0(VAR_4->client,
       VAR_0 | VAR_8);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_8 = VAR_7 & VAR_9->int_time_low_mask;
 VAR_6 = FUNC_0(VAR_4->client,
       VAR_1 | VAR_8);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_4->mtreg = VAR_7;

 return 0;
}
