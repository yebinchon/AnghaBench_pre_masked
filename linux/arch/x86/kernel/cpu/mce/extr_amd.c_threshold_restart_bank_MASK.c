
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct thresh_restart {int reset; int old_limit; int lvt_off; TYPE_1__* b; scalar_t__ set_lvt_off; } ;
struct TYPE_2__ {int threshold_limit; int address; scalar_t__ interrupt_enable; int interrupt_capable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_7)
{
 struct thresh_restart *VAR_8 = VAR_7;
 u32 VAR_9, VAR_10;

 FUNC_1(VAR_8->b->address, VAR_10, VAR_9);

 if (VAR_8->b->threshold_limit < (VAR_9 & VAR_6))
  VAR_8->reset = 1;

 if (VAR_8->reset) {
  VAR_9 =
      (VAR_9 & ~(VAR_2 | VAR_5)) |
      (VAR_6 - VAR_8->b->threshold_limit);
 } else if (VAR_8->old_limit) {
  int VAR_11 = (VAR_9 & VAR_6) +
      (VAR_8->old_limit - VAR_8->b->threshold_limit);

  VAR_9 = (VAR_9 & ~VAR_2) |
      (VAR_11 & VAR_6);
 }


 VAR_9 &= ~VAR_3;

 if (!VAR_8->b->interrupt_capable)
  goto done;

 if (VAR_8->set_lvt_off) {
  if (FUNC_0(VAR_8->b, VAR_8->lvt_off, VAR_10, VAR_9)) {

   VAR_9 &= ~VAR_4;
   VAR_9 |= VAR_8->lvt_off << 20;
  }
 }

 if (VAR_8->b->interrupt_enable)
  VAR_9 |= VAR_0;

 done:

 VAR_9 |= VAR_1;
 FUNC_2(VAR_8->b->address, VAR_10, VAR_9);
}
