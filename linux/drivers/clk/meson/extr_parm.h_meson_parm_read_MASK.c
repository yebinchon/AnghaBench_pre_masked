
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct parm {int shift; int width; int reg_off; } ;


 unsigned int FUNC_0 (int ,int ,unsigned int) ;
 int FUNC_1 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct regmap *VAR_0, struct parm *VAR_1)
{
 unsigned int VAR_2;

 FUNC_1(VAR_0, VAR_1->reg_off, &VAR_2);
 return FUNC_0(VAR_1->width, VAR_1->shift, VAR_2);
}
