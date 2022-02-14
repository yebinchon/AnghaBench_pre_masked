
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct layer2 {scalar_t__ tm; int flag; int i_queue; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct layer2*,struct sk_buff*) ;
 int FUNC_1 (struct layer2*) ;
 int FUNC_2 (struct layer2*,int ,int ) ;
 int FUNC_3 (struct layer2*,int ,int ,int ,int *) ;
 int FUNC_4 (struct FsmInst*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct layer2*) ;
 int FUNC_7 (struct layer2*,int) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void
FUNC_9(struct FsmInst *VAR_5, int VAR_6, void *VAR_7)
{
 struct layer2 *VAR_8 = VAR_5->userdata;
 struct sk_buff *VAR_9 = VAR_7;

 if (FUNC_0(VAR_8, VAR_9)) {
  FUNC_7(VAR_8, 7);
  if (!FUNC_8(VAR_0, &VAR_8->flag))
   FUNC_5(&VAR_8->i_queue);
  if (FUNC_8(VAR_1, &VAR_8->flag))
   FUNC_3(VAR_8, VAR_3,
          FUNC_1(VAR_8), 0, ((void*)0));
  FUNC_6(VAR_8);
  FUNC_4(VAR_5, VAR_4);
  if (VAR_8->tm)
   FUNC_2(VAR_8, VAR_2, 0);
 }
}
