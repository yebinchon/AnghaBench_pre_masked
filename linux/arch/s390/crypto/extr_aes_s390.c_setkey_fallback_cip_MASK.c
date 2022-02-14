
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {TYPE_3__* cip; } ;
struct s390_aes_ctx {TYPE_2__ fallback; } ;
struct crypto_tfm {int crt_flags; } ;
struct TYPE_4__ {int crt_flags; } ;
struct TYPE_6__ {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int const*,unsigned int) ;
 struct s390_aes_ctx* FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_2, const u8 *VAR_3,
  unsigned int VAR_4)
{
 struct s390_aes_ctx *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;

 VAR_5->fallback.cip->base.crt_flags &= ~VAR_0;
 VAR_5->fallback.cip->base.crt_flags |= (VAR_2->crt_flags &
   VAR_0);

 VAR_6 = FUNC_0(VAR_5->fallback.cip, VAR_3, VAR_4);
 if (VAR_6) {
  VAR_2->crt_flags &= ~VAR_1;
  VAR_2->crt_flags |= (VAR_5->fallback.cip->base.crt_flags &
    VAR_1);
 }
 return VAR_6;
}
