
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dma_parms; int dma_mask; struct device* parent; int type; int * bus; } ;
struct intel_th_device {int id; unsigned int type; TYPE_2__ dev; int name; } ;
struct intel_th {int id; struct device* dev; TYPE_1__* hub; } ;
struct device {int coherent_dma_mask; int dma_parms; int dma_mask; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int ,char const*,...) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 struct intel_th_device* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static struct intel_th_device *
FUNC_6(struct intel_th *VAR_4, unsigned int VAR_5, const char *VAR_6,
        int VAR_7)
{
 struct device *VAR_8;
 struct intel_th_device *VAR_9;

 if (VAR_5 == VAR_1)
  VAR_8 = &VAR_4->hub->dev;
 else
  VAR_8 = VAR_4->dev;

 VAR_9 = FUNC_3(sizeof(*VAR_9) + FUNC_5(VAR_6) + 1, VAR_0);
 if (!VAR_9)
  return ((void*)0);

 VAR_9->id = VAR_7;
 VAR_9->type = VAR_5;

 FUNC_4(VAR_9->name, VAR_6);
 FUNC_1(&VAR_9->dev);
 VAR_9->dev.bus = &VAR_2;
 VAR_9->dev.type = VAR_3[VAR_5];
 VAR_9->dev.parent = VAR_8;
 VAR_9->dev.dma_mask = VAR_8->dma_mask;
 VAR_9->dev.dma_parms = VAR_8->dma_parms;
 FUNC_2(&VAR_9->dev, VAR_8->coherent_dma_mask);
 if (VAR_7 >= 0)
  FUNC_0(&VAR_9->dev, "%d-%s%d", VAR_4->id, VAR_6, VAR_7);
 else
  FUNC_0(&VAR_9->dev, "%d-%s", VAR_4->id, VAR_6);

 return VAR_9;
}
