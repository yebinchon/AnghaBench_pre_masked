
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int blk; } ;
struct s390_aes_ctx {TYPE_1__ fallback; } ;
struct crypto_tfm {int crt_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 unsigned int FUNC_3 (int ,int const*,unsigned int) ;
 struct s390_aes_ctx* FUNC_4 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_5(struct crypto_tfm *VAR_2, const u8 *VAR_3,
  unsigned int VAR_4)
{
 struct s390_aes_ctx *VAR_5 = FUNC_4(VAR_2);
 unsigned int VAR_6;

 FUNC_0(VAR_5->fallback.blk,
      VAR_0);
 FUNC_2(VAR_5->fallback.blk, VAR_2->crt_flags &
            VAR_0);

 VAR_6 = FUNC_3(VAR_5->fallback.blk, VAR_3, VAR_4);

 VAR_2->crt_flags &= ~VAR_1;
 VAR_2->crt_flags |= FUNC_1(VAR_5->fallback.blk) &
     VAR_1;

 return VAR_6;
}
