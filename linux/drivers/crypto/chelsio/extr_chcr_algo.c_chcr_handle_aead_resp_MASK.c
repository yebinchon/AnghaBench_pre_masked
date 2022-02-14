
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct chcr_dev {int dummy; } ;
struct chcr_aead_reqctx {scalar_t__ verify; } ;
struct TYPE_3__ {int (* complete ) (TYPE_1__*,int) ;} ;
struct aead_request {TYPE_1__ base; } ;
struct TYPE_4__ {struct chcr_dev* dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (struct crypto_aead*) ;
 struct chcr_aead_reqctx* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct chcr_dev*) ;
 int FUNC_4 (struct aead_request*,unsigned char*,int*) ;
 struct crypto_aead* FUNC_5 (struct aead_request*) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static inline int FUNC_7(struct aead_request *VAR_2,
      unsigned char *VAR_3,
      int VAR_4)
{
 struct chcr_aead_reqctx *VAR_5 = FUNC_1(VAR_2);
 struct crypto_aead *VAR_6 = FUNC_5(VAR_2);
 struct chcr_dev *VAR_7 = FUNC_0(VAR_6)->dev;

 FUNC_2(VAR_2);
 if (VAR_5->verify == VAR_1) {
  FUNC_4(VAR_2, VAR_3, &VAR_4);
  VAR_5->verify = VAR_0;
 }
 FUNC_3(VAR_7);
 VAR_2->base.complete(&VAR_2->base, VAR_4);

 return VAR_4;
}
