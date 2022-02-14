
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_7__ {int enabled; scalar_t__ rptr; scalar_t__ ring_size; } ;
struct TYPE_6__ {int enabled; scalar_t__ rptr; scalar_t__ ring_size; } ;
struct TYPE_5__ {int enabled; scalar_t__ rptr; } ;
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
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct amdgpu_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_5 (int *,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct amdgpu_device *VAR_18)
{
 u32 VAR_19 = FUNC_2(VAR_4, 0, VAR_9);

 VAR_19 = FUNC_1(VAR_19, VAR_1, VAR_8, 0);
 VAR_19 = FUNC_1(VAR_19, VAR_1, VAR_0, 0);
 if (FUNC_4(VAR_18)) {
  if (FUNC_5(&VAR_18->psp, VAR_5, VAR_19)) {
   FUNC_0("PSP program IH_RB_CNTL failed!\n");
   return;
  }
 } else {
  FUNC_3(VAR_4, 0, VAR_9, VAR_19);
 }


 FUNC_3(VAR_4, 0, VAR_12, 0);
 FUNC_3(VAR_4, 0, VAR_15, 0);
 VAR_18->irq.ih.enabled = 0;
 VAR_18->irq.ih.rptr = 0;

 if (VAR_18->irq.ih1.ring_size) {
  VAR_19 = FUNC_2(VAR_4, 0, VAR_10);
  VAR_19 = FUNC_1(VAR_19, VAR_2,
        VAR_8, 0);
  if (FUNC_4(VAR_18)) {
   if (FUNC_5(&VAR_18->psp, VAR_6,
      VAR_19)) {
    FUNC_0("program IH_RB_CNTL_RING1 failed!\n");
    return;
   }
  } else {
   FUNC_3(VAR_4, 0, VAR_10, VAR_19);
  }

  FUNC_3(VAR_4, 0, VAR_13, 0);
  FUNC_3(VAR_4, 0, VAR_16, 0);
  VAR_18->irq.ih1.enabled = 0;
  VAR_18->irq.ih1.rptr = 0;
 }

 if (VAR_18->irq.ih2.ring_size) {
  VAR_19 = FUNC_2(VAR_4, 0, VAR_11);
  VAR_19 = FUNC_1(VAR_19, VAR_3,
        VAR_8, 0);
  if (FUNC_4(VAR_18)) {
   if (FUNC_5(&VAR_18->psp, VAR_7,
      VAR_19)) {
    FUNC_0("program IH_RB_CNTL_RING2 failed!\n");
    return;
   }
  } else {
   FUNC_3(VAR_4, 0, VAR_11, VAR_19);
  }


  FUNC_3(VAR_4, 0, VAR_14, 0);
  FUNC_3(VAR_4, 0, VAR_17, 0);
  VAR_18->irq.ih2.enabled = 0;
  VAR_18->irq.ih2.rptr = 0;
 }
}
