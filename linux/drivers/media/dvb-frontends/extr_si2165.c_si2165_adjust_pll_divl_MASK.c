
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct si2165_state {unsigned int sys_clk; unsigned int fvco_hz; } ;


 int VAR_0 ;
 int FUNC_0 (struct si2165_state*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct si2165_state *VAR_1, u8 VAR_2)
{
 VAR_1->sys_clk = VAR_1->fvco_hz / (VAR_2 * 2u);
 return FUNC_0(VAR_1, VAR_0, VAR_2);
}
