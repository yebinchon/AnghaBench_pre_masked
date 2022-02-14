
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kv_pl {scalar_t__ sclk; scalar_t__ vddc_index; scalar_t__ ds_divider_index; scalar_t__ force_nbp_state; } ;



__attribute__((used)) static inline bool FUNC_0(const struct kv_pl *VAR_0,
      const struct kv_pl *VAR_1)
{
 return ((VAR_0->sclk == VAR_1->sclk) &&
    (VAR_0->vddc_index == VAR_1->vddc_index) &&
    (VAR_0->ds_divider_index == VAR_1->ds_divider_index) &&
    (VAR_0->force_nbp_state == VAR_1->force_nbp_state));
}
