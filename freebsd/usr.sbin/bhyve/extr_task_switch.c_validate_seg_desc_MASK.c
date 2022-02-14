
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vmctx {int dummy; } ;
struct vm_guest_paging {int cpl; } ;
struct vm_task_switch {int ext; struct vm_guest_paging paging; } ;
struct user_segment_descriptor {int sd_type; int sd_dpl; int sd_p; } ;
struct seg_desc {int access; scalar_t__ limit; scalar_t__ base; } ;


 int FUNC_0 (struct vmctx*,int,int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;







 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct vmctx*,int,int) ;
 int FUNC_7 (struct vmctx*,int,struct vm_guest_paging*,int,struct user_segment_descriptor*,int*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct vmctx*,int,int,int,int ) ;
 int FUNC_10 (int) ;
 struct seg_desc FUNC_11 (struct user_segment_descriptor*) ;

__attribute__((used)) static int
FUNC_12(struct vmctx *VAR_4, int VAR_5, struct vm_task_switch *VAR_6,
    int VAR_7, struct seg_desc *VAR_8, int *VAR_9)
{
 struct vm_guest_paging VAR_10;
 struct user_segment_descriptor VAR_11;
 int VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16;
 uint16_t VAR_17, VAR_18;
 bool VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;

 VAR_19 = VAR_20 = VAR_21 = VAR_22 = 0;
 switch (VAR_7) {
 case 129:
  VAR_19 = 1;
  break;
 case 134:
  VAR_20 = 1;
  break;
 case 128:
  VAR_21 = 1;
  break;
 case 133:
 case 132:
 case 131:
 case 130:
  VAR_22 = 1;
  break;
 default:
  FUNC_3(0);
 }


 VAR_17 = FUNC_0(VAR_4, VAR_5, VAR_7);


 if (VAR_19 && FUNC_2(VAR_17)) {
  FUNC_9(VAR_4, VAR_5, VAR_2, VAR_17, VAR_6->ext);
  return (1);
 }


 if (FUNC_6(VAR_4, VAR_5, VAR_17)) {
  FUNC_9(VAR_4, VAR_5, VAR_2, VAR_17, VAR_6->ext);
  return (1);
 }


 if (FUNC_1(VAR_17) == 0) {

  if (VAR_20 || VAR_21) {
   FUNC_9(VAR_4, VAR_5, VAR_2, VAR_17, VAR_6->ext);
   return (1);
  }
  VAR_8->base = 0;
  VAR_8->limit = 0;
  VAR_8->access = 0x10000;
  return (0);
 }


 VAR_10 = VAR_6->paging;
 VAR_10.cpl = 0;
 VAR_12 = FUNC_7(VAR_4, VAR_5, &VAR_10, VAR_17, &VAR_11, VAR_9);
 if (VAR_12 || *VAR_9)
  return (VAR_12);


 if ((VAR_19 && !FUNC_8(VAR_11.sd_type)) ||
     (VAR_20 && !FUNC_4(VAR_11.sd_type)) ||
     (VAR_22 && !FUNC_5(VAR_11.sd_type)) ||
     (VAR_21 && !FUNC_10(VAR_11.sd_type))) {
  FUNC_9(VAR_4, VAR_5, VAR_2, VAR_17, VAR_6->ext);
  return (1);
 }


 if (!VAR_11.sd_p) {
  if (VAR_19)
   VAR_13 = VAR_2;
  else if (VAR_21)
   VAR_13 = VAR_1;
  else
   VAR_13 = VAR_0;
  FUNC_9(VAR_4, VAR_5, VAR_13, VAR_17, VAR_6->ext);
  return (1);
 }

 VAR_18 = FUNC_0(VAR_4, VAR_5, 134);
 VAR_14 = VAR_18 & VAR_3;
 VAR_16 = VAR_17 & VAR_3;
 VAR_15 = VAR_11.sd_dpl;

 if (VAR_21 && (VAR_16 != VAR_14 || VAR_15 != VAR_14)) {
  FUNC_9(VAR_4, VAR_5, VAR_2, VAR_17, VAR_6->ext);
  return (1);
 }

 if (VAR_20) {
  VAR_23 = (VAR_11.sd_type & 0x4) ? 1 : 0;
  if ((VAR_23 && (VAR_14 < VAR_15)) ||
      (!VAR_23 && (VAR_14 != VAR_15))) {
   FUNC_9(VAR_4, VAR_5, VAR_2, VAR_17, VAR_6->ext);
   return (1);
  }
 }

 if (VAR_22) {




  if (FUNC_4(VAR_11.sd_type) && (VAR_11.sd_type & 0x4) != 0)
   VAR_23 = 1;
  else
   VAR_23 = 0;

  if (!VAR_23 && (VAR_16 > VAR_15 || VAR_14 > VAR_15)) {
   FUNC_9(VAR_4, VAR_5, VAR_2, VAR_17, VAR_6->ext);
   return (1);
  }
 }
 *VAR_8 = FUNC_11(&VAR_11);
 return (0);
}
