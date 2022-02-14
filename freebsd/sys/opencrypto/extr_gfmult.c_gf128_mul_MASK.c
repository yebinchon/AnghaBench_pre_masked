
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gf128table {int dummy; } ;
struct gf128 {int * v; } ;


 struct gf128 FUNC_0 (int ,int ) ;
 struct gf128 FUNC_1 (int ,struct gf128,struct gf128table*) ;

struct gf128
FUNC_2(struct gf128 VAR_0, struct gf128table *VAR_1)
{
 struct gf128 VAR_2;

 VAR_2 = FUNC_0(0, 0);

 VAR_2 = FUNC_1(VAR_0.v[1], VAR_2, VAR_1);
 VAR_2 = FUNC_1(VAR_0.v[0], VAR_2, VAR_1);

 return VAR_2;
}
