
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
struct sha256_state {unsigned int count; } ;
typedef int sha256_block_fn ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct shash_desc*,int const*,unsigned int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct shash_desc*,int const*,unsigned int,int *) ;
 scalar_t__ VAR_1 ;
 struct sha256_state* FUNC_5 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_6(struct shash_desc *VAR_2, const u8 *VAR_3,
     unsigned int VAR_4)
{
 struct sha256_state *VAR_5 = FUNC_5(VAR_2);

 if (!FUNC_1() ||
     (VAR_5->count % VAR_0) + VAR_4 < VAR_0)
  return FUNC_0(VAR_2, VAR_3, VAR_4);

 FUNC_2();
 FUNC_4(VAR_2, VAR_3, VAR_4,
         (sha256_block_fn *)VAR_1);
 FUNC_3();

 return 0;
}
