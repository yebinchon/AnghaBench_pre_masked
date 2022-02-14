
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_sata_channel {int pm_level; int mtx; int r_mem; int unit; int r_irq; int ih; int pm_timer; int sim; int path; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 struct fsl_sata_channel* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ,int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_5)
{
 struct fsl_sata_channel *VAR_6 = FUNC_5(VAR_5);

 FUNC_10(&VAR_6->mtx);
 FUNC_12(VAR_0, VAR_6->path, ((void*)0));

 FUNC_14(VAR_6->path);
 FUNC_13(FUNC_4(VAR_6->sim));
 FUNC_3(VAR_6->sim, VAR_4);
 FUNC_11(&VAR_6->mtx);

 if (VAR_6->pm_level > 3)
  FUNC_2(&VAR_6->pm_timer);
 FUNC_1(VAR_5, VAR_6->r_irq, VAR_6->ih);
 FUNC_0(VAR_5, VAR_2, VAR_1, VAR_6->r_irq);

 FUNC_6(VAR_5);
 FUNC_8(VAR_5);
 FUNC_7(VAR_5);

 FUNC_0(VAR_5, VAR_3, VAR_6->unit, VAR_6->r_mem);
 FUNC_9(&VAR_6->mtx);
 return (0);
}
