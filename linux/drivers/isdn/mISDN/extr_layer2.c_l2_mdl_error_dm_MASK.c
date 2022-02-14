
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct layer2 {int flag; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct FsmInst*) ;
 scalar_t__ FUNC_1 (struct layer2*,struct sk_buff*) ;
 int FUNC_2 (struct layer2*,int ,void*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct FsmInst *VAR_2, int VAR_3, void *VAR_4)
{
 struct sk_buff *VAR_5 = VAR_4;
 struct layer2 *VAR_6 = VAR_2->userdata;

 if (FUNC_1(VAR_6, VAR_5))
  FUNC_2(VAR_6, VAR_1, (void *) 'B');
 else {
  FUNC_2(VAR_6, VAR_1, (void *) 'E');
  FUNC_0(VAR_2);
  FUNC_3(VAR_0, &VAR_6->flag);
 }
}
