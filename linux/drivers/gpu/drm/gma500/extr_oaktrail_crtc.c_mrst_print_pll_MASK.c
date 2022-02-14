
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gma_clock_t {int p2; int p1; int n; int m2; int m1; int m; int dot; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct gma_clock_t *VAR_0)
{
 FUNC_0("dotclock=%d,  m=%d, m1=%d, m2=%d, n=%d, p1=%d, p2=%d\n",
    VAR_0->dot, VAR_0->m, VAR_0->m1, VAR_0->m2, VAR_0->n,
    VAR_0->p1, VAR_0->p2);
}
