
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct vmac_tfm_ctx {int cipher; } ;
struct TYPE_2__ {int* bytes; int * pads; } ;
struct vmac_desc_ctx {int nonce_size; TYPE_1__ nonce; } ;
struct shash_desc {int tfm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int*,int*) ;
 struct vmac_tfm_ctx* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int *) ;
 struct vmac_desc_ctx* FUNC_5 (struct shash_desc*) ;
 scalar_t__ FUNC_6 (struct vmac_tfm_ctx const*,struct vmac_desc_ctx*) ;

__attribute__((used)) static int FUNC_7(struct shash_desc *VAR_3, u8 *VAR_4)
{
 const struct vmac_tfm_ctx *VAR_5 = FUNC_3(VAR_3->tfm);
 struct vmac_desc_ctx *VAR_6 = FUNC_5(VAR_3);
 int VAR_7;
 u64 VAR_8, VAR_9;

 if (VAR_6->nonce_size != VAR_1)
  return -VAR_0;







 if (VAR_6->nonce.bytes[0] & 0x80)
  return -VAR_0;


 VAR_8 = FUNC_6(VAR_5, VAR_6);


 FUNC_0(VAR_1 != 2 * (VAR_2 / 8));
 VAR_7 = VAR_6->nonce.bytes[VAR_1 - 1] & 1;
 VAR_6->nonce.bytes[VAR_1 - 1] &= ~1;
 FUNC_2(VAR_5->cipher, VAR_6->nonce.bytes,
      VAR_6->nonce.bytes);
 VAR_9 = FUNC_1(VAR_6->nonce.pads[VAR_7]);


 FUNC_4(VAR_8 + VAR_9, VAR_4);
 return 0;
}
