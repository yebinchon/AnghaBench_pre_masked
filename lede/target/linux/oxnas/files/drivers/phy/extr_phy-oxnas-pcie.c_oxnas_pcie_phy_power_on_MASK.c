
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct oxnas_pcie_phy {scalar_t__ membase; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct oxnas_pcie_phy* FUNC_2 (struct phy*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_4)
{
 struct oxnas_pcie_phy *VAR_5 = FUNC_2(VAR_4);


 FUNC_3(FUNC_0(0x0014), VAR_5->membase + VAR_1);
 FUNC_3(FUNC_1(0xce10) | VAR_0, VAR_5->membase + VAR_2);
 FUNC_3(FUNC_1(0xce10) | VAR_3, VAR_5->membase + VAR_2);

 FUNC_3(FUNC_0(0x2004), VAR_5->membase + VAR_1);
 FUNC_3(FUNC_1(0x82c7) | VAR_0, VAR_5->membase + VAR_2);
 FUNC_3(FUNC_1(0x82c7) | VAR_3, VAR_5->membase + VAR_2);

 return 0;
}
