
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static u32 FUNC_0(phys_addr_t VAR_6, int VAR_7)
{
 u32 VAR_8 = 0;
 VAR_8 |= (VAR_7 & VAR_0) ? VAR_3 : 0;
 VAR_8 |= (VAR_7 & VAR_1) ? VAR_5 : 0;
 VAR_6 &= VAR_2;
 return VAR_6 | VAR_8 | VAR_4;
}
