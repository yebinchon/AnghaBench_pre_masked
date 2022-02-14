
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ notifier_call; } ;
struct ti_sci_info {int chan_rx; int chan_tx; int node; scalar_t__ users; TYPE_1__ nb; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;
 struct ti_sci_info* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct platform_device*,struct ti_sci_info*) ;
 int VAR_1 ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_2)
{
 struct ti_sci_info *VAR_3;
 struct device *VAR_4 = &VAR_2->dev;
 int VAR_5 = 0;

 FUNC_4(VAR_4);

 VAR_3 = FUNC_5(VAR_2);

 if (VAR_3->nb.notifier_call)
  FUNC_7(&VAR_3->nb);

 FUNC_2(&VAR_1);
 if (VAR_3->users)
  VAR_5 = -VAR_0;
 else
  FUNC_0(&VAR_3->node);
 FUNC_3(&VAR_1);

 if (!VAR_5) {
  FUNC_6(VAR_2, VAR_3);


  FUNC_1(VAR_3->chan_tx);
  FUNC_1(VAR_3->chan_rx);
 }

 return VAR_5;
}
