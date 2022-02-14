
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int coherent_dma_mask; int * dma_mask; int * bus; int release; } ;
struct TYPE_5__ {int name; } ;
struct amba_device {TYPE_2__ dev; TYPE_1__ res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*,char const*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct amba_device *VAR_2, const char *VAR_3)
{
 FUNC_2(&VAR_2->dev);
 if (VAR_3)
  FUNC_1(&VAR_2->dev, "%s", VAR_3);
 VAR_2->dev.release = VAR_1;
 VAR_2->dev.bus = &VAR_0;
 VAR_2->dev.dma_mask = &VAR_2->dev.coherent_dma_mask;
 VAR_2->res.name = FUNC_0(&VAR_2->dev);
}
