
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct virtio_crypto {unsigned int crypto_services; unsigned int cipher_algo_l; unsigned int cipher_algo_h; unsigned int hash_algo; unsigned int mac_algo_l; unsigned int mac_algo_h; unsigned int aead_algo; } ;







bool FUNC_0(struct virtio_crypto *VAR_0,
      uint32_t VAR_1,
      uint32_t VAR_2)
{
 uint32_t VAR_3 = 1u << VAR_1;
 uint32_t VAR_4 = 0;
 bool VAR_5 = 1;

 if (VAR_2 > 31) {
  VAR_2 -= 32;
  VAR_5 = 0;
 }

 if (!(VAR_0->crypto_services & VAR_3))
  return 0;

 switch (VAR_1) {
 case 130:
  if (VAR_5)
   VAR_4 = VAR_0->cipher_algo_l;
  else
   VAR_4 = VAR_0->cipher_algo_h;
  break;

 case 129:
  VAR_4 = VAR_0->hash_algo;
  break;

 case 128:
  if (VAR_5)
   VAR_4 = VAR_0->mac_algo_l;
  else
   VAR_4 = VAR_0->mac_algo_h;
  break;

 case 131:
  VAR_4 = VAR_0->aead_algo;
  break;
 }

 if (!(VAR_4 & (1u << VAR_2)))
  return 0;

 return 1;
}
