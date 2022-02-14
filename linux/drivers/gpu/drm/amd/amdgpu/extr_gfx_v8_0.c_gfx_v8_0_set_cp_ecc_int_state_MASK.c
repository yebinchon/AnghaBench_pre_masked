
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_irq_src {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_15,
      struct amdgpu_irq_src *VAR_16,
      unsigned int VAR_17,
      enum amdgpu_interrupt_state VAR_18)
{
 int VAR_19;

 switch (VAR_18) {
 case 129:
  VAR_19 = 0;
  break;

 case 128:
  VAR_19 = 1;
  break;

 default:
  return -VAR_14;
 }

 FUNC_0(VAR_2, VAR_1, VAR_19);
 FUNC_0(VAR_3, VAR_1, VAR_19);
 FUNC_0(VAR_4, VAR_1, VAR_19);
 FUNC_0(VAR_5, VAR_1, VAR_19);
 FUNC_0(VAR_0, VAR_1, VAR_19);
 FUNC_0(VAR_6, VAR_1,
       VAR_19);
 FUNC_0(VAR_7, VAR_1,
       VAR_19);
 FUNC_0(VAR_8, VAR_1,
       VAR_19);
 FUNC_0(VAR_9, VAR_1,
       VAR_19);
 FUNC_0(VAR_10, VAR_1,
       VAR_19);
 FUNC_0(VAR_11, VAR_1,
       VAR_19);
 FUNC_0(VAR_12, VAR_1,
       VAR_19);
 FUNC_0(VAR_13, VAR_1,
       VAR_19);

 return 0;
}
