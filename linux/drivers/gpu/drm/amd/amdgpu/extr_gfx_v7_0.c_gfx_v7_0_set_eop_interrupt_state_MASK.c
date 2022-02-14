
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_irq_src {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;
 int FUNC_0 (struct amdgpu_device*,int,int,int) ;
 int FUNC_1 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_0,
         struct amdgpu_irq_src *VAR_1,
         unsigned VAR_2,
         enum amdgpu_interrupt_state VAR_3)
{
 switch (VAR_2) {
 case 128:
  FUNC_1(VAR_0, VAR_3);
  break;
 case 136:
  FUNC_0(VAR_0, 1, 0, VAR_3);
  break;
 case 135:
  FUNC_0(VAR_0, 1, 1, VAR_3);
  break;
 case 134:
  FUNC_0(VAR_0, 1, 2, VAR_3);
  break;
 case 133:
  FUNC_0(VAR_0, 1, 3, VAR_3);
  break;
 case 132:
  FUNC_0(VAR_0, 2, 0, VAR_3);
  break;
 case 131:
  FUNC_0(VAR_0, 2, 1, VAR_3);
  break;
 case 130:
  FUNC_0(VAR_0, 2, 2, VAR_3);
  break;
 case 129:
  FUNC_0(VAR_0, 2, 3, VAR_3);
  break;
 default:
  break;
 }
 return 0;
}
