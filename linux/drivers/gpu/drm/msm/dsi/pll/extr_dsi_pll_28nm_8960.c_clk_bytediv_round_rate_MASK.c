
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_hw*) ;
 unsigned long FUNC_1 (int ,unsigned long) ;
 unsigned int FUNC_2 (unsigned long) ;

__attribute__((used)) static long FUNC_3(struct clk_hw *VAR_0, unsigned long VAR_1,
       unsigned long *VAR_2)
{
 unsigned long VAR_3;
 unsigned int VAR_4;

 VAR_4 = FUNC_2(VAR_1);

 VAR_3 = VAR_1 * VAR_4;
 *VAR_2 = FUNC_1(FUNC_0(VAR_0), VAR_3);

 return *VAR_2 / VAR_4;
}
