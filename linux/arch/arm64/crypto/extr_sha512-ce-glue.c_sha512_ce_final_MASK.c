
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
typedef int sha512_block_fn ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct shash_desc*,int *) ;
 int FUNC_4 (struct shash_desc*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_5(struct shash_desc *VAR_2, u8 *VAR_3)
{
 if (!FUNC_0()) {
  FUNC_3(VAR_2,
    (sha512_block_fn *)VAR_0);
  return FUNC_4(VAR_2, VAR_3);
 }

 FUNC_1();
 FUNC_3(VAR_2, (sha512_block_fn *)VAR_1);
 FUNC_2();
 return FUNC_4(VAR_2, VAR_3);
}
