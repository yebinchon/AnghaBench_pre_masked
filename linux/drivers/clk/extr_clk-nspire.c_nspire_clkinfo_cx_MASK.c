
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nspire_clk_info {int base_clock; int base_cpu_ratio; int base_ahb_ratio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(u32 VAR_6, struct nspire_clk_info *VAR_7)
{
 if (FUNC_0(VAR_6, VAR_4))
  VAR_7->base_clock = 48 * VAR_5;
 else
  VAR_7->base_clock = 6 * FUNC_0(VAR_6, VAR_2) * VAR_5;

 VAR_7->base_cpu_ratio = FUNC_0(VAR_6, VAR_0) * FUNC_0(VAR_6, VAR_3);
 VAR_7->base_ahb_ratio = VAR_7->base_cpu_ratio * (FUNC_0(VAR_6, VAR_1) + 1);
}
