
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 char* FUNC_1 (struct clk_hw*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static long FUNC_3(struct clk_hw *VAR_0, unsigned long VAR_1,
 unsigned long *VAR_2)
{
 unsigned long VAR_3;
 unsigned VAR_4, VAR_5, VAR_6;
 const char *VAR_7 = FUNC_1(VAR_0);
 unsigned VAR_8 = (FUNC_2(VAR_7, "mem") == 0) ? 3 : 4;

 VAR_3 = *VAR_2;
 VAR_4 = VAR_3 / VAR_1;

 if (VAR_4 < 2)
  VAR_4 = 2;
 if (VAR_4 > FUNC_0(VAR_8 + 1))
  VAR_4 = FUNC_0(VAR_8 + 1);

 VAR_5 = (VAR_4 >> 1) - 1;
 VAR_6 = VAR_4 - VAR_5 - 2;

 return VAR_3 / (VAR_5 + VAR_6 + 2);
}
