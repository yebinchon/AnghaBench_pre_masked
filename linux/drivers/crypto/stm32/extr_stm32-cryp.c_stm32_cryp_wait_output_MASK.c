
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_cryp {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static inline int FUNC_1(struct stm32_cryp *VAR_2)
{
 u32 VAR_3;

 return FUNC_0(VAR_2->regs + VAR_0, VAR_3,
   VAR_3 & VAR_1, 10, 100000);
}
