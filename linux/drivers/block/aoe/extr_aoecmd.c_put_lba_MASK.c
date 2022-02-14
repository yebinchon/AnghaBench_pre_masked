
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aoe_atahdr {int lba0; int lba1; int lba2; int lba3; int lba4; int lba5; } ;
typedef int sector_t ;



__attribute__((used)) static inline void
FUNC_0(struct aoe_atahdr *VAR_0, sector_t VAR_1)
{
 VAR_0->lba0 = VAR_1;
 VAR_0->lba1 = VAR_1 >>= 8;
 VAR_0->lba2 = VAR_1 >>= 8;
 VAR_0->lba3 = VAR_1 >>= 8;
 VAR_0->lba4 = VAR_1 >>= 8;
 VAR_0->lba5 = VAR_1 >>= 8;
}
