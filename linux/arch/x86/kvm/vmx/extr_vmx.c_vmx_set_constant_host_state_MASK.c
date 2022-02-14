
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct vcpu_vmx {TYPE_2__* loaded_vmcs; } ;
struct TYPE_6__ {int vmexit_ctrl; } ;
struct TYPE_4__ {unsigned long cr3; unsigned long cr4; } ;
struct TYPE_5__ {TYPE_1__ host_state; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (unsigned long) ;
 unsigned long VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 unsigned long FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 unsigned long FUNC_3 () ;
 int VAR_22 ;
 unsigned long VAR_23 ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,unsigned long) ;
 unsigned long FUNC_6 () ;
 TYPE_3__ VAR_24 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,unsigned long) ;
 scalar_t__ VAR_25 ;

void FUNC_11(struct vcpu_vmx *VAR_26)
{
 u32 VAR_27, VAR_28;
 unsigned long VAR_29;
 unsigned long VAR_30, VAR_31, VAR_32;

 VAR_30 = FUNC_6();
 FUNC_0(VAR_30 & VAR_19);
 FUNC_10(VAR_1, VAR_30);





 VAR_31 = FUNC_1();
 FUNC_10(VAR_2, VAR_31);
 VAR_26->loaded_vmcs->host_state.cr3 = VAR_31;


 VAR_32 = FUNC_3();
 FUNC_10(VAR_3, VAR_32);
 VAR_26->loaded_vmcs->host_state.cr4 = VAR_32;

 FUNC_7(VAR_4, VAR_20);
 FUNC_7(VAR_5, VAR_21);
 FUNC_7(VAR_6, VAR_21);

 FUNC_7(VAR_13, VAR_21);
 FUNC_7(VAR_14, VAR_0*8);

 FUNC_10(VAR_11, VAR_23);

 FUNC_10(VAR_12, (unsigned long)VAR_25);

 FUNC_4(VAR_16, VAR_27, VAR_28);
 FUNC_8(VAR_9, VAR_27);
 FUNC_5(VAR_17, VAR_29);
 FUNC_10(VAR_10, VAR_29);

 if (VAR_24.vmexit_ctrl & VAR_18) {
  FUNC_4(VAR_15, VAR_27, VAR_28);
  FUNC_9(VAR_8, VAR_27 | ((u64) VAR_28 << 32));
 }

 if (FUNC_2())
  FUNC_9(VAR_7, VAR_22);
}
