
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gma_clock_t {int m; int m1; int m2; int p; int p1; int p2; int vco; int n; int dot; } ;



__attribute__((used)) static void FUNC_0(int VAR_0, struct gma_clock_t *VAR_1)
{
 VAR_1->m = 5 * (VAR_1->m1 + 2) + (VAR_1->m2 + 2);
 VAR_1->p = VAR_1->p1 * VAR_1->p2;
 VAR_1->vco = VAR_0 * VAR_1->m / (VAR_1->n + 2);
 VAR_1->dot = VAR_1->vco / VAR_1->p;
}
