
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sp_device {int dev; TYPE_1__* psp_data; } ;
struct TYPE_2__ {scalar_t__ sev_state; int build; int api_minor; int api_major; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int) ;
 struct sp_device* FUNC_7 () ;

void FUNC_8(void)
{
 struct sp_device *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = FUNC_7();
 if (!VAR_4)
  return;

 VAR_1 = VAR_4->psp_data;

 VAR_3 = VAR_2;

 if (FUNC_2())
  goto err;
 if (VAR_1->sev_state != VAR_0) {
  FUNC_4(((void*)0));
  VAR_1->sev_state = VAR_0;
 }

 if (FUNC_6(0, 15) &&
     FUNC_5(VAR_1->dev) == 0)
  FUNC_2();


 VAR_6 = FUNC_3(&VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_4->dev, "SEV: failed to INIT error %#x\n", VAR_5);
  return;
 }

 FUNC_1(VAR_4->dev, "SEV API:%d.%d build:%d\n", VAR_1->api_major,
   VAR_1->api_minor, VAR_1->build);

 return;

err:
 VAR_1 = ((void*)0);
}
