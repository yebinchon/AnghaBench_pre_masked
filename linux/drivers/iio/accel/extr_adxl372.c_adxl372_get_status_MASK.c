
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct adxl372_state {int regmap; } ;
typedef int buf ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct adxl372_state *VAR_1,
         u8 *VAR_2, u8 *VAR_3,
         u16 *VAR_4)
{
 __be32 VAR_5;
 u32 VAR_6;
 int VAR_7;


 VAR_7 = FUNC_1(VAR_1->regmap, VAR_0,
          &VAR_5, sizeof(VAR_5));
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6 = FUNC_0(VAR_5);

 *VAR_2 = (VAR_6 >> 24) & 0x0F;
 *VAR_3 = (VAR_6 >> 16) & 0x0F;




 *VAR_4 = VAR_6 & 0x3FF;

 return VAR_7;
}
