
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int base; } ;
struct nfit_blk_mmio {unsigned int size; TYPE_1__ addr; scalar_t__ num_lines; } ;
struct nfit_blk {int cmd_offset; int dimm_flags; int nd_region; struct nfit_blk_mmio* mmio; } ;
typedef int resource_size_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct nfit_blk_mmio*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct nfit_blk *VAR_3, unsigned int VAR_4,
  resource_size_t VAR_5, unsigned int VAR_6, unsigned int VAR_7)
{
 u64 VAR_8, VAR_9;
 struct nfit_blk_mmio *VAR_10 = &VAR_3->mmio[VAR_0];

 enum {
  BCW_OFFSET_MASK = (1ULL << 48)-1,
  BCW_LEN_SHIFT = 48,
  BCW_LEN_MASK = (1ULL << 8) - 1,
  BCW_CMD_SHIFT = 56,
 };

 VAR_8 = (VAR_5 >> VAR_1) & BCW_OFFSET_MASK;
 VAR_6 = VAR_6 >> VAR_1;
 VAR_8 |= ((u64) VAR_6 & BCW_LEN_MASK) << BCW_LEN_SHIFT;
 VAR_8 |= ((u64) VAR_7) << BCW_CMD_SHIFT;

 VAR_9 = VAR_3->cmd_offset + VAR_10->size * VAR_4;
 if (VAR_10->num_lines)
  VAR_9 = FUNC_2(VAR_9, VAR_10);

 FUNC_3(VAR_8, VAR_10->addr.base + VAR_9);
 FUNC_0(VAR_3->nd_region, ((void*)0));

 if (VAR_3->dimm_flags & VAR_2)
  FUNC_1(VAR_10->addr.base + VAR_9);
}
