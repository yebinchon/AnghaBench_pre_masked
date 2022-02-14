
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int enabled; scalar_t__ ring_size; } ;
struct TYPE_6__ {int enabled; scalar_t__ ring_size; } ;
struct TYPE_5__ {int enabled; } ;
struct TYPE_8__ {TYPE_3__ ih2; TYPE_2__ ih1; TYPE_1__ ih; } ;
struct amdgpu_device {TYPE_4__ irq; int psp; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct amdgpu_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct amdgpu_device *VAR_12)
{
 u32 VAR_13 = FUNC_2(VAR_4, 0, VAR_9);

 VAR_13 = FUNC_1(VAR_13, VAR_1, VAR_8, 1);
 VAR_13 = FUNC_1(VAR_13, VAR_1, VAR_0, 1);
 if (FUNC_4(VAR_12)) {
  if (FUNC_5(&VAR_12->psp, VAR_5, VAR_13)) {
   FUNC_0("PSP program IH_RB_CNTL failed!\n");
   return;
  }
 } else {
  FUNC_3(VAR_4, 0, VAR_9, VAR_13);
 }
 VAR_12->irq.ih.enabled = 1;

 if (VAR_12->irq.ih1.ring_size) {
  VAR_13 = FUNC_2(VAR_4, 0, VAR_10);
  VAR_13 = FUNC_1(VAR_13, VAR_2,
        VAR_8, 1);
  if (FUNC_4(VAR_12)) {
   if (FUNC_5(&VAR_12->psp, VAR_6,
      VAR_13)) {
    FUNC_0("program IH_RB_CNTL_RING1 failed!\n");
    return;
   }
  } else {
   FUNC_3(VAR_4, 0, VAR_10, VAR_13);
  }
  VAR_12->irq.ih1.enabled = 1;
 }

 if (VAR_12->irq.ih2.ring_size) {
  VAR_13 = FUNC_2(VAR_4, 0, VAR_11);
  VAR_13 = FUNC_1(VAR_13, VAR_3,
        VAR_8, 1);
  if (FUNC_4(VAR_12)) {
   if (FUNC_5(&VAR_12->psp, VAR_7,
      VAR_13)) {
    FUNC_0("program IH_RB_CNTL_RING2 failed!\n");
    return;
   }
  } else {
   FUNC_3(VAR_4, 0, VAR_11, VAR_13);
  }
  VAR_12->irq.ih2.enabled = 1;
 }
}
