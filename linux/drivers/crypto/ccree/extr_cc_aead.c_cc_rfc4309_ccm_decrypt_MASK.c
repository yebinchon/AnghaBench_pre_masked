
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct cc_aead_ctx {int drvdata; } ;
struct aead_request {int iv; int assoclen; } ;
struct aead_req_ctx {int is_gcm4543; int backup_iv; int assoclen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*,int ) ;
 int FUNC_2 (struct aead_request*) ;
 struct cc_aead_ctx* FUNC_3 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_4 (struct aead_request*) ;
 int FUNC_5 (struct device*,char*,int ) ;
 struct device* FUNC_6 (int ) ;
 int FUNC_7 (struct aead_req_ctx*,int ,int) ;
 int FUNC_8 (struct aead_request*) ;

__attribute__((used)) static int FUNC_9(struct aead_request *VAR_4)
{
 struct crypto_aead *VAR_5 = FUNC_4(VAR_4);
 struct cc_aead_ctx *VAR_6 = FUNC_3(VAR_5);
 struct device *VAR_7 = FUNC_6(VAR_6->drvdata);
 struct aead_req_ctx *VAR_8 = FUNC_0(VAR_4);
 int VAR_9 = -VAR_3;

 if (!FUNC_8(VAR_4)) {
  FUNC_5(VAR_7, "invalid Assoclen:%u\n", VAR_4->assoclen);
  goto out;
 }

 FUNC_7(VAR_8, 0, sizeof(*VAR_8));


 VAR_8->backup_iv = VAR_4->iv;
 VAR_8->assoclen = VAR_4->assoclen;

 VAR_8->is_gcm4543 = 1;
 FUNC_2(VAR_4);

 VAR_9 = FUNC_1(VAR_4, VAR_0);
 if (VAR_9 != -VAR_2 && VAR_9 != -VAR_1)
  VAR_4->iv = VAR_8->backup_iv;

out:
 return VAR_9;
}
