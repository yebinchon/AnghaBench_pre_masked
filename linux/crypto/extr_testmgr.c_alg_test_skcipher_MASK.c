
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct skcipher_request {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct cipher_test_suite {scalar_t__ count; } ;
struct cipher_test_sglists {int dummy; } ;
struct TYPE_2__ {struct cipher_test_suite cipher; } ;
struct alg_test_desc {int generic_driver; TYPE_1__ suite; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct crypto_skcipher*) ;
 int FUNC_1 (struct crypto_skcipher*) ;
 struct cipher_test_sglists* FUNC_2 () ;
 struct crypto_skcipher* FUNC_3 (char const*,int ,int ) ;
 int FUNC_4 (struct crypto_skcipher*) ;
 int FUNC_5 (struct cipher_test_sglists*) ;
 int FUNC_6 (char*,char const*,...) ;
 struct skcipher_request* FUNC_7 (struct crypto_skcipher*,int ) ;
 int FUNC_8 (struct skcipher_request*) ;
 int FUNC_9 (char const*,int ,struct cipher_test_suite const*,struct skcipher_request*,struct cipher_test_sglists*) ;
 int FUNC_10 (char const*,int ,struct skcipher_request*,struct cipher_test_sglists*) ;

__attribute__((used)) static int FUNC_11(const struct alg_test_desc *VAR_5,
        const char *VAR_6, u32 VAR_7, u32 VAR_8)
{
 const struct cipher_test_suite *VAR_9 = &VAR_5->suite.cipher;
 struct crypto_skcipher *VAR_10;
 struct skcipher_request *VAR_11 = ((void*)0);
 struct cipher_test_sglists *VAR_12 = ((void*)0);
 int VAR_13;

 if (VAR_9->count <= 0) {
  FUNC_6("alg: skcipher: empty test suite for %s\n", VAR_6);
  return -VAR_1;
 }

 VAR_10 = FUNC_3(VAR_6, VAR_7, VAR_8);
 if (FUNC_0(VAR_10)) {
  FUNC_6("alg: skcipher: failed to allocate transform for %s: %ld\n",
         VAR_6, FUNC_1(VAR_10));
  return FUNC_1(VAR_10);
 }

 VAR_11 = FUNC_7(VAR_10, VAR_4);
 if (!VAR_11) {
  FUNC_6("alg: skcipher: failed to allocate request for %s\n",
         VAR_6);
  VAR_13 = -VAR_3;
  goto out;
 }

 VAR_12 = FUNC_2();
 if (!VAR_12) {
  FUNC_6("alg: skcipher: failed to allocate test buffers for %s\n",
         VAR_6);
  VAR_13 = -VAR_3;
  goto out;
 }

 VAR_13 = FUNC_9(VAR_6, VAR_2, VAR_9, VAR_11, VAR_12);
 if (VAR_13)
  goto out;

 VAR_13 = FUNC_9(VAR_6, VAR_0, VAR_9, VAR_11, VAR_12);
 if (VAR_13)
  goto out;

 VAR_13 = FUNC_10(VAR_6, VAR_5->generic_driver, VAR_11,
         VAR_12);
out:
 FUNC_5(VAR_12);
 FUNC_8(VAR_11);
 FUNC_4(VAR_10);
 return VAR_13;
}
