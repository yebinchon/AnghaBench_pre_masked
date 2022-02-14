
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct alg_sock {int private; int type; } ;


 int FUNC_0 (int ,int ) ;
 struct alg_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0)
{
 struct alg_sock *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->type, VAR_1->private);
}
