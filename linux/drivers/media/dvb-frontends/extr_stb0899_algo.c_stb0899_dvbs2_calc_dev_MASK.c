
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stb0899_internal {int master_clk; int srate; } ;
struct stb0899_state {struct stb0899_internal internal; } ;



__attribute__((used)) static u32 FUNC_0(struct stb0899_state *VAR_0)
{
 struct stb0899_internal *VAR_1 = &VAR_0->internal;
 u32 VAR_2, VAR_3, VAR_4, VAR_5;

 VAR_2 = (VAR_1->master_clk * 2) / (5 * VAR_1->srate);
 VAR_2 = (VAR_2 == 0) ? 1 : VAR_2;

 VAR_4 = VAR_1->master_clk / 1000;
 VAR_5 = VAR_1->srate / 1000;
 VAR_3 = (512 * VAR_4) / (2 * VAR_2 * VAR_5);

 return VAR_3;
}
