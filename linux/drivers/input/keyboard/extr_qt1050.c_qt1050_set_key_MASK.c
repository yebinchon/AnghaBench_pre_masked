
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct qt1050_key_regs {int di_aks; } ;


 int FUNC_0 (int) ;
 struct qt1050_key_regs* FUNC_1 (int) ;
 int FUNC_2 (struct regmap*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct regmap *VAR_0, int VAR_1, int VAR_2)
{
 const struct qt1050_key_regs *VAR_3;

 VAR_3 = FUNC_1(VAR_1);

 return FUNC_2(VAR_0, VAR_3->di_aks, 0xfc,
      VAR_2 ? FUNC_0(4) : 0x00);
}
