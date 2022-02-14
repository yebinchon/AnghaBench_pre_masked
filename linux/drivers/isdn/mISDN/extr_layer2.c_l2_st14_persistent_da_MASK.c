
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct layer2 {int flag; int ui_queue; int i_queue; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct layer2*,int ,struct sk_buff*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct FsmInst *VAR_2, int VAR_3, void *VAR_4)
{
 struct layer2 *VAR_5 = VAR_2->userdata;
 struct sk_buff *VAR_6 = VAR_4;

 FUNC_2(&VAR_5->i_queue);
 FUNC_2(&VAR_5->ui_queue);
 if (FUNC_3(VAR_1, &VAR_5->flag))
  FUNC_1(VAR_5, VAR_0, VAR_6);
 else
  FUNC_0(VAR_6);
}
