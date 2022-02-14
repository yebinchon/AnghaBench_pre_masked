
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct xive_irq_data {int flags; scalar_t__ eoi_mmio; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u8 FUNC_1(struct xive_irq_data *VAR_1, u32 VAR_2)
{
 u64 VAR_3;

 if (VAR_1->flags & VAR_0)
  VAR_2 |= VAR_2 << 4;

 VAR_3 = FUNC_0(VAR_1->eoi_mmio + VAR_2);
 return (u8)VAR_3;
}
