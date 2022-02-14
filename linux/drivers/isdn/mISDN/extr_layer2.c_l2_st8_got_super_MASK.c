
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; } ;
struct layer2 {int i_queue; int T203; int t203; int flag; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int*,struct layer2*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct layer2*) ;
 int FUNC_2 (struct layer2*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct layer2*) ;
 int FUNC_5 (struct layer2*,unsigned int) ;
 int FUNC_6 (struct layer2*) ;
 scalar_t__ FUNC_7 (struct layer2*,unsigned int) ;
 int FUNC_8 (int *,int ,int ,int *,int) ;
 int FUNC_9 (struct FsmInst*,int ) ;
 int FUNC_10 (struct FsmInst*,int ,int *) ;
 int FUNC_11 (struct FsmInst*) ;
 int FUNC_12 (struct layer2*,int) ;
 int FUNC_13 (struct layer2*) ;
 int FUNC_14 (struct layer2*,unsigned int) ;
 int FUNC_15 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (struct layer2*,int) ;
 scalar_t__ FUNC_18 (int ,int *) ;

__attribute__((used)) static void
FUNC_19(struct FsmInst *VAR_5, int VAR_6, void *VAR_7)
{
 struct layer2 *VAR_8 = VAR_5->userdata;
 struct sk_buff *VAR_9 = VAR_7;
 int VAR_10, VAR_11, VAR_12 = 0;
 unsigned int VAR_13;

 VAR_11 = *VAR_9->data & 0x2;
 if (FUNC_18(VAR_3, &VAR_8->flag))
  VAR_11 = !VAR_11;

 FUNC_15(VAR_9, FUNC_6(VAR_8));

 if (FUNC_0(VAR_9->data, VAR_8)) {
  FUNC_13(VAR_8);
  VAR_12 = 1;
 } else
  FUNC_2(VAR_8);

 if (FUNC_18(VAR_2, &VAR_8->flag)) {
  VAR_10 = (VAR_9->data[1] & 0x1) == 0x1;
  VAR_13 = VAR_9->data[1] >> 1;
 } else {
  VAR_10 = (VAR_9->data[0] & 0x10);
  VAR_13 = (VAR_9->data[0] >> 5) & 0x7;
 }
 FUNC_3(VAR_9);
 if (VAR_11 && VAR_10) {
  if (FUNC_7(VAR_8, VAR_13)) {
   if (VAR_12) {
    FUNC_12(VAR_8, 15);
   } else {
    FUNC_17(VAR_8, 16);
    FUNC_8(&VAR_8->t203, VAR_8->T203,
        VAR_1, ((void*)0), 5);
    FUNC_14(VAR_8, VAR_13);
   }
   FUNC_5(VAR_8, VAR_13);
   FUNC_9(VAR_5, VAR_4);
   if (FUNC_16(&VAR_8->i_queue) && FUNC_1(VAR_8))
    FUNC_10(VAR_5, VAR_0, ((void*)0));
  } else
   FUNC_11(VAR_5);
 } else {
  if (!VAR_11 && VAR_10)
   FUNC_4(VAR_8);
  if (FUNC_7(VAR_8, VAR_13))
   FUNC_14(VAR_8, VAR_13);
  else
   FUNC_11(VAR_5);
 }
}
