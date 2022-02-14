
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtip_work {int completed; int work; int cpu_binding; } ;
struct mtip_port {scalar_t__* completed; scalar_t__ mmio; } ;
struct driver_data {scalar_t__ mmio; int dd_flag; int pdev; struct mtip_work* work; int isr_workq; int irq_workers_active; struct mtip_port* port; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct driver_data*,int) ;
 int FUNC_6 (struct driver_data*,int) ;
 int FUNC_7 (struct mtip_port*,int ,int) ;
 int FUNC_8 (int ,int ,int *) ;
 void* FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static inline irqreturn_t FUNC_13(struct driver_data *VAR_9)
{
 struct driver_data *VAR_10 = (struct driver_data *) VAR_9;
 struct mtip_port *VAR_11 = VAR_10->port;
 u32 VAR_12, VAR_13;
 int VAR_14 = VAR_2;
 int VAR_15 = 1, VAR_16, VAR_17;
 struct mtip_work *VAR_18;

 VAR_12 = FUNC_9(VAR_10->mmio + VAR_0);
 if (VAR_12) {
  VAR_14 = VAR_1;


  VAR_13 = FUNC_9(VAR_11->mmio + VAR_8);
  if (FUNC_11(VAR_13 == 0xFFFFFFFF)) {
   FUNC_4(VAR_10->pdev);
   return VAR_1;
  }
  FUNC_12(VAR_13, VAR_11->mmio + VAR_8);


  if (FUNC_3(VAR_13 & VAR_7)) {
   VAR_15 = 0;
   FUNC_0(FUNC_1(&VAR_10->irq_workers_active) != 0);


   for (VAR_16 = 0, VAR_17 = 0; VAR_16 < VAR_4;
         VAR_16++) {
    VAR_18 = &VAR_10->work[VAR_16];
    VAR_18->completed = FUNC_9(VAR_11->completed[VAR_16]);
    if (VAR_18->completed)
     VAR_17++;
   }

   FUNC_2(&VAR_10->irq_workers_active, VAR_17);
   if (VAR_17) {
    for (VAR_16 = 1; VAR_16 < VAR_4; VAR_16++) {
     VAR_18 = &VAR_10->work[VAR_16];
     if (VAR_18->completed)
      FUNC_8(
       VAR_18->cpu_binding,
       VAR_10->isr_workq,
       &VAR_18->work);
    }

    if (FUNC_3(VAR_10->work[0].completed))
     FUNC_7(VAR_11, 0,
       VAR_10->work[0].completed);

   } else {




    VAR_15 = 1;
   }
  }

  if (FUNC_11(VAR_13 & VAR_5)) {
   if (FUNC_11(FUNC_4(VAR_10->pdev))) {

    return VAR_1;
   }
   if (FUNC_10(VAR_3,
       &VAR_10->dd_flag))
    return VAR_14;

   FUNC_5(VAR_10, VAR_13 & VAR_5);
  }

  if (FUNC_11(VAR_13 & VAR_6))
   FUNC_6(VAR_10, VAR_13 & VAR_6);
 }


 if (FUNC_11(VAR_15))
  FUNC_12(VAR_12, VAR_10->mmio + VAR_0);

 return VAR_14;
}
