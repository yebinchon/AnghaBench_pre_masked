
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ta_fw; int * asd_fw; int * sos_fw; } ;
struct amdgpu_device {TYPE_1__ psp; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;

 FUNC_0(VAR_1->psp.sos_fw);
 VAR_1->psp.sos_fw = ((void*)0);
 FUNC_0(VAR_1->psp.asd_fw);
 VAR_1->psp.asd_fw = ((void*)0);
 if (VAR_1->psp.ta_fw) {
  FUNC_0(VAR_1->psp.ta_fw);
  VAR_1->psp.ta_fw = ((void*)0);
 }
 return 0;
}
