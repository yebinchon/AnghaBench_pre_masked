
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct atmel_sha_hmac_key {unsigned int keylen; int * buffer; int * keydup; int valid; } ;



__attribute__((used)) static inline bool FUNC_0(const struct atmel_sha_hmac_key *VAR_0,
       const u8 **VAR_1,
       unsigned int *VAR_2)
{
 if (!VAR_0->valid)
  return 0;

 *VAR_2 = VAR_0->keylen;
 *VAR_1 = (VAR_0->keydup) ? VAR_0->keydup : VAR_0->buffer;
 return 1;
}
