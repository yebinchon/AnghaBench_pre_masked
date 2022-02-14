
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
typedef int sha256_transform_fn ;
typedef int sha256_block_fn ;


 int FUNC_0 (struct shash_desc*,int const*,unsigned int,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct shash_desc*,int *) ;
 int FUNC_5 (struct shash_desc*,int const*,unsigned int,int *) ;
 int FUNC_6 (struct shash_desc*,int *) ;

__attribute__((used)) static int FUNC_7(struct shash_desc *VAR_0, const u8 *VAR_1,
       unsigned int VAR_2, u8 *VAR_3, sha256_transform_fn *VAR_4)
{
 if (!FUNC_1())
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

 FUNC_2();
 if (VAR_2)
  FUNC_5(VAR_0, VAR_1, VAR_2,
          (sha256_block_fn *)VAR_4);
 FUNC_4(VAR_0, (sha256_block_fn *)VAR_4);
 FUNC_3();

 return FUNC_6(VAR_0, VAR_3);
}
