
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_tmu_device {scalar_t__ model; TYPE_1__* pdev; scalar_t__ mapbase; } ;
struct sh_tmu_channel {unsigned int index; scalar_t__ irq; int cs_enabled; scalar_t__ enable_count; scalar_t__ base; struct sh_tmu_device* tmu; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,unsigned int) ;
 int FUNC_2 (struct sh_tmu_channel*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct sh_tmu_channel *VAR_1, unsigned int VAR_2,
    bool VAR_3, bool VAR_4,
    struct sh_tmu_device *VAR_5)
{

 if (!VAR_3 && !VAR_4)
  return 0;

 VAR_1->tmu = VAR_5;
 VAR_1->index = VAR_2;

 if (VAR_5->model == VAR_0)
  VAR_1->base = VAR_5->mapbase + 4 + VAR_1->index * 12;
 else
  VAR_1->base = VAR_5->mapbase + 8 + VAR_1->index * 12;

 VAR_1->irq = FUNC_1(VAR_5->pdev, VAR_2);
 if (VAR_1->irq < 0)
  return VAR_1->irq;

 VAR_1->cs_enabled = 0;
 VAR_1->enable_count = 0;

 return FUNC_2(VAR_1, FUNC_0(&VAR_5->pdev->dev),
          VAR_3, VAR_4);
}
