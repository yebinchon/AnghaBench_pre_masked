
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gf128table {int* a; int* b; int* c; int* d; } ;
struct gf128 {int* v; } ;


 struct gf128 FUNC_0 (int ,int ) ;
 struct gf128 FUNC_1 (struct gf128,struct gf128) ;
 struct gf128 FUNC_2 (struct gf128) ;
 size_t* VAR_0 ;

void
FUNC_3(struct gf128 VAR_1, struct gf128table *VAR_2)
{
 struct gf128 VAR_3[16];
 int VAR_4;

 VAR_3[0] = FUNC_0(0, 0);
 VAR_3[1] = VAR_1;

 for (VAR_4 = 2; VAR_4 < 16; VAR_4 += 2) {
  VAR_3[VAR_4] = FUNC_2(VAR_3[VAR_4 / 2]);
  VAR_3[VAR_4 + 1] = FUNC_1(VAR_3[VAR_4], VAR_1);
 }

 for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
  VAR_2->a[VAR_0[VAR_4]] = VAR_3[VAR_4].v[0] >> 32;
  VAR_2->b[VAR_0[VAR_4]] = VAR_3[VAR_4].v[0];
  VAR_2->c[VAR_0[VAR_4]] = VAR_3[VAR_4].v[1] >> 32;
  VAR_2->d[VAR_0[VAR_4]] = VAR_3[VAR_4].v[1];
 }
}
