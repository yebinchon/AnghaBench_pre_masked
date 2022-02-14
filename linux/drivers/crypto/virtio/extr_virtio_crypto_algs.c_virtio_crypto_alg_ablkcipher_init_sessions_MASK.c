
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct virtio_crypto_ablkcipher_ctx {int tfm; struct virtio_crypto* vcrypto; } ;
struct virtio_crypto {unsigned int max_cipher_key_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct virtio_crypto_ablkcipher_ctx*,int) ;
 int FUNC_3 (struct virtio_crypto_ablkcipher_ctx*,int ,int const*,unsigned int,int) ;
 scalar_t__ FUNC_4 (unsigned int,int *) ;

__attribute__((used)) static int FUNC_5(
  struct virtio_crypto_ablkcipher_ctx *VAR_2,
  const uint8_t *VAR_3, unsigned int VAR_4)
{
 uint32_t VAR_5;
 int VAR_6;
 struct virtio_crypto *VAR_7 = VAR_2->vcrypto;

 if (VAR_4 > VAR_7->max_cipher_key_len) {
  FUNC_1("virtio_crypto: the key is too long\n");
  goto bad_key;
 }

 if (FUNC_4(VAR_4, &VAR_5))
  goto bad_key;


 VAR_6 = FUNC_3(VAR_2,
   VAR_5, VAR_3, VAR_4, 1);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_2,
   VAR_5, VAR_3, VAR_4, 0);
 if (VAR_6) {
  FUNC_2(VAR_2, 1);
  return VAR_6;
 }
 return 0;

bad_key:
 FUNC_0(VAR_2->tfm, VAR_0);
 return -VAR_1;
}
