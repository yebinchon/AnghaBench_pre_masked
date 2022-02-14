
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {struct sock* sk; } ;
struct TYPE_2__ {int cdev; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sock*,struct sock*,int ) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct sock *VAR_2 = VAR_1->sk;

 VAR_1->sk = ((void*)0);
 FUNC_1(VAR_2, VAR_0, FUNC_0(VAR_1)->cdev);
 FUNC_2(VAR_1);
}
