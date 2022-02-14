
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_callback_lock; } ;
struct siw_cep {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct siw_cep*) ;
 int FUNC_2 (struct sock*,struct siw_cep*) ;
 struct siw_cep* FUNC_3 (struct sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct socket *VAR_0)
{
 struct sock *VAR_1 = VAR_0->sk;
 struct siw_cep *VAR_2;

 if (VAR_1) {
  FUNC_4(&VAR_1->sk_callback_lock);
  VAR_2 = FUNC_3(VAR_1);
  if (VAR_2) {
   FUNC_2(VAR_1, VAR_2);
   FUNC_1(VAR_2);
  } else {
   FUNC_0("siw: cannot restore sk callbacks: no ep\n");
  }
  FUNC_5(&VAR_1->sk_callback_lock);
 } else {
  FUNC_0("siw: cannot restore sk callbacks: no sk\n");
 }
}
