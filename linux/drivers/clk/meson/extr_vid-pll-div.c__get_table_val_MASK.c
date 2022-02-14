
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vid_pll_div {unsigned int shift_val; unsigned int shift_sel; } ;


 int FUNC_0 (struct vid_pll_div const*) ;
 struct vid_pll_div const* VAR_0 ;

__attribute__((used)) static const struct vid_pll_div *FUNC_1(unsigned int VAR_1,
      unsigned int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0 ; VAR_3 < FUNC_0(VAR_0) ; ++VAR_3) {
  if (VAR_0[VAR_3].shift_val == VAR_1 &&
      VAR_0[VAR_3].shift_sel == VAR_2)
   return &VAR_0[VAR_3];
 }

 return ((void*)0);
}
