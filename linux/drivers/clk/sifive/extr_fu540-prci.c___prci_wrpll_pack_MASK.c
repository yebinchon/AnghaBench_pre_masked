
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wrpll_cfg {int divr; int divf; int divq; int range; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static u32 FUNC_0(const struct wrpll_cfg *VAR_5)
{
 u32 VAR_6 = 0;

 VAR_6 |= VAR_5->divr << VAR_2;
 VAR_6 |= VAR_5->divf << VAR_0;
 VAR_6 |= VAR_5->divq << VAR_1;
 VAR_6 |= VAR_5->range << VAR_4;


 VAR_6 |= VAR_3;

 return VAR_6;
}
