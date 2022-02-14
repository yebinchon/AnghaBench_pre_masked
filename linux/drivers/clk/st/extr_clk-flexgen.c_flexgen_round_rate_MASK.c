
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_1, unsigned long VAR_2,
       unsigned long *VAR_3)
{
 unsigned long VAR_4;


 VAR_4 = FUNC_0(*VAR_3, VAR_2);

 if (FUNC_1(VAR_1) & VAR_0) {
  *VAR_3 = VAR_2 * VAR_4;
  return VAR_2;
 }

 return *VAR_3 / VAR_4;
}
