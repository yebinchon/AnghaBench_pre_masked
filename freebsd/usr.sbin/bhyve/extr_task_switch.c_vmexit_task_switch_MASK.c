
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct vmctx {int dummy; } ;
struct vm_guest_paging {scalar_t__ cpu_mode; scalar_t__ cpl; } ;
struct vm_task_switch {int tsssel; int ext; int reason; int errcode; struct vm_guest_paging paging; scalar_t__ errcode_valid; } ;
struct TYPE_2__ {struct vm_task_switch task_switch; } ;
struct vm_exit {scalar_t__ inst_length; scalar_t__ rip; TYPE_1__ u; } ;
struct user_segment_descriptor {int sd_type; } ;
struct tss32 {int tss_eip; } ;
struct seg_desc {int limit; int base; scalar_t__ access; } ;
struct iovec {int dummy; } ;
typedef enum task_switch_reason { ____Placeholder_task_switch_reason } task_switch_reason ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vmctx*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct vmctx*,int,int ,int) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct vmctx*,int,struct vm_guest_paging*,int,struct user_segment_descriptor*,int*) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (struct iovec*) ;
 int FUNC_13 (struct vmctx*,int,struct vm_guest_paging*,int,int ,int*) ;
 int FUNC_14 (struct vmctx*,int,struct vm_task_switch*,int,struct user_segment_descriptor*,int*) ;
 int FUNC_15 (struct vmctx*,int,int ,int,int) ;
 int VAR_19 ;
 int FUNC_16 (struct vmctx*,int,struct vm_task_switch*,int,struct tss32*,struct iovec*,int*) ;
 int FUNC_17 (struct vmctx*,int,struct vm_task_switch*,scalar_t__,struct tss32*,struct iovec*) ;
 int FUNC_18 (struct vmctx*,int,int ,struct seg_desc*) ;
 struct seg_desc FUNC_19 (struct user_segment_descriptor*) ;
 int FUNC_20 (struct vmctx*,int,struct vm_guest_paging*,int,int,int,struct iovec*,int ,int*) ;
 int FUNC_21 (struct vmctx*,int,struct iovec*,struct tss32*,int) ;
 int FUNC_22 (struct vmctx*,int,int ,int*,scalar_t__*,scalar_t__*) ;
 int FUNC_23 (struct vmctx*,int,int ) ;
 int FUNC_24 (struct vmctx*,int,int ,int ) ;

int
FUNC_25(struct vmctx *VAR_20, struct vm_exit *VAR_21, int *VAR_22)
{
 struct seg_desc VAR_23;
 struct tss32 VAR_24, VAR_25;
 struct vm_task_switch *VAR_26;
 struct vm_guest_paging *VAR_27, VAR_28;
 struct user_segment_descriptor VAR_29, VAR_30;
 struct iovec VAR_31[2], VAR_32[2];
 uint64_t VAR_33, VAR_34;
 uint32_t VAR_35, VAR_36, VAR_37;
 int VAR_38, VAR_39, VAR_40, VAR_41, VAR_42, VAR_43, VAR_44;
 enum task_switch_reason VAR_45;
 uint16_t VAR_46, VAR_47;

 VAR_26 = &VAR_21->u.task_switch;
 VAR_46 = VAR_26->tsssel;
 VAR_39 = VAR_21->u.task_switch.ext;
 VAR_45 = VAR_21->u.task_switch.reason;
 VAR_27 = &VAR_21->u.task_switch.paging;
 VAR_44 = *VAR_22;

 FUNC_9(VAR_27->cpu_mode == VAR_0);




 VAR_35 = VAR_21->rip + VAR_21->inst_length;







 VAR_28 = *VAR_27;
 VAR_28.cpl = 0;


 VAR_38 = FUNC_14(VAR_20, VAR_44, VAR_26, VAR_46, &VAR_29,
     &VAR_40);
 FUNC_0(VAR_38, VAR_40);

 VAR_23 = FUNC_19(&VAR_29);


 VAR_42 = FUNC_5(VAR_23.access);
 if (VAR_42 != VAR_9 && VAR_42 != VAR_10 &&
     VAR_42 != VAR_7 && VAR_42 != VAR_8) {
  FUNC_15(VAR_20, VAR_44, VAR_4, VAR_46, VAR_39);
  goto done;
 }


 if (!FUNC_4(VAR_23.access)) {
  FUNC_15(VAR_20, VAR_44, VAR_3, VAR_46, VAR_39);
  goto done;
 }





 if (VAR_42 == VAR_9 || VAR_42 == VAR_10)
  VAR_41 = 104 - 1;
 else if (VAR_42 == VAR_7 || VAR_42 == VAR_8)
  VAR_41 = 44 - 1;
 else
  VAR_41 = 0;

 FUNC_9(VAR_41 > 0);
 if (VAR_23.limit < VAR_41) {
  FUNC_15(VAR_20, VAR_44, VAR_4, VAR_46, VAR_39);
  goto done;
 }


 if (VAR_45 == VAR_12 && !FUNC_8(VAR_42)) {
  FUNC_15(VAR_20, VAR_44, VAR_4, VAR_46, VAR_39);
  goto done;
 }





 if (VAR_45 != VAR_12 && FUNC_8(VAR_42)) {
  FUNC_15(VAR_20, VAR_44, VAR_2, VAR_46, VAR_39);
  goto done;
 }


 VAR_38 = FUNC_20(VAR_20, VAR_44, &VAR_28, VAR_23.base, VAR_41 + 1,
     VAR_5 | VAR_6, VAR_31, FUNC_12(VAR_31), &VAR_40);
 FUNC_0(VAR_38, VAR_40);
 FUNC_21(VAR_20, VAR_44, VAR_31, &VAR_25, VAR_41 + 1);


 VAR_47 = FUNC_1(VAR_20, VAR_44, VAR_18);
 if (FUNC_3(VAR_47) || FUNC_2(VAR_47) == 0) {






  FUNC_15(VAR_20, VAR_44, VAR_4, VAR_47, VAR_26->ext);
  goto done;
 }


 VAR_38 = FUNC_22(VAR_20, VAR_44, VAR_18, &VAR_34, &VAR_36,
     &VAR_37);
 FUNC_9(VAR_38 == 0);
 FUNC_9(!FUNC_6(VAR_37) && FUNC_4(VAR_37));
 VAR_43 = FUNC_5(VAR_37);
 FUNC_9(VAR_43 == VAR_9 || VAR_43 == VAR_7);


 VAR_38 = FUNC_14(VAR_20, VAR_44, VAR_26, VAR_47, &VAR_30,
     &VAR_40);
 FUNC_0(VAR_38, VAR_40);


 VAR_38 = FUNC_20(VAR_20, VAR_44, &VAR_28, VAR_34, VAR_41 + 1,
     VAR_5 | VAR_6, VAR_32, FUNC_12(VAR_32), &VAR_40);
 FUNC_0(VAR_38, VAR_40);
 FUNC_21(VAR_20, VAR_44, VAR_32, &VAR_24, VAR_41 + 1);





 if (VAR_45 == VAR_12 || VAR_45 == VAR_13) {
  VAR_30.sd_type &= ~0x2;
  VAR_38 = FUNC_10(VAR_20, VAR_44, &VAR_28, VAR_47,
      &VAR_30, &VAR_40);
  FUNC_0(VAR_38, VAR_40);
 }

 if (VAR_42 == VAR_7 || VAR_42 == VAR_8) {
  FUNC_11(VAR_19, "Task switch to 16-bit TSS not supported\n");
  return (VAR_14);
 }


 FUNC_17(VAR_20, VAR_44, VAR_26, VAR_35, &VAR_24, VAR_32);





 if (VAR_45 != VAR_12) {
  VAR_29.sd_type |= 0x2;
  VAR_38 = FUNC_10(VAR_20, VAR_44, &VAR_28, VAR_46,
      &VAR_29, &VAR_40);
  FUNC_0(VAR_38, VAR_40);
 }


 FUNC_7(VAR_20, VAR_44, VAR_18, VAR_46);


 VAR_23 = FUNC_19(&VAR_29);
 FUNC_18(VAR_20, VAR_44, VAR_18, &VAR_23);


 VAR_33 = FUNC_1(VAR_20, VAR_44, VAR_16);
 FUNC_7(VAR_20, VAR_44, VAR_16, VAR_33 | VAR_1);






 VAR_38 = FUNC_24(VAR_20, VAR_44, VAR_17, VAR_25.tss_eip);
 FUNC_9(VAR_38 == 0);


 VAR_38 = FUNC_16(VAR_20, VAR_44, VAR_26, VAR_47, &VAR_25, VAR_31,
     &VAR_40);
 FUNC_0(VAR_38, VAR_40);






 if (VAR_26->errcode_valid) {
  FUNC_9(VAR_26->ext);
  FUNC_9(VAR_26->reason == VAR_11);
  VAR_38 = FUNC_13(VAR_20, VAR_44, &VAR_26->paging, VAR_42,
      VAR_26->errcode, &VAR_40);
  FUNC_0(VAR_38, VAR_40);
 }
 if (VAR_26->reason == VAR_11) {
  VAR_38 = FUNC_23(VAR_20, VAR_44, 0);
  FUNC_9(VAR_38 == 0);
 }




done:
 return (VAR_15);
}
