
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pll_rate_tbl {int mode; int m; unsigned int n; int p; } ;



__attribute__((used)) static unsigned long FUNC_0(struct pll_rate_tbl *VAR_0,
  unsigned long VAR_1, int VAR_2, unsigned long *VAR_3)
{
 unsigned long VAR_4 = VAR_1;
 unsigned int VAR_5;

 VAR_5 = VAR_0[VAR_2].mode ? 256 : 1;
 VAR_4 = (((2 * VAR_4 / 10000) * VAR_0[VAR_2].m) / (VAR_5 * VAR_0[VAR_2].n));

 if (VAR_3)
  *VAR_3 = (VAR_4 / (1 << VAR_0[VAR_2].p)) * 10000;

 return VAR_4 * 10000;
}
