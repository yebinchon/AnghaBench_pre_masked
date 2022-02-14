
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sk_buff {int* data; } ;
struct layer2 {int vr; int vs; int va; int flag; int i_queue; int T203; int t203; } ;
struct FsmInst {scalar_t__ state; struct layer2* userdata; } ;


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
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct layer2*,int ,int ,int) ;
 int FUNC_2 (struct layer2*) ;
 int FUNC_3 (struct layer2*) ;
 int FUNC_4 (struct layer2*,int ) ;
 int FUNC_5 (struct layer2*,int ,struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct layer2*,int) ;
 int FUNC_7 (struct FsmInst*,int ,int *) ;
 int FUNC_8 (int *,int ,int ,int *,int) ;
 int FUNC_9 (struct FsmInst*) ;
 int FUNC_10 (struct layer2*,int) ;
 int FUNC_11 (struct layer2*,int) ;
 int FUNC_12 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (struct layer2*,int) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 scalar_t__ FUNC_16 (int ,int *) ;
 scalar_t__ FUNC_17 (int ,int *) ;

__attribute__((used)) static void
FUNC_18(struct FsmInst *VAR_12, int VAR_13, void *VAR_14)
{
 struct layer2 *VAR_15 = VAR_12->userdata;
 struct sk_buff *VAR_16 = VAR_14;
 int VAR_17, VAR_18;
 u_int VAR_19, VAR_20;

 VAR_18 = FUNC_3(VAR_15);
 if (FUNC_17(VAR_4, &VAR_15->flag)) {
  VAR_17 = ((VAR_16->data[VAR_18 + 1] & 0x1) == 0x1);
  VAR_19 = VAR_16->data[VAR_18] >> 1;
  VAR_20 = (VAR_16->data[VAR_18 + 1] >> 1) & 0x7f;
 } else {
  VAR_17 = (VAR_16->data[VAR_18] & 0x10);
  VAR_19 = (VAR_16->data[VAR_18] >> 1) & 0x7;
  VAR_20 = (VAR_16->data[VAR_18] >> 5) & 0x7;
 }
 if (FUNC_17(VAR_5, &VAR_15->flag)) {
  FUNC_0(VAR_16);
  if (VAR_17)
   FUNC_2(VAR_15);
 } else {
  if (VAR_15->vr == VAR_19) {
   VAR_15->vr++;
   if (FUNC_17(VAR_4, &VAR_15->flag))
    VAR_15->vr %= 128;
   else
    VAR_15->vr %= 8;
   FUNC_15(VAR_7, &VAR_15->flag);
   if (VAR_17)
    FUNC_2(VAR_15);
   else
    FUNC_16(VAR_3, &VAR_15->flag);
   FUNC_12(VAR_16, FUNC_4(VAR_15, 0));
   FUNC_5(VAR_15, VAR_0, VAR_16);
  } else {

   FUNC_0(VAR_16);
   if (FUNC_16(VAR_7, &VAR_15->flag)) {
    if (VAR_17)
     FUNC_2(VAR_15);
   } else {
    FUNC_1(VAR_15, VAR_8, VAR_10, VAR_17);
    FUNC_15(VAR_3, &VAR_15->flag);
   }
  }
 }
 if (FUNC_6(VAR_15, VAR_20)) {
  if (!FUNC_17(VAR_6, &VAR_15->flag) &&
      (VAR_12->state == VAR_11)) {
   if (VAR_20 == VAR_15->vs) {
    FUNC_14(VAR_15, 13);
    FUNC_8(&VAR_15->t203, VAR_15->T203,
            VAR_2, ((void*)0), 7);
   } else if (VAR_20 != VAR_15->va)
    FUNC_10(VAR_15, 14);
  }
  FUNC_11(VAR_15, VAR_20);
 } else {
  FUNC_9(VAR_12);
  return;
 }
 if (FUNC_13(&VAR_15->i_queue) && (VAR_12->state == VAR_11))
  FUNC_7(VAR_12, VAR_1, ((void*)0));
 if (FUNC_15(VAR_3, &VAR_15->flag))
  FUNC_1(VAR_15, VAR_9, VAR_10, 0);
}
