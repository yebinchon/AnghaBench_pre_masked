
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union aegis_block {int const* bytes; } const aegis_block ;
typedef int const u8 ;
struct aegis_state {union aegis_block const* blocks; } ;


 scalar_t__ FUNC_0 (int const*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct aegis_state*,union aegis_block const*) ;
 int FUNC_2 (struct aegis_state*,int const*) ;
 int FUNC_3 (union aegis_block const*,union aegis_block const*) ;
 int FUNC_4 (union aegis_block const*,union aegis_block const*) ;
 int FUNC_5 (int const*,int const*,unsigned int) ;
 int FUNC_6 (int const*,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct aegis_state *VAR_1, u8 *VAR_2,
       const u8 *VAR_3, unsigned int VAR_4)
{
 union aegis_block VAR_5;

 if (FUNC_0(VAR_3) && FUNC_0(VAR_2)) {
  while (VAR_4 >= VAR_0) {
   union aegis_block *VAR_6 =
     (union aegis_block *)VAR_2;
   const union aegis_block *VAR_7 =
     (const union aegis_block *)VAR_3;

   VAR_5 = VAR_1->blocks[2];
   FUNC_3(&VAR_5, &VAR_1->blocks[3]);
   FUNC_4(&VAR_5, &VAR_1->blocks[4]);
   FUNC_4(&VAR_5, &VAR_1->blocks[1]);
   FUNC_4(&VAR_5, VAR_7);

   FUNC_1(VAR_1, VAR_7);

   *VAR_6 = VAR_5;

   VAR_4 -= VAR_0;
   VAR_3 += VAR_0;
   VAR_2 += VAR_0;
  }
 } else {
  while (VAR_4 >= VAR_0) {
   VAR_5 = VAR_1->blocks[2];
   FUNC_3(&VAR_5, &VAR_1->blocks[3]);
   FUNC_4(&VAR_5, &VAR_1->blocks[4]);
   FUNC_4(&VAR_5, &VAR_1->blocks[1]);
   FUNC_5(VAR_5.bytes, VAR_3, VAR_0);

   FUNC_2(VAR_1, VAR_3);

   FUNC_6(VAR_2, VAR_5.bytes, VAR_0);

   VAR_4 -= VAR_0;
   VAR_3 += VAR_0;
   VAR_2 += VAR_0;
  }
 }

 if (VAR_4 > 0) {
  union aegis_block VAR_8 = {};
  FUNC_6(VAR_8.bytes, VAR_3, VAR_4);

  VAR_5 = VAR_1->blocks[2];
  FUNC_3(&VAR_5, &VAR_1->blocks[3]);
  FUNC_4(&VAR_5, &VAR_1->blocks[4]);
  FUNC_4(&VAR_5, &VAR_1->blocks[1]);

  FUNC_1(VAR_1, &VAR_8);

  FUNC_4(&VAR_8, &VAR_5);

  FUNC_6(VAR_2, VAR_8.bytes, VAR_4);
 }
}
