
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_default {int reg; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct reg_default *VAR_2 = VAR_0;
 const struct reg_default *VAR_3 = VAR_1;

 return VAR_2->reg - VAR_3->reg;
}
