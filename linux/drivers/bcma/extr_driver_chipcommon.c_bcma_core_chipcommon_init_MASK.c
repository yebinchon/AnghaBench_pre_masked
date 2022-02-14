
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct bcma_drv_cc {int setup_done; int capabilities; int ticks_per_ms; TYPE_4__* core; } ;
struct TYPE_8__ {int leddc_on_time; int leddc_off_time; } ;
struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_10__ {TYPE_3__ sprom; TYPE_1__ chipinfo; } ;
struct TYPE_7__ {int rev; } ;
struct TYPE_9__ {TYPE_5__* bus; TYPE_2__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct bcma_drv_cc*,int ,int) ;
 int FUNC_1 (struct bcma_drv_cc*) ;
 int FUNC_2 (struct bcma_drv_cc*) ;
 int FUNC_3 (TYPE_5__*,char*) ;
 int FUNC_4 (struct bcma_drv_cc*) ;

void FUNC_5(struct bcma_drv_cc *VAR_8)
{
 u32 VAR_9 = 10;
 u32 VAR_10 = 90;

 if (VAR_8->setup_done)
  return;

 FUNC_2(VAR_8);

 if (VAR_8->core->id.rev >= 20) {
  u32 VAR_11 = 0, VAR_12 = 0;

  if (VAR_8->core->bus->chipinfo.id == VAR_7) {
   VAR_11 = 0x402e0;
   VAR_12 = 0x20500;
  }

  FUNC_0(VAR_8, VAR_3, VAR_11);
  FUNC_0(VAR_8, VAR_2, VAR_12);
 }

 if (VAR_8->capabilities & VAR_1)
  FUNC_4(VAR_8);
 if (VAR_8->capabilities & VAR_0)
  FUNC_3(VAR_8->core->bus, "Power control not implemented!\n");

 if (VAR_8->core->id.rev >= 16) {
  if (VAR_8->core->bus->sprom.leddc_on_time &&
      VAR_8->core->bus->sprom.leddc_off_time) {
   VAR_9 = VAR_8->core->bus->sprom.leddc_on_time;
   VAR_10 = VAR_8->core->bus->sprom.leddc_off_time;
  }
  FUNC_0(VAR_8, VAR_4,
   ((VAR_9 << VAR_6) |
    (VAR_10 << VAR_5)));
 }
 VAR_8->ticks_per_ms = FUNC_1(VAR_8);

 VAR_8->setup_done = 1;
}
