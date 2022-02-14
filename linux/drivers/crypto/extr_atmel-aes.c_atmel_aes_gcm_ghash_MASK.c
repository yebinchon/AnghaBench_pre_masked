
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atmel_aes_gcm_ctx {int ghash_resume; int * ghash_out; int const* ghash_in; } ;
struct atmel_aes_dev {size_t datalen; int * data; int ctx; } ;
typedef int atmel_aes_fn_t ;


 struct atmel_aes_gcm_ctx* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct atmel_aes_dev*,int ) ;
 int FUNC_2 (struct atmel_aes_dev*,int,int *) ;

__attribute__((used)) static int FUNC_3(struct atmel_aes_dev *VAR_1,
          const u32 *VAR_2, size_t VAR_3,
          const u32 *VAR_4, u32 *VAR_5,
          atmel_aes_fn_t VAR_6)
{
 struct atmel_aes_gcm_ctx *VAR_7 = FUNC_0(VAR_1->ctx);

 VAR_1->data = (u32 *)VAR_2;
 VAR_1->datalen = VAR_3;
 VAR_7->ghash_in = VAR_4;
 VAR_7->ghash_out = VAR_5;
 VAR_7->ghash_resume = VAR_6;

 FUNC_2(VAR_1, 0, ((void*)0));
 return FUNC_1(VAR_1, VAR_0);
}
