
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_hash_request_ctx {int dummy; } ;
struct img_hash_ctx {int fallback; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct crypto_tfm*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (char const*,int ,int ) ;
 struct img_hash_ctx* FUNC_6 (struct crypto_tfm*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct crypto_tfm *VAR_3, const char *VAR_4)
{
 struct img_hash_ctx *VAR_5 = FUNC_6(VAR_3);
 int VAR_6 = -VAR_1;

 VAR_5->fallback = FUNC_5(VAR_4, 0,
        VAR_0);
 if (FUNC_0(VAR_5->fallback)) {
  FUNC_7("img_hash: Could not load fallback driver.\n");
  VAR_6 = FUNC_1(VAR_5->fallback);
  goto err;
 }
 FUNC_4(FUNC_2(VAR_3),
     sizeof(struct img_hash_request_ctx) +
     FUNC_3(VAR_5->fallback) +
     VAR_2);

 return 0;

err:
 return VAR_6;
}
