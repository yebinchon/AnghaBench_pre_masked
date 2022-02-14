
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * hpd_eop_obj; } ;
struct radeon_device {TYPE_1__ mec; int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct radeon_device *VAR_0)
{
 int VAR_1;

 if (VAR_0->mec.hpd_eop_obj) {
  VAR_1 = FUNC_1(VAR_0->mec.hpd_eop_obj, 0);
  if (FUNC_5(VAR_1 != 0))
   FUNC_0(VAR_0->dev, "(%d) reserve HPD EOP bo failed\n", VAR_1);
  FUNC_2(VAR_0->mec.hpd_eop_obj);
  FUNC_4(VAR_0->mec.hpd_eop_obj);

  FUNC_3(&VAR_0->mec.hpd_eop_obj);
  VAR_0->mec.hpd_eop_obj = ((void*)0);
 }
}
