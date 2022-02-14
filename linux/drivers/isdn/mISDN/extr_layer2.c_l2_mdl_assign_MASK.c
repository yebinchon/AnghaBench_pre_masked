
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct layer2 {int dummy; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct layer2*,int ,int ) ;
 int FUNC_2 (struct FsmInst*,int ) ;

__attribute__((used)) static void
FUNC_3(struct FsmInst *VAR_2, int VAR_3, void *VAR_4)
{
 struct layer2 *VAR_5 = VAR_2->userdata;

 FUNC_2(VAR_2, VAR_1);
 FUNC_0((struct sk_buff *)VAR_4);
 FUNC_1(VAR_5, VAR_0, 0);
}
