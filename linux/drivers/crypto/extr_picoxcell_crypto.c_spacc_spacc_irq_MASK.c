
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spacc_engine {scalar_t__ regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct spacc_engine*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct spacc_engine *VAR_4 = (struct spacc_engine *)VAR_3;
 u32 VAR_5 = FUNC_0(VAR_4->regs + VAR_1);

 FUNC_2(VAR_5, VAR_4->regs + VAR_1);
 FUNC_1(VAR_4);

 return VAR_0;
}
