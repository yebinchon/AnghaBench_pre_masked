
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;


 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,void*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0)
{
 struct sk_buff *VAR_1;

 while ((VAR_1 = FUNC_0(&VAR_0->sk_receive_queue)) != ((void*)0)) {
  FUNC_2(VAR_1, (void *)((void*)0));
  FUNC_1(VAR_1);
 }
}
