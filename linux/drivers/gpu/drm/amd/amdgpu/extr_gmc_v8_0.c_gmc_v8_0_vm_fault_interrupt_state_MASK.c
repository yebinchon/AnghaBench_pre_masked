
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
 int VAR_6 ;
 int FUNC_1 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_9,
          struct amdgpu_irq_src *VAR_10,
          unsigned VAR_11,
          enum amdgpu_interrupt_state VAR_12)
{
 u32 VAR_13;
 u32 VAR_14 = (VAR_3 |
      VAR_0 |
      VAR_2 |
      VAR_5 |
      VAR_4 |
      VAR_6 |
      VAR_1);

 switch (VAR_12) {
 case 129:

  VAR_13 = FUNC_0(VAR_7);
  VAR_13 &= ~VAR_14;
  FUNC_1(VAR_7, VAR_13);

  VAR_13 = FUNC_0(VAR_8);
  VAR_13 &= ~VAR_14;
  FUNC_1(VAR_8, VAR_13);
  break;
 case 128:

  VAR_13 = FUNC_0(VAR_7);
  VAR_13 |= VAR_14;
  FUNC_1(VAR_7, VAR_13);

  VAR_13 = FUNC_0(VAR_8);
  VAR_13 |= VAR_14;
  FUNC_1(VAR_8, VAR_13);
  break;
 default:
  break;
 }

 return 0;
}
