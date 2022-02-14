
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
struct sha256_state {unsigned int count; } ;
typedef int sha256_block_fn ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct shash_desc*,int const*,unsigned int,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sha256_state* FUNC_5 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_6(struct shash_desc *VAR_4, const u8 *VAR_5,
         unsigned int VAR_6)
{
 struct sha256_state *VAR_7 = FUNC_5(VAR_4);

 if (!FUNC_1())
  return FUNC_4(VAR_4, VAR_5, VAR_6,
    (sha256_block_fn *)VAR_2);

 while (VAR_6 > 0) {
  unsigned int VAR_8 = VAR_6;






  if (FUNC_0(VAR_0) &&
      VAR_8 + VAR_7->count % VAR_1 > VAR_1)
   VAR_8 = VAR_1 -
    VAR_7->count % VAR_1;

  FUNC_2();
  FUNC_4(VAR_4, VAR_5, VAR_8,
          (sha256_block_fn *)VAR_3);
  FUNC_3();
  VAR_5 += VAR_8;
  VAR_6 -= VAR_8;
 }
 return 0;
}
