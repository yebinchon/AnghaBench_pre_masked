
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct clk_factor_table {unsigned long mul; int val; scalar_t__ div; } ;


 int FUNC_0 (struct clk_factor_table const*) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_2(const struct clk_factor_table *VAR_0,
   unsigned long VAR_1, unsigned long VAR_2)
{
 const struct clk_factor_table *VAR_3;
 int VAR_4 = -1;
 u64 VAR_5;

 for (VAR_3 = VAR_0; VAR_3->div; VAR_3++) {
  VAR_5 = VAR_2 * VAR_3->mul;
  FUNC_1(VAR_5, VAR_3->div);

  if ((unsigned long)VAR_5 <= VAR_1) {
   VAR_4 = VAR_3->val;
   break;
  }
 }

 if (VAR_4 == -1)
  VAR_4 = FUNC_0(VAR_0);

 return VAR_4;
}
