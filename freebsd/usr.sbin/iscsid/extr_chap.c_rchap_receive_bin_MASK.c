
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rchap {unsigned char rchap_id; size_t rchap_challenge_len; int * rchap_challenge; } ;


 int * FUNC_0 (size_t,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *,void const*,size_t) ;

__attribute__((used)) static void
FUNC_3(struct rchap *VAR_0, const unsigned char VAR_1,
    const void *VAR_2, size_t VAR_3)
{

 VAR_0->rchap_id = VAR_1;
 VAR_0->rchap_challenge = FUNC_0(VAR_3, 1);
 if (VAR_0->rchap_challenge == ((void*)0))
  FUNC_1(1, "calloc");
 FUNC_2(VAR_0->rchap_challenge, VAR_2, VAR_3);
 VAR_0->rchap_challenge_len = VAR_3;
}
