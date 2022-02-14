
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct layer2 {int t203; scalar_t__ rc; int i_queue; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct layer2*) ;
 int FUNC_2 (struct FsmInst*,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct layer2*,int) ;
 int FUNC_5 (struct layer2*,int *,int,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct FsmInst *VAR_3, int VAR_4, void *VAR_5)
{
 struct layer2 *VAR_6 = VAR_3->userdata;
 struct sk_buff *VAR_7 = VAR_5;

 FUNC_6(&VAR_6->i_queue);
 FUNC_1(VAR_6);
 FUNC_2(VAR_3, VAR_2);
 VAR_6->rc = 0;
 FUNC_5(VAR_6, ((void*)0), VAR_1 | 0x10, VAR_0);
 FUNC_3(&VAR_6->t203, 1);
 FUNC_4(VAR_6, 2);
 FUNC_0(VAR_7);
}
