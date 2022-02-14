
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union aegis_block {int dummy; } aegis_block ;
typedef int u8 ;
struct aegis_state {int dummy; } ;


 scalar_t__ FUNC_0 (int const*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct aegis_state*,union aegis_block const*) ;
 int FUNC_2 (struct aegis_state*,int const*) ;

__attribute__((used)) static void FUNC_3(struct aegis_state *VAR_1,
          const u8 *VAR_2, unsigned int VAR_3)
{
 if (FUNC_0(VAR_2)) {
  const union aegis_block *VAR_4 =
    (const union aegis_block *)VAR_2;

  while (VAR_3 >= VAR_0) {
   FUNC_1(VAR_1, VAR_4);

   VAR_3 -= VAR_0;
   VAR_4++;
  }
 } else {
  while (VAR_3 >= VAR_0) {
   FUNC_2(VAR_1, VAR_2);

   VAR_3 -= VAR_0;
   VAR_2 += VAR_0;
  }
 }
}
