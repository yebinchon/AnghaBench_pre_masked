
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct devstate_stat_reg {int shift; int nbits; int start_id; int enable; int disable; scalar_t__ reg; } ;
struct devstate_info {struct devstate_stat_reg* stat; struct devstate_ctl_reg* ctl; } ;
struct devstate_ctl_reg {int shift; int nbits; int start_id; int enable; int disable; scalar_t__ reg; int enable_only; } ;
typedef enum dscr_devstate_t { ____Placeholder_dscr_devstate_t } dscr_devstate_t ;
struct TYPE_2__ {scalar_t__ base; int lock; struct devstate_info* devstate_info; } ;




 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(int VAR_2, enum dscr_devstate_t VAR_3)
{
 struct devstate_ctl_reg *VAR_4;
 struct devstate_stat_reg *VAR_5;
 struct devstate_info *VAR_6;
 u32 VAR_7, VAR_8;
 int VAR_9, VAR_10;
 unsigned long VAR_11;

 if (!VAR_1.base)
  return;

 if (VAR_2 < 0 || VAR_2 >= VAR_0)
  return;

 VAR_6 = &VAR_1.devstate_info[VAR_2];
 VAR_4 = VAR_6->ctl;
 VAR_5 = VAR_6->stat;

 if (VAR_4 == ((void*)0))
  return;

 VAR_9 = VAR_4->shift + VAR_4->nbits * (VAR_2 - VAR_4->start_id);
 VAR_10 = ((1 << VAR_4->nbits) - 1) << VAR_9;

 switch (VAR_3) {
 case 128:
  VAR_7 = VAR_4->enable << VAR_9;
  break;
 case 129:
  if (VAR_4->enable_only)
   return;
  VAR_7 = VAR_4->disable << VAR_9;
  break;
 default:
  return;
 }

 FUNC_2(&VAR_1.lock, VAR_11);

 VAR_8 = FUNC_1(VAR_1.base + VAR_4->reg);
 VAR_8 &= ~VAR_10;
 VAR_8 |= VAR_7;

 FUNC_0(VAR_4->reg, VAR_8);

 FUNC_3(&VAR_1.lock, VAR_11);

 if (!VAR_5)
  return;

 VAR_9 = VAR_5->shift + VAR_5->nbits * (VAR_2 - VAR_5->start_id);

 if (VAR_3 == 128)
  VAR_7 = VAR_5->enable;
 else
  VAR_7 = VAR_5->disable;

 do {
  VAR_8 = FUNC_1(VAR_1.base + VAR_5->reg);
  VAR_8 >>= VAR_9;
  VAR_8 &= ((1 << VAR_5->nbits) - 1);
 } while (VAR_8 != VAR_7);
}
