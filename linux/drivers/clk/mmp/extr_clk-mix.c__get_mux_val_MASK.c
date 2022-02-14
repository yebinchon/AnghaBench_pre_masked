
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_clk_mix {unsigned int* mux_table; } ;



__attribute__((used)) static unsigned int FUNC_0(struct mmp_clk_mix *VAR_0, unsigned int VAR_1)
{
 if (VAR_0->mux_table)
  return VAR_0->mux_table[VAR_1];

 return VAR_1;
}
