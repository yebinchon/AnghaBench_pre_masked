
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
typedef int sha1_block_fn ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct shash_desc*,int *) ;
 int FUNC_4 (struct shash_desc*,int const*,unsigned int,int *) ;
 int FUNC_5 (struct shash_desc*,int *) ;
 int FUNC_6 (struct shash_desc*,int const*,unsigned int,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_7(struct shash_desc *VAR_1, const u8 *VAR_2,
      unsigned int VAR_3, u8 *VAR_4)
{
 if (!FUNC_0())
  return FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4);

 FUNC_1();
 if (VAR_3)
  FUNC_4(VAR_1, VAR_2, VAR_3,
        (sha1_block_fn *)VAR_0);
 FUNC_3(VAR_1, (sha1_block_fn *)VAR_0);
 FUNC_2();

 return FUNC_5(VAR_1, VAR_4);
}
