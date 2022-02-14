
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct virtio_crypto_ablkcipher_ctx {struct virtio_crypto* vcrypto; } ;
struct virtio_crypto {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct virtio_crypto_ablkcipher_ctx* FUNC_0 (struct crypto_ablkcipher*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct virtio_crypto*) ;
 struct virtio_crypto* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (struct virtio_crypto_ablkcipher_ctx*,int) ;
 int FUNC_5 (struct virtio_crypto_ablkcipher_ctx*,int const*,unsigned int) ;
 int FUNC_6 (unsigned int,int *) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct crypto_ablkcipher *VAR_2,
      const uint8_t *VAR_3,
      unsigned int VAR_4)
{
 struct virtio_crypto_ablkcipher_ctx *VAR_5 = FUNC_0(VAR_2);
 uint32_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_6(VAR_4, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (!VAR_5->vcrypto) {

  int VAR_8 = FUNC_7();
  struct virtio_crypto *VAR_9 =
          FUNC_3(VAR_8,
          VAR_1, VAR_6);
  if (!VAR_9) {
   FUNC_1("virtio_crypto: Could not find a virtio device in the system or unsupported algo\n");
   return -VAR_0;
  }

  VAR_5->vcrypto = VAR_9;
 } else {

  FUNC_4(VAR_5, 1);
  FUNC_4(VAR_5, 0);
 }

 VAR_7 = FUNC_5(VAR_5, VAR_3, VAR_4);
 if (VAR_7) {
  FUNC_2(VAR_5->vcrypto);
  VAR_5->vcrypto = ((void*)0);

  return VAR_7;
 }

 return 0;
}
