
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_ssi_controller {int fck_nb; int fck; int gdd_tasklet; } ;
struct hsi_controller {int id; } ;


 int FUNC_0 (int ,int *) ;
 struct omap_ssi_controller* FUNC_1 (struct hsi_controller*) ;
 int FUNC_2 (struct hsi_controller*) ;
 int FUNC_3 (int *,int) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct hsi_controller *VAR_1)
{
 struct omap_ssi_controller *VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = VAR_1->id;
 FUNC_4(&VAR_2->gdd_tasklet);
 FUNC_2(VAR_1);
 FUNC_0(VAR_2->fck, &VAR_2->fck_nb);
 FUNC_3(&VAR_0, VAR_3);
}
