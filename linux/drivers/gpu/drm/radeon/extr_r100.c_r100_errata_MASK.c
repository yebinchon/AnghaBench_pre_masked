
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {scalar_t__ family; int pll_errata; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(struct radeon_device *VAR_6)
{
 VAR_6->pll_errata = 0;

 if (VAR_6->family == VAR_5 || VAR_6->family == VAR_3) {
  VAR_6->pll_errata |= VAR_1;
 }

 if (VAR_6->family == VAR_4 ||
     VAR_6->family == VAR_2 ||
     VAR_6->family == VAR_3) {
  VAR_6->pll_errata |= VAR_0;
 }
}
