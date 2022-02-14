
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct malidp_hw_device {scalar_t__ regs; int pm_suspended; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_2(struct malidp_hw_device *VAR_0, u32 VAR_1)
{
 FUNC_0(VAR_0->pm_suspended);
 return FUNC_1(VAR_0->regs + VAR_1);
}
