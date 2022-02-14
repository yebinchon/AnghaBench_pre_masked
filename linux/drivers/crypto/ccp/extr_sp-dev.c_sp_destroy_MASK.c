
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sp_device {TYPE_1__* dev_vdata; } ;
struct TYPE_2__ {scalar_t__ psp_vdata; scalar_t__ ccp_vdata; } ;


 int FUNC_0 (struct sp_device*) ;
 int FUNC_1 (struct sp_device*) ;
 int FUNC_2 (struct sp_device*) ;

void FUNC_3(struct sp_device *VAR_0)
{
 if (VAR_0->dev_vdata->ccp_vdata)
  FUNC_0(VAR_0);

 if (VAR_0->dev_vdata->psp_vdata)
  FUNC_1(VAR_0);

 FUNC_2(VAR_0);
}
