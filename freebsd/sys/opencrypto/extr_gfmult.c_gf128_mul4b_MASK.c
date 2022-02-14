
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct gf128table4 {int dummy; } ;
struct gf128 {int * v; } ;


 struct gf128 FUNC_0 (int ,int ) ;
 struct gf128 FUNC_1 (struct gf128,struct gf128) ;
 struct gf128 FUNC_2 (int const*) ;
 struct gf128 FUNC_3 (int ,int ,int ,int ,struct gf128,struct gf128table4*) ;

struct gf128
FUNC_4(struct gf128 VAR_0, const uint8_t *VAR_1, struct gf128table4 *VAR_2)
{
 struct gf128 VAR_3, VAR_4, VAR_5, VAR_6;
 struct gf128 VAR_7;

 VAR_7 = FUNC_0(0, 0);

 VAR_3 = FUNC_1(VAR_0, FUNC_2(&VAR_1[0*16]));
 VAR_4 = FUNC_2(&VAR_1[1*16]);
 VAR_5 = FUNC_2(&VAR_1[2*16]);
 VAR_6 = FUNC_2(&VAR_1[3*16]);

 VAR_7 = FUNC_3(VAR_3.v[1], VAR_4.v[1], VAR_5.v[1], VAR_6.v[1], VAR_7, VAR_2);
 VAR_7 = FUNC_3(VAR_3.v[0], VAR_4.v[0], VAR_5.v[0], VAR_6.v[0], VAR_7, VAR_2);

 return VAR_7;
}
