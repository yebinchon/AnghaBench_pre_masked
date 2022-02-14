
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct request_sock {struct request_sock* dl_next; struct sock* sk; int * rsk_ops; } ;


 struct request_sock** FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct request_sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;

__attribute__((used)) static void FUNC_11(struct sock *VAR_1)
{
 struct request_sock **VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 while (*VAR_2) {
  struct request_sock *VAR_3 = *VAR_2;

  if (VAR_3->rsk_ops == &VAR_0) {
   struct sock *VAR_4 = VAR_3->sk;

   *VAR_2 = VAR_3->dl_next;
   FUNC_8(VAR_1);
   FUNC_6(VAR_3);
   FUNC_9(VAR_4);
   FUNC_3();
   FUNC_1(VAR_4);
   FUNC_5(VAR_4);
   FUNC_7(VAR_4);
   FUNC_2(VAR_4);
   FUNC_4();
   FUNC_10(VAR_4);
  } else {
   VAR_2 = &VAR_3->dl_next;
  }
 }
}
