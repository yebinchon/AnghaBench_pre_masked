
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct resource {int start; } ;
struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct ls_scfg_msi_cfg {int ibs_shift; } ;
struct ls_scfg_msi {int irqs_num; scalar_t__ msir_num; void* msir; void* used; struct ls_scfg_msi_cfg* cfg; int lock; struct platform_device* pdev; int msiir_addr; int regs; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,int ,int) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,struct resource*) ;
 void* FUNC_6 (TYPE_1__*,scalar_t__,int,int ) ;
 struct ls_scfg_msi* FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (struct ls_scfg_msi*) ;
 int VAR_5 ;
 int FUNC_9 (struct ls_scfg_msi*,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 (int ) ;
 struct of_device_id* FUNC_12 (int ,TYPE_1__*) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct ls_scfg_msi*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_7)
{
 const struct of_device_id *VAR_8;
 struct ls_scfg_msi *VAR_9;
 struct resource *VAR_10;
 int VAR_11, VAR_12;

 VAR_8 = FUNC_12(VAR_5, &VAR_7->dev);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_7(&VAR_7->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->cfg = (struct ls_scfg_msi_cfg *) VAR_8->data;

 VAR_10 = FUNC_13(VAR_7, VAR_3, 0);
 VAR_9->regs = FUNC_5(&VAR_7->dev, VAR_10);
 if (FUNC_1(VAR_9->regs)) {
  FUNC_4(&VAR_7->dev, "failed to initialize 'regs'\n");
  return FUNC_2(VAR_9->regs);
 }
 VAR_9->msiir_addr = VAR_10->start;

 VAR_9->pdev = VAR_7;
 FUNC_15(&VAR_9->lock);

 VAR_9->irqs_num = VAR_4 *
        (1 << VAR_9->cfg->ibs_shift);
 VAR_9->used = FUNC_6(&VAR_7->dev,
        FUNC_0(VAR_9->irqs_num),
        sizeof(*VAR_9->used),
        VAR_2);
 if (!VAR_9->used)
  return -VAR_1;




 FUNC_3(VAR_9->used, 0, VAR_9->irqs_num);

 VAR_9->msir_num = FUNC_11(VAR_7->dev.of_node);

 if (VAR_6) {
  u32 VAR_13;

  VAR_13 = FUNC_10();
  if (VAR_9->msir_num >= VAR_13)
   VAR_9->msir_num = VAR_13;
  else
   VAR_6 = 0;
 }

 VAR_9->msir = FUNC_6(&VAR_7->dev, VAR_9->msir_num,
          sizeof(*VAR_9->msir),
          VAR_2);
 if (!VAR_9->msir)
  return -VAR_1;

 for (VAR_11 = 0; VAR_11 < VAR_9->msir_num; VAR_11++)
  FUNC_9(VAR_9, VAR_11);

 VAR_12 = FUNC_8(VAR_9);
 if (VAR_12)
  return VAR_12;

 FUNC_14(VAR_7, VAR_9);

 return 0;
}
