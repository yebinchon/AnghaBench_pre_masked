
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dev_groups; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,char*,int *) ;

int FUNC_5(void)
{
 int VAR_5;

 VAR_3 = FUNC_2(VAR_0, "drm_dp_aux_dev");
 if (FUNC_0(VAR_3)) {
  return FUNC_1(VAR_3);
 }
 VAR_3->dev_groups = VAR_4;

 VAR_5 = FUNC_4(0, "aux", &VAR_1);
 if (VAR_5 < 0)
  goto out;
 VAR_2 = VAR_5;

 return 0;
out:
 FUNC_3(VAR_3);
 return VAR_5;
}
