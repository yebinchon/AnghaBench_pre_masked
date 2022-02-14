
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skd_device {char const* skcomp_ix; struct skd_device* skcomp_cycle; TYPE_1__* pdev; int queue_low_water_mark; int dev_max_queue_depth; int cur_max_queue_depth; int state; int drive_state; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,struct skd_device*,char const*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct skd_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct skd_device *VAR_0, const char *VAR_1)
{
 FUNC_0(&VAR_0->pdev->dev, "skdev=%p event='%s'\n", VAR_0, VAR_1);
 FUNC_0(&VAR_0->pdev->dev, "  drive_state=%s(%d) driver_state=%s(%d)\n",
  FUNC_1(VAR_0->drive_state), VAR_0->drive_state,
  FUNC_3(VAR_0->state), VAR_0->state);
 FUNC_0(&VAR_0->pdev->dev, "  busy=%d limit=%d dev=%d lowat=%d\n",
  FUNC_2(VAR_0), VAR_0->cur_max_queue_depth,
  VAR_0->dev_max_queue_depth, VAR_0->queue_low_water_mark);
 FUNC_0(&VAR_0->pdev->dev, "  cycle=%d cycle_ix=%d\n",
  VAR_0->skcomp_cycle, VAR_0->skcomp_ix);
}
