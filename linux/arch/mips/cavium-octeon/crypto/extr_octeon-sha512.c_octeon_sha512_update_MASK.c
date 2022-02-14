
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
struct sha512_state {unsigned int* count; } ;
struct octeon_cop2_state {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct sha512_state*,int const*,unsigned int) ;
 int FUNC_1 (struct shash_desc*,int const*,unsigned int) ;
 int FUNC_2 (struct octeon_cop2_state*,unsigned long) ;
 unsigned long FUNC_3 (struct octeon_cop2_state*) ;
 int FUNC_4 (struct sha512_state*) ;
 int FUNC_5 (struct sha512_state*) ;
 struct sha512_state* FUNC_6 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_7(struct shash_desc *VAR_1, const u8 *VAR_2,
    unsigned int VAR_3)
{
 struct sha512_state *VAR_4 = FUNC_6(VAR_1);
 struct octeon_cop2_state VAR_5;
 unsigned long VAR_6;






 if ((VAR_4->count[0] % VAR_0) + VAR_3 < VAR_0)
  return FUNC_1(VAR_1, VAR_2, VAR_3);

 VAR_6 = FUNC_3(&VAR_5);
 FUNC_5(VAR_4);

 FUNC_0(VAR_4, VAR_2, VAR_3);

 FUNC_4(VAR_4);
 FUNC_2(&VAR_5, VAR_6);

 return 0;
}
