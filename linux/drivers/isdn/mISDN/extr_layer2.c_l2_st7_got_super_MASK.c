
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; } ;
struct layer2 {unsigned int vs; unsigned int va; int i_queue; int t203; int T203; int l2m; int flag; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int*,struct layer2*) ;
 scalar_t__ FUNC_1 (int*,struct layer2*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct layer2*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct layer2*) ;
 int FUNC_5 (struct layer2*,unsigned int) ;
 int FUNC_6 (struct layer2*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (struct layer2*,int ,void*) ;
 scalar_t__ FUNC_9 (struct layer2*,unsigned int) ;
 scalar_t__ FUNC_10 (int *,int ,int ,int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (struct FsmInst*,int ,int *) ;
 int FUNC_13 (int *,int ,int ,int *,int) ;
 int FUNC_14 (struct FsmInst*) ;
 int FUNC_15 (struct layer2*,int) ;
 int FUNC_16 (struct layer2*) ;
 int FUNC_17 (struct layer2*,unsigned int) ;
 int FUNC_18 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (struct layer2*,int) ;
 scalar_t__ FUNC_21 (int ,int *) ;

__attribute__((used)) static void
FUNC_22(struct FsmInst *VAR_8, int VAR_9, void *VAR_10)
{
 struct layer2 *VAR_11 = VAR_8->userdata;
 struct sk_buff *VAR_12 = VAR_10;
 int VAR_13, VAR_14, VAR_15 = VAR_7;
 unsigned int VAR_16;

 VAR_14 = *VAR_12->data & 0x2;
 if (FUNC_21(VAR_3, &VAR_11->flag))
  VAR_14 = !VAR_14;

 FUNC_18(VAR_12, FUNC_6(VAR_11));
 if (FUNC_1(VAR_12->data, VAR_11)) {
  FUNC_16(VAR_11);
  VAR_15 = VAR_6;
 } else
  FUNC_2(VAR_11);
 if (FUNC_0(VAR_12->data, VAR_11))
  VAR_15 = VAR_5;

 if (FUNC_21(VAR_2, &VAR_11->flag)) {
  VAR_13 = (VAR_12->data[1] & 0x1) == 0x1;
  VAR_16 = VAR_12->data[1] >> 1;
 } else {
  VAR_13 = (VAR_12->data[0] & 0x10);
  VAR_16 = (VAR_12->data[0] >> 5) & 0x7;
 }
 FUNC_3(VAR_12);

 if (VAR_13) {
  if (VAR_14)
   FUNC_8(VAR_11, VAR_4, (void *) 'A');
  else
   FUNC_4(VAR_11);
 }
 if (FUNC_9(VAR_11, VAR_16)) {
  if (VAR_15 == VAR_5) {
   FUNC_17(VAR_11, VAR_16);
   FUNC_5(VAR_11, VAR_16);
   FUNC_20(VAR_11, 10);
   if (FUNC_10(&VAR_11->t203, VAR_11->T203,
           VAR_1, ((void*)0), 6))
    FUNC_7(&VAR_11->l2m, "Restart T203 ST7 REJ");
  } else if ((VAR_16 == VAR_11->vs) && (VAR_15 == VAR_7)) {
   FUNC_17(VAR_11, VAR_16);
   FUNC_20(VAR_11, 11);
   FUNC_13(&VAR_11->t203, VAR_11->T203,
           VAR_1, ((void*)0), 7);
  } else if ((VAR_11->va != VAR_16) || (VAR_15 == VAR_6)) {
   FUNC_17(VAR_11, VAR_16);
   if (VAR_15 != VAR_7)
    FUNC_11(&VAR_11->t203, 9);
   FUNC_15(VAR_11, 12);
  }
  if (FUNC_19(&VAR_11->i_queue) && (VAR_15 == VAR_7))
   FUNC_12(VAR_8, VAR_0, ((void*)0));
 } else
  FUNC_14(VAR_8);
}
