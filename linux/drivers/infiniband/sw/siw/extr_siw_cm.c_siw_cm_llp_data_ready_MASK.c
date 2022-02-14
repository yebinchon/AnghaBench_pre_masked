
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_callback_lock; } ;
struct siw_cep {int state; } ;


 int VAR_0 ;




 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct siw_cep*,int ) ;
 int FUNC_4 (struct siw_cep*,char*,int) ;
 struct siw_cep* FUNC_5 (struct sock*) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_1)
{
 struct siw_cep *VAR_2;

 FUNC_1(&VAR_1->sk_callback_lock);

 VAR_2 = FUNC_5(VAR_1);
 if (!VAR_2) {
  FUNC_0(1);
  goto out;
 }
 FUNC_4(VAR_2, "state: %d\n", VAR_2->state);

 switch (VAR_2->state) {
 case 128:

 case 129:
  break;

 case 130:

 case 131:
  FUNC_3(VAR_2, VAR_0);
  break;

 default:
  FUNC_4(VAR_2, "unexpected data, state %d\n", VAR_2->state);
  break;
 }
out:
 FUNC_2(&VAR_1->sk_callback_lock);
}
