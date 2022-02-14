
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_7__ {int hw; } ;
struct TYPE_6__ {int tx_block; int knows_txdone; int * tx_done; struct device* dev; } ;
struct TYPE_5__ {int mbox; TYPE_2__ cl; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,int *) ;
 scalar_t__ FUNC_3 (struct device*,int ,int ) ;
 int FUNC_4 (struct device*,int ,TYPE_3__*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 int FUNC_5 (TYPE_2__*,int ) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct resource*) ;
 TYPE_1__ VAR_8 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct resource *VAR_11;
 unsigned int VAR_12;
 int VAR_13;


 VAR_8.cl.dev = VAR_10;
 VAR_8.cl.tx_done = ((void*)0);
 VAR_8.cl.tx_block = 0;
 VAR_8.cl.knows_txdone = 0;


 VAR_8.mbox = FUNC_5(&VAR_8.cl, 0);
 if (FUNC_0(VAR_8.mbox))
  return FUNC_1(VAR_8.mbox);

 VAR_11 = FUNC_6(VAR_9, VAR_4, 0);
 if (!VAR_11)
  return -VAR_0;
 VAR_5 = FUNC_3(VAR_10, VAR_11->start, FUNC_7(VAR_11));
 if (!VAR_5)
  return -VAR_1;

 VAR_5 += VAR_3;

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  VAR_13 = FUNC_2(&VAR_9->dev, &VAR_7[VAR_12].hw);
  if (VAR_13)
   return VAR_13;
 }

 return FUNC_4(&VAR_9->dev, VAR_6,
        VAR_7);
}
