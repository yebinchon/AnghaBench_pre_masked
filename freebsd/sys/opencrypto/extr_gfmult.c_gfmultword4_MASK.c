
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct gf128table4 {int * tbls; } ;
struct gf128 {int* v; } ;


 struct gf128 FUNC_0 (struct gf128,struct gf128) ;
 struct gf128 FUNC_1 (int *,unsigned int) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static struct gf128
FUNC_2(uint64_t VAR_1, uint64_t VAR_2, uint64_t VAR_3, uint64_t VAR_4,
    struct gf128 VAR_5, struct gf128table4 *VAR_6)
{
 struct gf128 VAR_7, VAR_8, VAR_9, VAR_10;
 unsigned VAR_11, VAR_12, VAR_13, VAR_14;
 unsigned VAR_15;
 int VAR_16;






 for (VAR_16 = 0; VAR_16 < 64; VAR_16 += 4) {
  VAR_11 = VAR_1 % 16;
  VAR_12 = VAR_2 % 16;
  VAR_13 = VAR_3 % 16;
  VAR_14 = VAR_4 % 16;


  VAR_7 = FUNC_1(&VAR_6->tbls[3], VAR_11);
  VAR_8 = FUNC_1(&VAR_6->tbls[2], VAR_12);
  VAR_9 = FUNC_1(&VAR_6->tbls[1], VAR_13);
  VAR_10 = FUNC_1(&VAR_6->tbls[0], VAR_14);


  VAR_15 = VAR_5.v[1] % 16;
  VAR_5.v[1] = (VAR_5.v[1] >> 4) | (VAR_5.v[0] % 16) << 60;
  VAR_5.v[0] >>= 4;
  VAR_5.v[0] ^= (uint64_t)VAR_0[VAR_15] << (64 - 16);

  VAR_1 >>= 4;
  VAR_2 >>= 4;
  VAR_3 >>= 4;
  VAR_4 >>= 4;

  VAR_5 = FUNC_0(VAR_5, FUNC_0(VAR_7, FUNC_0(VAR_8,
      FUNC_0(VAR_9, VAR_10))));
 }

 return VAR_5;
}
