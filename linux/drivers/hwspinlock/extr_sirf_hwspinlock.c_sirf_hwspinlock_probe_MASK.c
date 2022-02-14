
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct hwspinlock* lock; } ;
struct sirf_hwspinlock {scalar_t__ io_base; TYPE_3__ bank; } ;
struct TYPE_7__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct hwspinlock {scalar_t__ priv; } ;
struct TYPE_9__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_6__ VAR_4 ;
 struct sirf_hwspinlock* FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*,int *,int ,int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct platform_device*,struct sirf_hwspinlock*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_8 (struct sirf_hwspinlock*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_6)
{
 struct sirf_hwspinlock *VAR_7;
 struct hwspinlock *VAR_8;
 int VAR_9, VAR_10;

 if (!VAR_6->dev.of_node)
  return -VAR_0;

 VAR_7 = FUNC_1(&VAR_6->dev,
         FUNC_8(VAR_7, VAR_4.lock,
       VAR_3),
         VAR_2);
 if (!VAR_7)
  return -VAR_1;


 VAR_7->io_base = FUNC_4(VAR_6->dev.of_node, 0);
 if (!VAR_7->io_base)
  return -VAR_1;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_8 = &VAR_7->bank.lock[VAR_9];
  VAR_8->priv = VAR_7->io_base + FUNC_0(VAR_9);
 }

 FUNC_5(VAR_6, VAR_7);

 FUNC_7(&VAR_6->dev);

 VAR_10 = FUNC_2(&VAR_7->bank, &VAR_6->dev,
       &VAR_5, 0,
       VAR_3);
 if (VAR_10)
  goto reg_failed;

 return 0;

reg_failed:
 FUNC_6(&VAR_6->dev);
 FUNC_3(VAR_7->io_base);

 return VAR_10;
}
