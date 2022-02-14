
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_queue {int irq_name; int irq; int devino; int qhandle; } ;
struct spu_mdesc_info {int dummy; } ;
struct TYPE_2__ {int * irqs; } ;
struct platform_device {TYPE_1__ archdata; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*,struct spu_mdesc_info*,int ) ;
 int FUNC_1 (int ,int ,int ,int ,struct spu_queue*) ;
 int FUNC_2 (int ,char*,char const*,int) ;
 unsigned long FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1, struct spu_mdesc_info *VAR_2,
         const char *VAR_3, struct spu_queue *VAR_4,
         irq_handler_t VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_4->qhandle, &VAR_4->devino);
 if (VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_4->devino);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_4->irq = VAR_1->archdata.irqs[VAR_7];

 FUNC_2(VAR_4->irq_name, "%s-%d", VAR_3, VAR_7);

 return FUNC_1(VAR_4->irq, VAR_5, 0, VAR_4->irq_name, VAR_4);
}
