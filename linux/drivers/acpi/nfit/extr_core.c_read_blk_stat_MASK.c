
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int const u32 ;
struct TYPE_2__ {scalar_t__ base; } ;
struct nfit_blk_mmio {unsigned int size; TYPE_1__ addr; scalar_t__ num_lines; } ;
struct nfit_blk {scalar_t__ stat_offset; struct nfit_blk_mmio* mmio; } ;


 size_t VAR_0 ;
 int const FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,struct nfit_blk_mmio*) ;

__attribute__((used)) static u32 FUNC_2(struct nfit_blk *VAR_1, unsigned int VAR_2)
{
 struct nfit_blk_mmio *VAR_3 = &VAR_1->mmio[VAR_0];
 u64 VAR_4 = VAR_1->stat_offset + VAR_3->size * VAR_2;
 const u32 VAR_5 = 0x80000037;

 if (VAR_3->num_lines)
  VAR_4 = FUNC_1(VAR_4, VAR_3);

 return FUNC_0(VAR_3->addr.base + VAR_4) & VAR_5;
}
