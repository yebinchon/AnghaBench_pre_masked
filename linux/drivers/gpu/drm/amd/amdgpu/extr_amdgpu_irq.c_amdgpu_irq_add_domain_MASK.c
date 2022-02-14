
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int domain; } ;
struct amdgpu_device {TYPE_1__ irq; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int *,struct amdgpu_device*) ;

int FUNC_2(struct amdgpu_device *VAR_3)
{
 VAR_3->irq.domain = FUNC_1(((void*)0), VAR_0,
       &VAR_2, VAR_3);
 if (!VAR_3->irq.domain) {
  FUNC_0("GPU irq add domain failed\n");
  return -VAR_1;
 }

 return 0;
}
