
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_aes_reqctx {unsigned long mode; scalar_t__ auth_tag; scalar_t__ iv; } ;
struct omap_aes_dev {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int assoclen; scalar_t__ cryptlen; int dst; } ;
typedef int __be32 ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 struct omap_aes_reqctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (struct aead_request*,int *,int *) ;
 int FUNC_5 (scalar_t__,int *,int) ;
 int FUNC_6 (scalar_t__,int ,int) ;
 struct omap_aes_dev* FUNC_7 (struct omap_aes_reqctx*) ;
 int FUNC_8 (struct omap_aes_dev*,struct aead_request*) ;
 int FUNC_9 (scalar_t__,int ,int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_10(struct aead_request *VAR_3, unsigned long VAR_4)
{
 struct omap_aes_reqctx *VAR_5 = FUNC_0(VAR_3);
 struct crypto_aead *VAR_6 = FUNC_3(VAR_3);
 unsigned int VAR_7 = FUNC_2(VAR_6);
 struct omap_aes_dev *VAR_8;
 __be32 VAR_9 = FUNC_1(1);
 int VAR_10, VAR_11;

 FUNC_6(VAR_5->auth_tag, 0, sizeof(VAR_5->auth_tag));
 FUNC_5(VAR_5->iv + VAR_2, &VAR_9, 4);

 VAR_10 = FUNC_4(VAR_3, (u32 *)VAR_5->auth_tag, (u32 *)VAR_5->iv);
 if (VAR_10)
  return VAR_10;

 if (VAR_4 & VAR_1)
  VAR_11 = VAR_3->assoclen - 8;
 else
  VAR_11 = VAR_3->assoclen;
 if (VAR_11 + VAR_3->cryptlen == 0) {
  FUNC_9(VAR_5->auth_tag, VAR_3->dst, 0, VAR_7,
      1);
  return 0;
 }

 VAR_8 = FUNC_7(VAR_5);
 if (!VAR_8)
  return -VAR_0;
 VAR_5->mode = VAR_4;

 return FUNC_8(VAR_8, VAR_3);
}
