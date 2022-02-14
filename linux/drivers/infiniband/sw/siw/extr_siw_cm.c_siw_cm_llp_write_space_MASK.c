
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct siw_cep {int state; } ;


 int FUNC_0 (struct siw_cep*,char*,int ) ;
 struct siw_cep* FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0)
{
 struct siw_cep *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1)
  FUNC_0(VAR_1, "state: %d\n", VAR_1->state);
}
