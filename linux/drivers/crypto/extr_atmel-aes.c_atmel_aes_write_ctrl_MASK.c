
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct atmel_aes_dev {TYPE_1__* ctx; } ;
struct TYPE_2__ {int keylen; int key; } ;


 int FUNC_0 (struct atmel_aes_dev*,int,int const*,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct atmel_aes_dev *VAR_0, bool VAR_1,
     const u32 *VAR_2)

{
 FUNC_0(VAR_0, VAR_1, VAR_2,
     VAR_0->ctx->key, VAR_0->ctx->keylen);
}
