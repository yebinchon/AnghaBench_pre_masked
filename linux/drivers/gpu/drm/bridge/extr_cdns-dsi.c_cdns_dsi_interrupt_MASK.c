
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cdns_dsi {int direct_cmd_comp; scalar_t__ regs; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct cdns_dsi *VAR_6 = VAR_5;
 irqreturn_t VAR_7 = VAR_3;
 u32 VAR_8, VAR_9;

 VAR_8 = FUNC_1(VAR_6->regs + VAR_1);
 if (VAR_8) {
  VAR_9 = FUNC_1(VAR_6->regs + VAR_0);
  VAR_9 &= ~VAR_8;
  FUNC_2(VAR_9, VAR_6->regs + VAR_0);
  FUNC_0(&VAR_6->direct_cmd_comp);
  VAR_7 = VAR_2;
 }

 return VAR_7;
}
