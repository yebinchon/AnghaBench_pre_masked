
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {scalar_t__ family; int pll_errata; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_5)
{
 VAR_5->pll_errata = 0;

 if (VAR_5->family == VAR_1 &&
     (FUNC_0(VAR_4) & VAR_3) == VAR_2) {
  VAR_5->pll_errata |= VAR_0;
 }
}
