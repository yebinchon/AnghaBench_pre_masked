
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int* expkey; } ;
struct TYPE_4__ {int* expkey; } ;
struct des3_ede_x86_ctx {TYPE_1__ dec; TYPE_2__ enc; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct des3_ede_x86_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (TYPE_2__*,int const*,unsigned int) ;
 int FUNC_3 (struct des3_ede_x86_ctx*,int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct crypto_tfm *VAR_4, const u8 *VAR_5,
          unsigned int VAR_6)
{
 struct des3_ede_x86_ctx *VAR_7 = FUNC_0(VAR_4);
 u32 VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(&VAR_7->enc, VAR_5, VAR_6);
 if (VAR_11 == -VAR_3) {
  if (FUNC_1(VAR_4) & VAR_0)
   VAR_11 = -VAR_2;
  else
   VAR_11 = 0;
 }

 if (VAR_11) {
  FUNC_3(VAR_7, 0, sizeof(*VAR_7));
  return VAR_11;
 }



 VAR_9 = VAR_1 - 2;
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8 += 2, VAR_9 -= 2) {
  VAR_10 = FUNC_4(VAR_7->enc.expkey[VAR_8 + 1], 4);
  VAR_7->enc.expkey[VAR_8 + 1] = VAR_10;

  VAR_7->dec.expkey[VAR_9 + 0] = VAR_7->enc.expkey[VAR_8 + 0];
  VAR_7->dec.expkey[VAR_9 + 1] = VAR_10;
 }

 return 0;
}
