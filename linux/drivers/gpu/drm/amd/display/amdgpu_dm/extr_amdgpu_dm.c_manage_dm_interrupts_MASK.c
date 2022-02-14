
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int pageflip_irq; } ;
struct amdgpu_crtc {int base; int crtc_id; } ;


 int FUNC_0 (struct amdgpu_device*,int ) ;
 int FUNC_1 (struct amdgpu_device*,int *,int) ;
 int FUNC_2 (struct amdgpu_device*,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_device *VAR_0,
     struct amdgpu_crtc *VAR_1,
     bool VAR_2)
{




 int VAR_3 =
  FUNC_0(
   VAR_0,
   VAR_1->crtc_id);

 if (VAR_2) {
  FUNC_4(&VAR_1->base);
  FUNC_1(
   VAR_0,
   &VAR_0->pageflip_irq,
   VAR_3);
 } else {

  FUNC_2(
   VAR_0,
   &VAR_0->pageflip_irq,
   VAR_3);
  FUNC_3(&VAR_1->base);
 }
}
