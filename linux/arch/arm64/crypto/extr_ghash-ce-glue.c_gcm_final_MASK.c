
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_2__ {void* b; void* a; } ;
typedef TYPE_1__ u128 ;
struct gcm_aes_ctx {int ghash_key; } ;
struct aead_request {int assoclen; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int,int *,void*,int *,int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct aead_request *VAR_2, struct gcm_aes_ctx *VAR_3,
        u64 VAR_4[], u8 VAR_5[], int VAR_6)
{
 u8 VAR_7[VAR_0];
 u128 VAR_8;

 VAR_8.a = FUNC_0(VAR_2->assoclen * 8);
 VAR_8.b = FUNC_0(VAR_6 * 8);

 FUNC_2(1, VAR_4, (void *)&VAR_8, &VAR_3->ghash_key, ((void*)0),
   VAR_1);

 FUNC_3(VAR_4[1], VAR_7);
 FUNC_3(VAR_4[0], VAR_7 + 8);

 FUNC_1(VAR_5, VAR_7, VAR_0);
}
