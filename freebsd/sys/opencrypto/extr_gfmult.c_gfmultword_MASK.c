
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct gf128table {int dummy; } ;
struct gf128 {int* v; } ;


 struct gf128 FUNC_0 (struct gf128,struct gf128) ;
 struct gf128 FUNC_1 (struct gf128table*,unsigned int) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static struct gf128
FUNC_2(uint64_t VAR_1, struct gf128 VAR_2, struct gf128table *VAR_3)
{
 struct gf128 VAR_4;
 unsigned VAR_5;
 unsigned VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 64; VAR_7 += 4) {
  VAR_5 = VAR_1 % 16;


  VAR_4 = FUNC_1(VAR_3, VAR_5);


  VAR_6 = VAR_2.v[1] % 16;
  VAR_2.v[1] = (VAR_2.v[1] >> 4) | (VAR_2.v[0] % 16) << 60;
  VAR_2.v[0] >>= 4;
  VAR_2.v[0] ^= (uint64_t)VAR_0[VAR_6] << (64 - 16);

  VAR_1 >>= 4;

  VAR_2 = FUNC_0(VAR_2, VAR_4);
 }

 return VAR_2;
}
