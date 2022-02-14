
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef scalar_t__ u16 ;
struct iadc_chip {scalar_t__ base; int regmap; } ;


 int FUNC_0 (int ,scalar_t__,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct iadc_chip *VAR_0, u16 VAR_1, u8 *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0->regmap, VAR_0->base + VAR_1, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 *VAR_2 = VAR_3;
 return 0;
}
