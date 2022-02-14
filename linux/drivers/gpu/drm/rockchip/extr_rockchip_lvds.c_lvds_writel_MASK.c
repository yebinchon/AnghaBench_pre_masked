
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rockchip_lvds {scalar_t__ output; TYPE_1__* soc_data; scalar_t__ regs; } ;
struct TYPE_2__ {scalar_t__ ch1_offset; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct rockchip_lvds *VAR_1, u32 VAR_2, u32 VAR_3)
{
 FUNC_0(VAR_3, VAR_1->regs + VAR_2);
 if (VAR_1->output == VAR_0)
  return;
 FUNC_0(VAR_3, VAR_1->regs + VAR_2 + VAR_1->soc_data->ch1_offset);
}
