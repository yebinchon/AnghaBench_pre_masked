
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icst_vco {int dummy; } ;
struct clk_icst {scalar_t__ ctype; int params; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (unsigned long,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 long FUNC_1 (int ,struct icst_vco) ;
 struct icst_vco FUNC_2 (int ,unsigned long) ;
 struct clk_icst* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_4(struct clk_hw *VAR_5, unsigned long VAR_6,
       unsigned long *VAR_7)
{
 struct clk_icst *VAR_8 = FUNC_3(VAR_5);
 struct icst_vco VAR_9;

 if (VAR_8->ctype == VAR_0 ||
     VAR_8->ctype == VAR_3) {
  if (VAR_6 <= 12000000)
   return 12000000;
  if (VAR_6 >= 160000000)
   return 160000000;

  return FUNC_0(VAR_6, 1000000) * 1000000;
 }

 if (VAR_8->ctype == VAR_4) {
  if (VAR_6 <= 6000000)
   return 6000000;
  if (VAR_6 >= 66000000)
   return 66000000;

  return FUNC_0(VAR_6, 500000) * 500000;
 }

 if (VAR_8->ctype == VAR_2) {

  if (VAR_6 <= 3000000)
   return 3000000;
  if (VAR_6 >= 50000000)
   return 5000000;

  return FUNC_0(VAR_6, 250000) * 250000;
 }

 if (VAR_8->ctype == VAR_1) {




  if (VAR_6 <= 25000000 || VAR_6 < 29000000)
   return 25000000;

  return 33000000;
 }

 VAR_9 = FUNC_2(VAR_8->params, VAR_6);
 return FUNC_1(VAR_8->params, VAR_9);
}
