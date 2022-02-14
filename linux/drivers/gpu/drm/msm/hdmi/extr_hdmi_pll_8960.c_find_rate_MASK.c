
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pll_rate {unsigned long rate; } ;


 int FUNC_0 (struct pll_rate const*) ;
 struct pll_rate const* VAR_0 ;

__attribute__((used)) static const struct pll_rate *FUNC_1(unsigned long VAR_1)
{
 int VAR_2;

 for (VAR_2 = 1; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_1 > VAR_0[VAR_2].rate)
   return &VAR_0[VAR_2 - 1];

 return &VAR_0[VAR_2 - 1];
}
