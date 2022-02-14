
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sp_device {struct ccp_device* ccp_data; } ;
struct ccp_device {TYPE_2__* vdata; } ;
struct TYPE_4__ {TYPE_1__* perform; } ;
struct TYPE_3__ {int (* destroy ) (struct ccp_device*) ;} ;


 int FUNC_0 (struct ccp_device*) ;

void FUNC_1(struct sp_device *VAR_0)
{
 struct ccp_device *VAR_1 = VAR_0->ccp_data;

 if (!VAR_1)
  return;

 VAR_1->vdata->perform->destroy(VAR_1);
}
