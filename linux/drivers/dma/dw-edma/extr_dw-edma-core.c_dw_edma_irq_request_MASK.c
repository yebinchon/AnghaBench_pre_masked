
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct dw_edma_chip {struct dw_edma* dw; struct device* dev; } ;
struct dw_edma {scalar_t__ wr_ch_cnt; scalar_t__ rd_ch_cnt; int nr_irqs; TYPE_1__* irq; int name; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int msi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int*,scalar_t__*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct dw_edma_chip *VAR_5,
          u32 *VAR_6, u32 *VAR_7)
{
 struct device *VAR_8 = VAR_5->dev;
 struct dw_edma *VAR_9 = VAR_5->dw;
 u32 VAR_10 = 1;
 u32 VAR_11 = 1;
 int VAR_12, VAR_13 = 0;
 u32 VAR_14;

 VAR_14 = VAR_9->wr_ch_cnt + VAR_9->rd_ch_cnt;

 if (VAR_9->nr_irqs < 1)
  return -VAR_0;

 if (VAR_9->nr_irqs == 1) {

  VAR_13 = FUNC_4(FUNC_3(FUNC_5(VAR_8), 0),
      VAR_2,
      VAR_1, VAR_9->name, &VAR_9->irq[0]);
  if (VAR_13) {
   VAR_9->nr_irqs = 0;
   return VAR_13;
  }

  FUNC_2(FUNC_3(FUNC_5(VAR_8), 0),
       &VAR_9->irq[0].msi);
 } else {

  int VAR_15 = VAR_9->nr_irqs;

  while (VAR_15 && (*VAR_6 + *VAR_7) < VAR_14) {
   FUNC_1(&VAR_15, VAR_6, VAR_9->wr_ch_cnt);
   FUNC_1(&VAR_15, VAR_7, VAR_9->rd_ch_cnt);
  }

  FUNC_0(&VAR_10, *VAR_6, VAR_9->wr_ch_cnt);
  FUNC_0(&VAR_11, *VAR_7, VAR_9->rd_ch_cnt);

  for (VAR_12 = 0; VAR_12 < (*VAR_6 + *VAR_7); VAR_12++) {
   VAR_13 = FUNC_4(FUNC_3(FUNC_5(VAR_8), VAR_12),
       VAR_12 < *VAR_6 ?
      VAR_4 :
      VAR_3,
       VAR_1, VAR_9->name,
       &VAR_9->irq[VAR_12]);
   if (VAR_13) {
    VAR_9->nr_irqs = VAR_12;
    return VAR_13;
   }

   FUNC_2(FUNC_3(FUNC_5(VAR_8), VAR_12),
        &VAR_9->irq[VAR_12].msi);
  }

  VAR_9->nr_irqs = VAR_12;
 }

 return VAR_13;
}
