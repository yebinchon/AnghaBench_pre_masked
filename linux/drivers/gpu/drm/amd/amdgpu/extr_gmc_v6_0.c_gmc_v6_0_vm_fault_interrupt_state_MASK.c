
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_irq_src {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;




 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_8,
          struct amdgpu_irq_src *VAR_9,
          unsigned VAR_10,
          enum amdgpu_interrupt_state VAR_11)
{
 u32 VAR_12;
 u32 VAR_13 = (VAR_2 |
      VAR_0 |
      VAR_1 |
      VAR_4 |
      VAR_3 |
      VAR_5);

 switch (VAR_11) {
 case 129:
  VAR_12 = FUNC_0(VAR_6);
  VAR_12 &= ~VAR_13;
  FUNC_1(VAR_6, VAR_12);
  VAR_12 = FUNC_0(VAR_7);
  VAR_12 &= ~VAR_13;
  FUNC_1(VAR_7, VAR_12);
  break;
 case 128:
  VAR_12 = FUNC_0(VAR_6);
  VAR_12 |= VAR_13;
  FUNC_1(VAR_6, VAR_12);
  VAR_12 = FUNC_0(VAR_7);
  VAR_12 |= VAR_13;
  FUNC_1(VAR_7, VAR_12);
  break;
 default:
  break;
 }

 return 0;
}
