
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_lapic {scalar_t__ regs; } ;



__attribute__((used)) static inline u32 FUNC_0(struct kvm_lapic *VAR_0, int VAR_1)
{
 return *((u32 *) (VAR_0->regs + VAR_1));
}
