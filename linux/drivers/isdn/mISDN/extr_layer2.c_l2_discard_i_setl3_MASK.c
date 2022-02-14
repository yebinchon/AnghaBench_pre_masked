
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct layer2 {int flag; int i_queue; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct FsmInst *VAR_2, int VAR_3, void *VAR_4)
{
 struct sk_buff *VAR_5 = VAR_4;
 struct layer2 *VAR_6 = VAR_2->userdata;

 FUNC_1(&VAR_6->i_queue);
 FUNC_3(VAR_0, &VAR_6->flag);
 FUNC_2(VAR_1, &VAR_6->flag);
 FUNC_0(VAR_5);
}
