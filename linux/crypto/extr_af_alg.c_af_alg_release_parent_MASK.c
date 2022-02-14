
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct alg_sock {unsigned int nokey_refcnt; int refcnt; struct sock* parent; } ;


 struct alg_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

void FUNC_4(struct sock *VAR_0)
{
 struct alg_sock *VAR_1 = FUNC_0(VAR_0);
 unsigned int VAR_2 = VAR_1->nokey_refcnt;
 bool VAR_3 = VAR_2 && !VAR_1->refcnt;

 VAR_0 = VAR_1->parent;
 VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0);
 VAR_1->nokey_refcnt -= VAR_2;
 if (!VAR_3)
  VAR_3 = !--VAR_1->refcnt;
 FUNC_2(VAR_0);

 if (VAR_3)
  FUNC_3(VAR_0);
}
