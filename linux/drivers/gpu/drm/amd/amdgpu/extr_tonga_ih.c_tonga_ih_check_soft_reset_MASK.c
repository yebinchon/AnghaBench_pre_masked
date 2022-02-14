
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int srbm_soft_reset; } ;
struct amdgpu_device {TYPE_1__ irq; } ;


 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_2(void *VAR_4)
{
 struct amdgpu_device *VAR_5 = (struct amdgpu_device *)VAR_4;
 u32 VAR_6 = 0;
 u32 VAR_7 = FUNC_1(VAR_3);

 if (VAR_7 & VAR_2)
  VAR_6 = FUNC_0(VAR_6, VAR_1,
      VAR_0, 1);

 if (VAR_6) {
  VAR_5->irq.srbm_soft_reset = VAR_6;
  return 1;
 } else {
  VAR_5->irq.srbm_soft_reset = 0;
  return 0;
 }
}
