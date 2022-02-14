
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nspire_clk_info {int base_clock; int base_cpu_ratio; int base_ahb_ratio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(u32 VAR_5, struct nspire_clk_info *VAR_6)
{
 if (FUNC_0(VAR_5, VAR_3))
  VAR_6->base_clock = 27 * VAR_4;
 else
  VAR_6->base_clock = (300 - 6 * FUNC_0(VAR_5, VAR_1)) * VAR_4;

 VAR_6->base_cpu_ratio = FUNC_0(VAR_5, VAR_0) * 2;
 VAR_6->base_ahb_ratio = VAR_6->base_cpu_ratio * (FUNC_0(VAR_5, VAR_2) + 1);
}
