
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct tegra_devfreq {TYPE_2__* devfreq; TYPE_3__* devices; } ;
typedef int irqreturn_t ;
struct TYPE_7__ {TYPE_1__* config; } ;
struct TYPE_6__ {int lock; } ;
struct TYPE_5__ {int irq_mask; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct tegra_devfreq*,TYPE_3__*) ;
 int FUNC_2 (struct tegra_devfreq*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct tegra_devfreq *VAR_5 = VAR_4;
 bool VAR_6 = 0;
 unsigned int VAR_7;
 u32 VAR_8;

 FUNC_3(&VAR_5->devfreq->lock);

 VAR_8 = FUNC_2(VAR_5, VAR_0);
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5->devices); VAR_7++) {
  if (VAR_8 & VAR_5->devices[VAR_7].config->irq_mask) {
   FUNC_1(VAR_5, VAR_5->devices + VAR_7);
   VAR_6 = 1;
  }
 }

 if (VAR_6)
  FUNC_5(VAR_5->devfreq);

 FUNC_4(&VAR_5->devfreq->lock);

 return VAR_6 ? VAR_1 : VAR_2;
}
