
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gf128table4 {int dummy; } ;
struct gf128 {int * v; } ;


 struct gf128 FUNC_0 (int ,int ) ;
 struct gf128 FUNC_1 (int ,int ,int ,int ,struct gf128,struct gf128table4*) ;

struct gf128
FUNC_2(struct gf128 VAR_0, struct gf128 VAR_1, struct gf128 VAR_2, struct gf128 VAR_3,
    struct gf128table4 *VAR_4)
{
 struct gf128 VAR_5;

 VAR_5 = FUNC_0(0, 0);

 VAR_5 = FUNC_1(VAR_0.v[1], VAR_1.v[1], VAR_2.v[1], VAR_3.v[1], VAR_5, VAR_4);
 VAR_5 = FUNC_1(VAR_0.v[0], VAR_1.v[0], VAR_2.v[0], VAR_3.v[0], VAR_5, VAR_4);

 return VAR_5;
}
