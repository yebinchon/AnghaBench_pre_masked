
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_i2c_data {unsigned char icic; scalar_t__ reg; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct sh_mobile_i2c_data *VAR_1, int VAR_2, unsigned char VAR_3)
{
 if (VAR_2 == VAR_0)
  VAR_3 |= VAR_1->icic;

 FUNC_0(VAR_3, VAR_1->reg + VAR_2);
}
