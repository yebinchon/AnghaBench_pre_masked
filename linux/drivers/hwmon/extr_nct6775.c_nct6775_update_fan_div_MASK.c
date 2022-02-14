
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nct6775_data {int* fan_div; int has_fan; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nct6775_data*,int ) ;

__attribute__((used)) static void FUNC_2(struct nct6775_data *VAR_2)
{
 u8 VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 VAR_2->fan_div[0] = VAR_3 & 0x7;
 VAR_2->fan_div[1] = (VAR_3 & 0x70) >> 4;
 VAR_3 = FUNC_1(VAR_2, VAR_1);
 VAR_2->fan_div[2] = VAR_3 & 0x7;
 if (VAR_2->has_fan & FUNC_0(3))
  VAR_2->fan_div[3] = (VAR_3 & 0x70) >> 4;
}
