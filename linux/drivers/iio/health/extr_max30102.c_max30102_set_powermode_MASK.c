
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max30102_data {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct max30102_data *VAR_3, u8 VAR_4, bool VAR_5)
{
 u8 VAR_6 = VAR_4;

 if (!VAR_5)
  VAR_6 |= VAR_2;

 return FUNC_0(VAR_3->regmap, VAR_0,
      VAR_2 |
      VAR_1, VAR_6);
}
