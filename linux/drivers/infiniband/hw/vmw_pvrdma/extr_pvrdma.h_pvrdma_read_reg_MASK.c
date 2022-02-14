
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pvrdma_dev {scalar_t__ regs; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_2(struct pvrdma_dev *VAR_0, u32 VAR_1)
{
 return FUNC_0(FUNC_1(VAR_0->regs + VAR_1));
}
