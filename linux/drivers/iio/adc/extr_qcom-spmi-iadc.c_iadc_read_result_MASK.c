
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iadc_chip {scalar_t__ base; int regmap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int *,int) ;

__attribute__((used)) static int FUNC_1(struct iadc_chip *VAR_1, u16 *VAR_2)
{
 return FUNC_0(VAR_1->regmap, VAR_1->base + VAR_0, VAR_2, 2);
}
