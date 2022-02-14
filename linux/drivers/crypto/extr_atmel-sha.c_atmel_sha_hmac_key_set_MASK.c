
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct atmel_sha_hmac_key {int valid; unsigned int keylen; int buffer; int keydup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atmel_sha_hmac_key*) ;
 int FUNC_1 (int const*,unsigned int,int ) ;
 int FUNC_2 (int ,int const*,unsigned int) ;

__attribute__((used)) static inline int FUNC_3(struct atmel_sha_hmac_key *VAR_2,
      const u8 *VAR_3,
      unsigned int VAR_4)
{
 FUNC_0(VAR_2);

 if (VAR_4 > sizeof(VAR_2->buffer)) {
  VAR_2->keydup = FUNC_1(VAR_3, VAR_4, VAR_1);
  if (!VAR_2->keydup)
   return -VAR_0;

 } else {
  FUNC_2(VAR_2->buffer, VAR_3, VAR_4);
 }

 VAR_2->valid = 1;
 VAR_2->keylen = VAR_4;
 return 0;
}
