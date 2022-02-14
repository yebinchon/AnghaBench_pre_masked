
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct regmap*,int ,int*,int) ;
 int FUNC_1 (struct regmap*,int ,int*) ;
 int FUNC_2 (struct regmap*,int ,int,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct regmap *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 u8 VAR_9[2];
 VAR_7 = FUNC_1(VAR_5, VAR_3, &VAR_8);
 if (VAR_7)
  return VAR_7;

 if (VAR_8 & VAR_1) {
  VAR_7 = FUNC_2(VAR_5, VAR_3,
      VAR_1,
      VAR_2);
  if (VAR_7)
   return VAR_7;


  FUNC_3(6000, 10000);
 }

 VAR_7 = FUNC_0(VAR_5, VAR_4, VAR_9, 2);
 if (VAR_7 == 0)
  VAR_7 = (VAR_9[0] << 4) + ((VAR_9[1] >> 4) & 0x0f);

 if (VAR_8 & VAR_1) {
  FUNC_2(VAR_5, VAR_3,
       VAR_1,
       VAR_0);
 }

 return VAR_7;
}
