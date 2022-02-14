
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nx_gcm_rctx {char* iv; } ;
struct aead_request {int assoclen; int iv; } ;


 int VAR_0 ;
 struct nx_gcm_rctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*,int,int ) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct aead_request *VAR_1)
{
 struct nx_gcm_rctx *VAR_2 = FUNC_0(VAR_1);
 char *VAR_3 = VAR_2->iv;

 FUNC_2(VAR_3, VAR_1->iv, VAR_0);

 return FUNC_1(VAR_1, 1, VAR_1->assoclen);
}
