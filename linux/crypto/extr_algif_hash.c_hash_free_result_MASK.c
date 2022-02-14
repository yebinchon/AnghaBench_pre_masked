
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct hash_ctx {int * result; int req; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sock*,int *,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0, struct hash_ctx *VAR_1)
{
 unsigned VAR_2;

 if (!VAR_1->result)
  return;

 VAR_2 = FUNC_0(FUNC_1(&VAR_1->req));

 FUNC_2(VAR_0, VAR_1->result, VAR_2);
 VAR_1->result = ((void*)0);
}
