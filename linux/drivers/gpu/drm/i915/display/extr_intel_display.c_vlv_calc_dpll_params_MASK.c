
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpll {int m; int m1; int m2; int p; int p1; int p2; scalar_t__ n; int vco; int dot; } ;


 void* FUNC_0 (int,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(int VAR_0, struct dpll *VAR_1)
{
 VAR_1->m = VAR_1->m1 * VAR_1->m2;
 VAR_1->p = VAR_1->p1 * VAR_1->p2;
 if (FUNC_1(VAR_1->n == 0 || VAR_1->p == 0))
  return 0;
 VAR_1->vco = FUNC_0(VAR_0 * VAR_1->m, VAR_1->n);
 VAR_1->dot = FUNC_0(VAR_1->vco, VAR_1->p);

 return VAR_1->dot / 5;
}
