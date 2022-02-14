
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpll {int n; int m1; int m2; } ;



__attribute__((used)) static u32 FUNC_0(struct dpll *VAR_0)
{
 return VAR_0->n << 16 | VAR_0->m1 << 8 | VAR_0->m2;
}
