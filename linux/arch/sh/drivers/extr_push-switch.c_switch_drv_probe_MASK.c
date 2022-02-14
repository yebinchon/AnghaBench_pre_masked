
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct push_switch_platform_info {scalar_t__ name; int irq_flags; int irq_handler; } ;
struct push_switch {struct platform_device* pdev; int debounce; int work; } ;
struct TYPE_3__ {struct push_switch_platform_info* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int,struct platform_device*) ;
 int FUNC_5 (struct push_switch*) ;
 struct push_switch* FUNC_6 (int,int ) ;
 int FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (struct platform_device*,struct push_switch*) ;
 int FUNC_9 (int,int ,int ,scalar_t__,struct platform_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int *,int ,int ) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_8)
{
 struct push_switch_platform_info *VAR_9;
 struct push_switch *VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_6(sizeof(struct push_switch), VAR_4);
 if (FUNC_11(!VAR_10))
  return -VAR_3;

 VAR_12 = FUNC_7(VAR_8, 0);
 if (FUNC_11(VAR_12 < 0)) {
  VAR_11 = -VAR_2;
  goto err;
 }

 VAR_9 = VAR_8->dev.platform_data;
 FUNC_0(!VAR_9);

 VAR_11 = FUNC_9(VAR_12, VAR_9->irq_handler,
     VAR_9->irq_flags,
     VAR_9->name ? VAR_9->name : VAR_0, VAR_8);
 if (FUNC_11(VAR_11 < 0))
  goto err;

 if (VAR_9->name) {
  VAR_11 = FUNC_3(&VAR_8->dev, &VAR_5);
  if (FUNC_11(VAR_11)) {
   FUNC_2(&VAR_8->dev, "Failed creating device attrs\n");
   VAR_11 = -VAR_1;
   goto err_irq;
  }
 }

 FUNC_1(&VAR_10->work, VAR_7);
 FUNC_10(&VAR_10->debounce, VAR_6, 0);


 VAR_10->pdev = VAR_8;

 FUNC_8(VAR_8, VAR_10);

 return 0;

err_irq:
 FUNC_4(VAR_12, VAR_8);
err:
 FUNC_5(VAR_10);
 return VAR_11;
}
