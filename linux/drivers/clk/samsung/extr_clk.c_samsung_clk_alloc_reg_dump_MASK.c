
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_clk_reg_dump {unsigned long offset; } ;


 int VAR_0 ;
 struct samsung_clk_reg_dump* FUNC_0 (unsigned long,int,int ) ;

struct samsung_clk_reg_dump *FUNC_1(
      const unsigned long *VAR_1,
      unsigned long VAR_2)
{
 struct samsung_clk_reg_dump *VAR_3;
 unsigned int VAR_4;

 VAR_3 = FUNC_0(VAR_2, sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4)
  VAR_3[VAR_4].offset = VAR_1[VAR_4];

 return VAR_3;
}
