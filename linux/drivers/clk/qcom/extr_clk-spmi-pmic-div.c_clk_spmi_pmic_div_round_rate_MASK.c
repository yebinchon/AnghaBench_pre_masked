
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 unsigned int FUNC_0 (unsigned long,unsigned long) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;

__attribute__((used)) static long FUNC_3(struct clk_hw *VAR_0, unsigned long VAR_1,
      unsigned long *VAR_2)
{
 unsigned int VAR_3, VAR_4;

 VAR_3 = FUNC_0(*VAR_2, VAR_1);
 VAR_4 = FUNC_2(VAR_3);
 VAR_3 = FUNC_1(VAR_4);

 return *VAR_2 / VAR_3;
}
