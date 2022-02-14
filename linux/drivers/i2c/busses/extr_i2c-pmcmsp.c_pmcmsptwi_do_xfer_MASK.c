
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pmcmsptwi_data {int last_result; int wait; scalar_t__ irq; scalar_t__ iobase; } ;
typedef enum pmcmsptwi_xfer_result { ____Placeholder_pmcmsptwi_xfer_result } pmcmsptwi_xfer_result ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (struct pmcmsptwi_data*) ;
 int FUNC_3 (int ,scalar_t__) ;
 unsigned long FUNC_4 (int *,int ) ;

__attribute__((used)) static enum pmcmsptwi_xfer_result FUNC_5(
   u32 VAR_4, struct pmcmsptwi_data *VAR_5)
{
 FUNC_1(&VAR_3.dev, "Writing cmd reg 0x%08x\n", VAR_4);
 FUNC_3(VAR_4, VAR_5->iobase + VAR_1);
 if (VAR_5->irq) {
  unsigned long VAR_6 = FUNC_4(
      &VAR_5->wait, VAR_0);
  if (VAR_6 == 0) {
   FUNC_1(&VAR_3.dev,
    "Result: IRQ timeout\n");
   FUNC_0(&VAR_5->wait);
   VAR_5->last_result = VAR_2;
  }
 } else
  FUNC_2(VAR_5);

 return VAR_5->last_result;
}
