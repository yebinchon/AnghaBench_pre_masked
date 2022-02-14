
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * rfbdev; } ;
struct amdgpu_device {TYPE_1__ mode_info; int ddev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct amdgpu_device *VAR_0)
{
 if (!VAR_0->mode_info.rfbdev)
  return;

 FUNC_0(VAR_0->ddev, VAR_0->mode_info.rfbdev);
 FUNC_1(VAR_0->mode_info.rfbdev);
 VAR_0->mode_info.rfbdev = ((void*)0);
}
