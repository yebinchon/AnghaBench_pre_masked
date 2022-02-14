
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct hash_ctx {int len; } ;
struct alg_sock {struct hash_ctx* private; } ;


 int FUNC_0 (struct sock*) ;
 struct alg_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct hash_ctx*) ;
 int FUNC_3 (struct sock*,struct hash_ctx*,int ) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_0)
{
 struct alg_sock *VAR_1 = FUNC_1(VAR_0);
 struct hash_ctx *VAR_2 = VAR_1->private;

 FUNC_2(VAR_0, VAR_2);
 FUNC_3(VAR_0, VAR_2, VAR_2->len);
 FUNC_0(VAR_0);
}
