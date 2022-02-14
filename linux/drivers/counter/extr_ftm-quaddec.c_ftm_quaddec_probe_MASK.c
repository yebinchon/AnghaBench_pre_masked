
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_8__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_9__ {int num_counts; struct ftm_quaddec* priv; int num_signals; int signals; int * counts; int * ops; TYPE_1__* parent; int name; } ;
struct ftm_quaddec {TYPE_4__ counter; int ftm_quaddec_mutex; int ftm_base; int big_endian; struct platform_device* pdev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,struct ftm_quaddec*) ;
 int FUNC_4 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 struct ftm_quaddec* FUNC_6 (TYPE_1__*,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct ftm_quaddec*) ;
 int VAR_8 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct device_node*,char*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct ftm_quaddec*) ;
 int FUNC_12 (struct resource*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_9)
{
 struct ftm_quaddec *VAR_10;

 struct device_node *VAR_11 = VAR_9->dev.of_node;
 struct resource *VAR_12;
 int VAR_13;

 VAR_10 = FUNC_6(&VAR_9->dev, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_2;

 FUNC_11(VAR_9, VAR_10);

 VAR_12 = FUNC_10(VAR_9, VAR_4, 0);
 if (!VAR_12) {
  FUNC_1(&VAR_9->dev, "Failed to get memory region\n");
  return -VAR_1;
 }

 VAR_10->pdev = VAR_9;
 VAR_10->big_endian = FUNC_9(VAR_11, "big-endian");
 VAR_10->ftm_base = FUNC_5(&VAR_9->dev, VAR_12->start, FUNC_12(VAR_12));

 if (!VAR_10->ftm_base) {
  FUNC_1(&VAR_9->dev, "Failed to map memory region\n");
  return -VAR_0;
 }
 VAR_10->counter.name = FUNC_2(&VAR_9->dev);
 VAR_10->counter.parent = &VAR_9->dev;
 VAR_10->counter.ops = &VAR_5;
 VAR_10->counter.counts = &VAR_6;
 VAR_10->counter.num_counts = 1;
 VAR_10->counter.signals = VAR_8;
 VAR_10->counter.num_signals = FUNC_0(VAR_8);
 VAR_10->counter.priv = VAR_10;

 FUNC_8(&VAR_10->ftm_quaddec_mutex);

 FUNC_7(VAR_10);

 VAR_13 = FUNC_3(&VAR_9->dev, VAR_7, VAR_10);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_4(&VAR_9->dev, &VAR_10->counter);
 if (VAR_13)
  return VAR_13;

 return 0;
}
