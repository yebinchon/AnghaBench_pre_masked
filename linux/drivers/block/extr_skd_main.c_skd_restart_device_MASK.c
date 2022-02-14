
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct skd_device {int timer_countdown; int state; scalar_t__ last_mtd; int drive_state; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct skd_device*,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct skd_device*,int ,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct skd_device*) ;

__attribute__((used)) static void FUNC_4(struct skd_device *VAR_6)
{
 u32 VAR_7;


 FUNC_1(VAR_6, VAR_0, VAR_1);

 VAR_7 = FUNC_0(VAR_6, VAR_3);

 FUNC_2(&VAR_6->pdev->dev, "drive status=0x%x\n", VAR_7);

 VAR_7 &= VAR_2;
 VAR_6->drive_state = VAR_7;
 VAR_6->last_mtd = 0;

 VAR_6->state = VAR_4;
 VAR_6->timer_countdown = VAR_5;

 FUNC_3(VAR_6);
}
