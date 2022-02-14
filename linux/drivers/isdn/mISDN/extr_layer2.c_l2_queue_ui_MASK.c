
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct layer2 {int ui_queue; } ;
struct FsmInst {struct layer2* userdata; } ;


 int FUNC_0 (int *,struct sk_buff*) ;

__attribute__((used)) static void
FUNC_1(struct FsmInst *VAR_0, int VAR_1, void *VAR_2)
{
 struct layer2 *VAR_3 = VAR_0->userdata;
 struct sk_buff *VAR_4 = VAR_2;

 FUNC_0(&VAR_3->ui_queue, VAR_4);
}
