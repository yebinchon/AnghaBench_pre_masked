
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sp_device {struct psp_device* psp_data; } ;
struct psp_device {scalar_t__ sev_misc; } ;
struct TYPE_2__ {int refcount; } ;


 int FUNC_0 (int *,int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sp_device*,struct psp_device*) ;

void FUNC_2(struct sp_device *VAR_2)
{
 struct psp_device *VAR_3 = VAR_2->psp_data;

 if (!VAR_3)
  return;

 if (VAR_3->sev_misc)
  FUNC_0(&VAR_0->refcount, VAR_1);

 FUNC_1(VAR_2, VAR_3);
}
