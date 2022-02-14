
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int present; int boot; } ;
struct bcma_drv_cc {int capabilities; int status; TYPE_4__ nflash; TYPE_5__* core; } ;
struct TYPE_7__ {scalar_t__ id; } ;
struct bcma_bus {TYPE_1__ chipinfo; } ;
struct TYPE_9__ {TYPE_4__* platform_data; } ;
struct TYPE_12__ {TYPE_3__ dev; } ;
struct TYPE_8__ {int rev; } ;
struct TYPE_11__ {TYPE_2__ id; struct bcma_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcma_bus*,char*) ;
 TYPE_6__ VAR_5 ;

int FUNC_1(struct bcma_drv_cc *VAR_6)
{
 struct bcma_bus *VAR_7 = VAR_6->core->bus;

 if (VAR_7->chipinfo.id != VAR_2 &&
     VAR_6->core->id.rev != 38) {
  FUNC_0(VAR_7, "NAND flash on unsupported board!\n");
  return -VAR_4;
 }

 if (!(VAR_6->capabilities & VAR_0)) {
  FUNC_0(VAR_7, "NAND flash not present according to ChipCommon\n");
  return -VAR_3;
 }

 VAR_6->nflash.present = 1;
 if (VAR_6->core->id.rev == 38 &&
     (VAR_6->status & VAR_1))
  VAR_6->nflash.boot = 1;



 VAR_5.dev.platform_data = &VAR_6->nflash;

 return 0;
}
