
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mcde {scalar_t__ regs; scalar_t__ stride; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mcde *VAR_2, u32 VAR_3)
{

 FUNC_0(VAR_3, VAR_2->regs + VAR_0);




 FUNC_0(VAR_3 + VAR_2->stride, VAR_2->regs + VAR_1);
}
