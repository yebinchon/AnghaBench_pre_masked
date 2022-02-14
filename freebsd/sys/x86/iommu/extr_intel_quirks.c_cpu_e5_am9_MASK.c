
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_unit {int hw_cap; } ;



__attribute__((used)) static void
FUNC_0(struct dmar_unit *VAR_0)
{

 VAR_0->hw_cap &= ~(0x3fULL << 48);
 VAR_0->hw_cap |= (9ULL << 48);
}
