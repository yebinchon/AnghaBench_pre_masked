
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct mv_cesa_engine {int sram_dma; scalar_t__ sram; int * pool; } ;
struct mv_cesa_dev {scalar_t__ sram_size; TYPE_2__* dev; TYPE_1__* caps; struct mv_cesa_engine* engines; } ;
struct TYPE_6__ {int of_node; } ;
struct TYPE_5__ {int nengines; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*,struct resource*) ;
 int FUNC_3 (TYPE_2__*,int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (int *,scalar_t__,int *) ;
 int * FUNC_6 (int ,char*,int) ;
 struct mv_cesa_dev* FUNC_7 (struct platform_device*) ;
 struct resource* FUNC_8 (struct platform_device*,int ,char const*) ;
 scalar_t__ FUNC_9 (struct resource*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_4, int VAR_5)
{
 struct mv_cesa_dev *VAR_6 = FUNC_7(VAR_4);
 struct mv_cesa_engine *VAR_7 = &VAR_6->engines[VAR_5];
 const char *VAR_8 = "sram";
 struct resource *VAR_9;

 VAR_7->pool = FUNC_6(VAR_6->dev->of_node,
           "marvell,crypto-srams", VAR_5);
 if (VAR_7->pool) {
  VAR_7->sram = FUNC_5(VAR_7->pool,
        VAR_6->sram_size,
        &VAR_7->sram_dma);
  if (VAR_7->sram)
   return 0;

  VAR_7->pool = ((void*)0);
  return -VAR_2;
 }

 if (VAR_6->caps->nengines > 1) {
  if (!VAR_5)
   VAR_8 = "sram0";
  else
   VAR_8 = "sram1";
 }

 VAR_9 = FUNC_8(VAR_4, VAR_3,
        VAR_8);
 if (!VAR_9 || FUNC_9(VAR_9) < VAR_6->sram_size)
  return -VAR_1;

 VAR_7->sram = FUNC_2(VAR_6->dev, VAR_9);
 if (FUNC_0(VAR_7->sram))
  return FUNC_1(VAR_7->sram);

 VAR_7->sram_dma = FUNC_3(VAR_6->dev, VAR_9->start,
         VAR_6->sram_size,
         VAR_0, 0);
 if (FUNC_4(VAR_6->dev, VAR_7->sram_dma))
  return -VAR_2;

 return 0;
}
