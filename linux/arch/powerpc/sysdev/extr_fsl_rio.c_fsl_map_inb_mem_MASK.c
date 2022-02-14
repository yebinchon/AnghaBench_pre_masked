
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct rio_priv {TYPE_1__* inb_atmu_regs; } ;
struct rio_mport {struct rio_priv* priv; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int riwar; int riwbar; int riwtar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

int FUNC_3(struct rio_mport *VAR_11, dma_addr_t VAR_12,
 u64 VAR_13, u64 VAR_14, u32 VAR_15)
{
 struct rio_priv *VAR_16 = VAR_11->priv;
 u32 VAR_17;
 unsigned int VAR_18;
 u64 VAR_19, VAR_20;
 u32 VAR_21;
 int VAR_22;

 if ((VAR_14 & (VAR_14 - 1)) != 0 || VAR_14 > 0x400000000ULL)
  return -VAR_0;

 VAR_18 = FUNC_0(VAR_14);
 VAR_17 = 1 << VAR_18;


 if (VAR_12 & (VAR_17 - 1))
  return -VAR_0;
 if (VAR_13 & (VAR_17 - 1))
  return -VAR_0;


 for (VAR_22 = 0; VAR_22 < VAR_2; VAR_22++) {
  VAR_21 = FUNC_1(&VAR_16->inb_atmu_regs[VAR_22].riwar);
  if ((VAR_21 & VAR_3) == 0)
   continue;
  VAR_19 = ((u64)(FUNC_1(&VAR_16->inb_atmu_regs[VAR_22].riwbar) & VAR_8))
   << VAR_9;
  VAR_20 = VAR_19 + ((1 << ((VAR_21 & VAR_5) + 1)) - 1);
  if (VAR_13 < VAR_20 && (VAR_13 + VAR_14) > VAR_19)
   return -VAR_0;
 }


 for (VAR_22 = 0; VAR_22 < VAR_2; VAR_22++) {
  VAR_21 = FUNC_1(&VAR_16->inb_atmu_regs[VAR_22].riwar);
  if ((VAR_21 & VAR_3) == 0)
   break;
 }
 if (VAR_22 >= VAR_2)
  return -VAR_1;

 FUNC_2(&VAR_16->inb_atmu_regs[VAR_22].riwtar, VAR_12 >> VAR_10);
 FUNC_2(&VAR_16->inb_atmu_regs[VAR_22].riwbar, VAR_13 >> VAR_9);
 FUNC_2(&VAR_16->inb_atmu_regs[VAR_22].riwar, VAR_3 | VAR_6 |
  VAR_4 | VAR_7 | (VAR_18 - 1));

 return 0;
}
