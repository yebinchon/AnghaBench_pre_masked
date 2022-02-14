
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; int sk_err; } ;
struct siw_cep {int (* sk_error_report ) (struct sock*) ;int state; } ;


 int FUNC_0 (struct siw_cep*,char*,int ,int ,int ) ;
 struct siw_cep* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0)
{
 struct siw_cep *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1) {
  FUNC_0(VAR_1, "error %d, socket state: %d, cep state: %d\n",
       VAR_0->sk_err, VAR_0->sk_state, VAR_1->state);
  VAR_1->sk_error_report(VAR_0);
 }
}
