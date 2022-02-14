
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {struct hwspinlock* lock; } ;
struct sprd_hwspinlock_dev {scalar_t__ clk; TYPE_3__ bank; scalar_t__ base; } ;
struct resource {int dummy; } ;
struct TYPE_9__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct hwspinlock {scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,struct resource*) ;
 struct sprd_hwspinlock_dev* FUNC_8 (TYPE_1__*,int,int ) ;
 int FUNC_9 (TYPE_3__*,TYPE_1__*,int *,int ,int) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct sprd_hwspinlock_dev*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_14 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_8)
{
 struct sprd_hwspinlock_dev *VAR_9;
 struct hwspinlock *VAR_10;
 struct resource *VAR_11;
 int VAR_12, VAR_13;

 if (!VAR_8->dev.of_node)
  return -VAR_0;

 VAR_9 = FUNC_8(&VAR_8->dev,
       sizeof(struct sprd_hwspinlock_dev) +
       VAR_6 * sizeof(*VAR_10),
       VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_11 = FUNC_10(VAR_8, VAR_5, 0);
 VAR_9->base = FUNC_7(&VAR_8->dev, VAR_11);
 if (FUNC_1(VAR_9->base))
  return FUNC_2(VAR_9->base);

 VAR_9->clk = FUNC_6(&VAR_8->dev, "enable");
 if (FUNC_1(VAR_9->clk)) {
  FUNC_5(&VAR_8->dev, "get hwspinlock clock failed!\n");
  return FUNC_2(VAR_9->clk);
 }

 FUNC_4(VAR_9->clk);


 FUNC_14(VAR_4, VAR_9->base + VAR_3);

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  VAR_10 = &VAR_9->bank.lock[VAR_12];
  VAR_10->priv = VAR_9->base + FUNC_0(VAR_12);
 }

 FUNC_11(VAR_8, VAR_9);
 FUNC_13(&VAR_8->dev);

 VAR_13 = FUNC_9(&VAR_9->bank, &VAR_8->dev,
       &VAR_7, 0, VAR_6);
 if (VAR_13) {
  FUNC_12(&VAR_8->dev);
  FUNC_3(VAR_9->clk);
  return VAR_13;
 }

 return 0;
}
