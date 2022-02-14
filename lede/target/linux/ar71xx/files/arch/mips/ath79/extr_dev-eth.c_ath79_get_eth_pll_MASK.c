
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath79_eth_pll_data {int pll_1000; int pll_100; int pll_10; } ;


 int FUNC_0 () ;



 struct ath79_eth_pll_data VAR_0 ;
 struct ath79_eth_pll_data VAR_1 ;

__attribute__((used)) static u32 FUNC_1(unsigned int VAR_2, int VAR_3)
{
 struct ath79_eth_pll_data *VAR_4;
 u32 VAR_5;

 switch (VAR_2) {
 case 0:
  VAR_4 = &VAR_0;
  break;
 case 1:
  VAR_4 = &VAR_1;
  break;
 default:
  FUNC_0();
 }

 switch (VAR_3) {
 case 130:
  VAR_5 = VAR_4->pll_10;
  break;
 case 129:
  VAR_5 = VAR_4->pll_100;
  break;
 case 128:
  VAR_5 = VAR_4->pll_1000;
  break;
 default:
  FUNC_0();
 }

 return VAR_5;
}
