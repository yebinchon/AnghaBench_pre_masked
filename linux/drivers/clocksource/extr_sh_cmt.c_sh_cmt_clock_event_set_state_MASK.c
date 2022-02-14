
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_cmt_channel {int index; TYPE_2__* cmt; } ;
struct clock_event_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 struct sh_cmt_channel* FUNC_0 (struct clock_event_device*) ;
 scalar_t__ FUNC_1 (struct clock_event_device*) ;
 scalar_t__ FUNC_2 (struct clock_event_device*) ;
 int FUNC_3 (int *,char*,int ,char*) ;
 int FUNC_4 (struct sh_cmt_channel*,int) ;
 int FUNC_5 (struct sh_cmt_channel*,int ) ;

__attribute__((used)) static int FUNC_6(struct clock_event_device *VAR_1,
     int VAR_2)
{
 struct sh_cmt_channel *VAR_3 = FUNC_0(VAR_1);


 if (FUNC_1(VAR_1) || FUNC_2(VAR_1))
  FUNC_5(VAR_3, VAR_0);

 FUNC_3(&VAR_3->cmt->pdev->dev, "ch%u: used for %s clock events\n",
   VAR_3->index, VAR_2 ? "periodic" : "oneshot");
 FUNC_4(VAR_3, VAR_2);
 return 0;
}
