
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct bcm3510_state {int dummy; } ;
struct bcm3510_hab_cmd_tune {int length; int misc; int TUNCTL_state; TYPE_2__* ctl_dat; scalar_t__ clock_width; } ;
typedef int c ;
struct TYPE_3__ {int clk_off; int cs0; int cs1; void* size; } ;
struct TYPE_4__ {int data; TYPE_1__ ctrl; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bcm3510_state*,int ,int ,int*,int,int *,int ) ;
 int FUNC_1 (struct bcm3510_hab_cmd_tune*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct bcm3510_state* VAR_4,u8 VAR_5, u16 VAR_6, u8 VAR_7)
{
 struct bcm3510_hab_cmd_tune VAR_8;
 FUNC_1(&VAR_8,0,sizeof(struct bcm3510_hab_cmd_tune));


 VAR_8.length = 0x10;
 VAR_8.clock_width = 0;


 VAR_8.misc = 0x10;

 VAR_8.TUNCTL_state = 0x40;


 VAR_8.ctl_dat[0].ctrl.size = VAR_1;
 VAR_8.ctl_dat[0].data = 0x80 | VAR_5;


 VAR_8.ctl_dat[1].ctrl.size = VAR_1;
 VAR_8.ctl_dat[1].data = 4;


 VAR_8.ctl_dat[2].ctrl.size = VAR_0;
 VAR_8.ctl_dat[2].data = 0x20;


 VAR_8.ctl_dat[3].ctrl.size = VAR_0;
 VAR_8.ctl_dat[3].ctrl.clk_off = 1;
 VAR_8.ctl_dat[3].ctrl.cs0 = 1;
 VAR_8.ctl_dat[3].data = 0x40;


 VAR_8.ctl_dat[4].ctrl.size = VAR_1;
 VAR_8.ctl_dat[4].data = VAR_6 >> 3;


 VAR_8.ctl_dat[5].ctrl.size = VAR_1;
 VAR_8.ctl_dat[5].data = ((VAR_6 & 0x7) << 5) | (VAR_7 >> 2);


 VAR_8.ctl_dat[6].ctrl.size = VAR_0;
 VAR_8.ctl_dat[6].data = (VAR_7 << 6) & 0xdf;


 VAR_8.ctl_dat[7].ctrl.size = VAR_0;
 VAR_8.ctl_dat[7].ctrl.clk_off = 1;
 VAR_8.ctl_dat[7].ctrl.cs0 = 1;
 VAR_8.ctl_dat[7].data = 0x40;


 VAR_8.ctl_dat[8].ctrl.size = VAR_1;
 VAR_8.ctl_dat[8].data = 0x80;


 VAR_8.ctl_dat[9].ctrl.size = VAR_1;
 VAR_8.ctl_dat[9].data = 0x10;


 VAR_8.ctl_dat[10].ctrl.size = VAR_0;
 VAR_8.ctl_dat[10].data = 0x20;


 VAR_8.ctl_dat[11].ctrl.size = VAR_0;
 VAR_8.ctl_dat[11].ctrl.clk_off = 1;
 VAR_8.ctl_dat[11].ctrl.cs1 = 1;
 VAR_8.ctl_dat[11].data = 0x40;


 VAR_8.ctl_dat[12].ctrl.size = VAR_1;
 VAR_8.ctl_dat[12].data = 0x2a;


 VAR_8.ctl_dat[13].ctrl.size = VAR_1;
 VAR_8.ctl_dat[13].data = 0x8e;


 VAR_8.ctl_dat[14].ctrl.size = VAR_0;
 VAR_8.ctl_dat[14].data = 0;


 VAR_8.ctl_dat[15].ctrl.size = VAR_0;
 VAR_8.ctl_dat[15].ctrl.clk_off = 1;
 VAR_8.ctl_dat[15].ctrl.cs1 = 1;
 VAR_8.ctl_dat[15].data = 0x40;

 return FUNC_0(VAR_4,VAR_2, VAR_3,(u8 *) &VAR_8,sizeof(VAR_8), ((void*)0), 0);
}
