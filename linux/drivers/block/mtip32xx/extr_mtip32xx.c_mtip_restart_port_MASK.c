
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtip_port {TYPE_2__* dd; scalar_t__ mmio; } ;
struct TYPE_4__ {TYPE_1__* pdev; int dd_flag; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 unsigned long VAR_5 ;
 int FUNC_2 (int) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (struct mtip_port*,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct mtip_port*) ;
 int FUNC_7 (struct mtip_port*) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (unsigned long,unsigned long) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct mtip_port *VAR_6)
{
 unsigned long VAR_7;


 FUNC_4(VAR_6, 0);


 VAR_7 = VAR_5 + FUNC_3(500);
 while ((FUNC_8(VAR_6->mmio + VAR_1) & VAR_2)
   && FUNC_10(VAR_5, VAR_7))
  ;

 if (FUNC_9(VAR_0, &VAR_6->dd->dd_flag))
  return;





 if (FUNC_8(VAR_6->mmio + VAR_1) & VAR_2) {
  FUNC_1(&VAR_6->dd->pdev->dev,
   "PxCMD.CR not clear, escalating reset\n");

  if (FUNC_5(VAR_6->dd))
   FUNC_0(&VAR_6->dd->pdev->dev,
    "HBA reset escalation failed.\n");


  FUNC_2(30);
 }

 FUNC_1(&VAR_6->dd->pdev->dev, "Issuing COM reset\n");


 FUNC_11(FUNC_8(VAR_6->mmio + VAR_3) |
    1, VAR_6->mmio + VAR_3);
 FUNC_8(VAR_6->mmio + VAR_3);


 VAR_7 = VAR_5 + FUNC_3(1);
 while (FUNC_10(VAR_5, VAR_7))
  ;

 if (FUNC_9(VAR_0, &VAR_6->dd->dd_flag))
  return;


 FUNC_11(FUNC_8(VAR_6->mmio + VAR_3) & ~1,
    VAR_6->mmio + VAR_3);
 FUNC_8(VAR_6->mmio + VAR_3);


 VAR_7 = VAR_5 + FUNC_3(500);
 while (((FUNC_8(VAR_6->mmio + VAR_4) & 0x01) == 0)
    && FUNC_10(VAR_5, VAR_7))
  ;

 if (FUNC_9(VAR_0, &VAR_6->dd->dd_flag))
  return;

 if ((FUNC_8(VAR_6->mmio + VAR_4) & 0x01) == 0)
  FUNC_1(&VAR_6->dd->pdev->dev,
   "COM reset failed\n");

 FUNC_6(VAR_6);
 FUNC_7(VAR_6);

}
