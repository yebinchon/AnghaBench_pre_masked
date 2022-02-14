
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rchap {int rchap_challenge_len; int rchap_challenge; int rchap_secret; int rchap_id; } ;


 size_t VAR_0 ;
 void* FUNC_0 (size_t,int) ;
 int FUNC_1 (int ,int ,int ,int ,void*,size_t) ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static void
FUNC_3(struct rchap *VAR_1,
    void **VAR_2, size_t *VAR_3)
{
 void *VAR_4;
 size_t VAR_5 = VAR_0;

 VAR_4 = FUNC_0(VAR_5, 1);
 if (VAR_4 == ((void*)0))
  FUNC_2(1, "calloc");

 FUNC_1(VAR_1->rchap_id, VAR_1->rchap_secret,
     VAR_1->rchap_challenge, VAR_1->rchap_challenge_len,
     VAR_4, VAR_5);

 *VAR_2 = VAR_4;
 *VAR_3 = VAR_5;
}
