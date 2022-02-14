
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct p8_ghash_desc_ctx {scalar_t__ shash; } ;
struct p8_ghash_ctx {int key; int htable; } ;
typedef int be128 ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,int const*,unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__,int ,int const*,unsigned int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static inline void FUNC_10(struct p8_ghash_ctx *VAR_1,
      struct p8_ghash_desc_ctx *VAR_2,
      const u8 *VAR_3, unsigned int VAR_4)
{
 if (FUNC_0()) {
  FUNC_8();
  FUNC_6();
  FUNC_3();
  FUNC_4(VAR_2->shash, VAR_1->htable,
    VAR_3, VAR_4);
  FUNC_2();
  FUNC_7();
  FUNC_9();
 } else {
  while (VAR_4 >= VAR_0) {
   FUNC_1((u8 *)VAR_2->shash, VAR_3, VAR_0);
   FUNC_5((be128 *)VAR_2->shash, &VAR_1->key);
   VAR_4 -= VAR_0;
   VAR_3 += VAR_0;
  }
 }
}
