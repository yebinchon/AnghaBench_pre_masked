
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spacc_engine {scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct spacc_engine *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2->regs + VAR_1);

 return VAR_3 & VAR_0;
}
