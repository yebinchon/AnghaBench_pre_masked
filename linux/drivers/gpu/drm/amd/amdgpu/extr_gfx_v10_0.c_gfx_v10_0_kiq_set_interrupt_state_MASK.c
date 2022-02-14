
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {int me; scalar_t__ pipe; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_3__ {struct amdgpu_ring ring; } ;
struct TYPE_4__ {TYPE_1__ kiq; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;



 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_8,
          struct amdgpu_irq_src *VAR_9,
          unsigned int VAR_10,
          enum amdgpu_interrupt_state VAR_11)
{
 uint32_t VAR_12, VAR_13;
 struct amdgpu_ring *VAR_14 = &(VAR_8->gfx.kiq.ring);

 if (VAR_14->me == 1)
  VAR_13 = FUNC_4(VAR_3, 0, VAR_6);
 else
  VAR_13 = FUNC_4(VAR_3, 0, VAR_7);
 VAR_13 += VAR_14->pipe;

 switch (VAR_10) {
 case 128:
  if (VAR_11 == VAR_0) {
   VAR_12 = FUNC_3(VAR_3, 0, VAR_5);
   VAR_12 = FUNC_1(VAR_12, VAR_1,
         VAR_4, 0);
   FUNC_6(VAR_3, 0, VAR_5, VAR_12);

   VAR_12 = FUNC_2(VAR_13);
   VAR_12 = FUNC_1(VAR_12, VAR_2,
         VAR_4, 0);
   FUNC_5(VAR_13, VAR_12);
  } else {
   VAR_12 = FUNC_3(VAR_3, 0, VAR_5);
   VAR_12 = FUNC_1(VAR_12, VAR_1,
         VAR_4, 1);
   FUNC_6(VAR_3, 0, VAR_5, VAR_12);

   VAR_12 = FUNC_2(VAR_13);
   VAR_12 = FUNC_1(VAR_12, VAR_2,
         VAR_4, 1);
   FUNC_5(VAR_13, VAR_12);
  }
  break;
 default:
  FUNC_0();
  break;
 }
 return 0;
}
