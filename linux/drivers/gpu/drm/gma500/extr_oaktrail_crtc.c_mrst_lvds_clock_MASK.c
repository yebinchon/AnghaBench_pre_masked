
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gma_clock_t {int dot; int m; int p1; } ;



__attribute__((used)) static void FUNC_0(int VAR_0, struct gma_clock_t *VAR_1)
{
 VAR_1->dot = (VAR_0 * VAR_1->m) / (14 * VAR_1->p1);
}
