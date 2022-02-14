
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regmap {int dummy; } ;
typedef int s16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int *,int *) ;
 int FUNC_3 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct regmap *VAR_0,
        int VAR_1,
        s16 *VAR_2, s16 *VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;
 s16 VAR_6;
 u8 VAR_7 = 0;
 u8 VAR_8 = 0;

 VAR_4 = FUNC_2(VAR_1, &VAR_7,
       &VAR_8);
 if (VAR_4 != 0)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_0, FUNC_1(VAR_7), &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_6 = (s16)VAR_5;

 VAR_4 = FUNC_3(VAR_0, FUNC_0(VAR_7), &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;
 *VAR_2 = (VAR_6 + (s16)VAR_5) / 2;

 VAR_4 = FUNC_3(VAR_0, FUNC_1(VAR_8), &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_6 = (s16)VAR_5;

 VAR_4 = FUNC_3(VAR_0, FUNC_0(VAR_8), &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;
 *VAR_3 = (VAR_6 + (s16)VAR_5) / 2;

 return VAR_4;
}
