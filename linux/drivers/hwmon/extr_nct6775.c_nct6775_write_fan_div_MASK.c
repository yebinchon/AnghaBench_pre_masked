
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nct6775_data {int* fan_div; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nct6775_data*,int ) ;
 int FUNC_1 (struct nct6775_data*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct nct6775_data *VAR_2, int VAR_3)
{
 u8 VAR_4;

 switch (VAR_3) {
 case 0:
  VAR_4 = (FUNC_0(VAR_2, VAR_0) & 0x70)
      | (VAR_2->fan_div[0] & 0x7);
  FUNC_1(VAR_2, VAR_0, VAR_4);
  break;
 case 1:
  VAR_4 = (FUNC_0(VAR_2, VAR_0) & 0x7)
      | ((VAR_2->fan_div[1] << 4) & 0x70);
  FUNC_1(VAR_2, VAR_0, VAR_4);
  break;
 case 2:
  VAR_4 = (FUNC_0(VAR_2, VAR_1) & 0x70)
      | (VAR_2->fan_div[2] & 0x7);
  FUNC_1(VAR_2, VAR_1, VAR_4);
  break;
 case 3:
  VAR_4 = (FUNC_0(VAR_2, VAR_1) & 0x7)
      | ((VAR_2->fan_div[3] << 4) & 0x70);
  FUNC_1(VAR_2, VAR_1, VAR_4);
  break;
 }
}
