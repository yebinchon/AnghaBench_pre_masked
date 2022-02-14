
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int minor_features2; } ;
struct etnaviv_gpu {int base_rate_core; int freq_scale; int base_rate_shader; int clk_shader; int clk_core; TYPE_1__ identity; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct etnaviv_gpu*,int ) ;
 int FUNC_3 (struct etnaviv_gpu*,int ) ;

__attribute__((used)) static void FUNC_4(struct etnaviv_gpu *VAR_3)
{
 if (VAR_3->identity.minor_features2 &
     VAR_2) {
  FUNC_1(VAR_3->clk_core,
        VAR_3->base_rate_core >> VAR_3->freq_scale);
  FUNC_1(VAR_3->clk_shader,
        VAR_3->base_rate_shader >> VAR_3->freq_scale);
 } else {
  unsigned int VAR_4 = 1 << (6 - VAR_3->freq_scale);
  u32 VAR_5 = FUNC_3(VAR_3, VAR_0);

  VAR_5 &= ~VAR_1;
  VAR_5 |= FUNC_0(VAR_4);
  FUNC_2(VAR_3, VAR_5);
 }
}
