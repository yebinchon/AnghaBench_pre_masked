
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct chachapoly_ctx {int saltlen; int * salt; } ;
struct aead_request {int * iv; } ;
typedef int leicb ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct chachapoly_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct aead_request*) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static void FUNC_4(u8 *VAR_1, struct aead_request *VAR_2, u32 VAR_3)
{
 struct chachapoly_ctx *VAR_4 = FUNC_1(FUNC_2(VAR_2));
 __le32 VAR_5 = FUNC_0(VAR_3);

 FUNC_3(VAR_1, &VAR_5, sizeof(VAR_5));
 FUNC_3(VAR_1 + sizeof(VAR_5), VAR_4->salt, VAR_4->saltlen);
 FUNC_3(VAR_1 + sizeof(VAR_5) + VAR_4->saltlen, VAR_2->iv,
        VAR_0 - sizeof(VAR_5) - VAR_4->saltlen);
}
