
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_ssi_controller {int gdd_tasklet; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct omap_ssi_controller* FUNC_1 (void*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct omap_ssi_controller *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(&VAR_3->gdd_tasklet);
 FUNC_0(VAR_1);

 return VAR_0;
}
