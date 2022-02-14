
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mmc35240_data {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mmc35240_data *VAR_5, bool VAR_6)
{
 int VAR_7;
 u8 VAR_8;





 VAR_7 = FUNC_0(VAR_5->regmap, VAR_3,
     VAR_0,
     VAR_0);
 if (VAR_7 < 0)
  return VAR_7;
 FUNC_1(VAR_4, VAR_4 + 1);

 if (VAR_6)
  VAR_8 = VAR_2;
 else
  VAR_8 = VAR_1;

 return FUNC_0(VAR_5->regmap, VAR_3,
      VAR_8, VAR_8);

}
