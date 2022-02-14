
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cdns_i3c_master {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int,int,int,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct cdns_i3c_master *VAR_4)
{
 u32 VAR_5;

 FUNC_2(FUNC_0(VAR_4->regs + VAR_0) & ~VAR_1, VAR_4->regs + VAR_0);

 return FUNC_1(VAR_4->regs + VAR_2, VAR_5,
      VAR_5 & VAR_3, 10, 1000000);
}
