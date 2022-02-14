
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct op_x86_model_spec {int event_mask; } ;
struct op_counter_config {int unit_mask; int extra; scalar_t__ kernel; scalar_t__ user; int event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

u64 FUNC_0(struct op_x86_model_spec const *VAR_6,
      struct op_counter_config *VAR_7)
{
 u64 VAR_8 = 0;
 u16 VAR_9 = (u16)VAR_7->event;

 VAR_8 |= VAR_2;
 VAR_8 |= VAR_7->user ? VAR_5 : 0;
 VAR_8 |= VAR_7->kernel ? VAR_4 : 0;
 VAR_8 |= (VAR_7->unit_mask & 0xFF) << 8;
 VAR_7->extra &= (VAR_3 |
      VAR_1 |
      VAR_0);
 VAR_8 |= VAR_7->extra;
 VAR_9 &= VAR_6->event_mask ? VAR_6->event_mask : 0xFF;
 VAR_8 |= VAR_9 & 0xFF;
 VAR_8 |= (u64)(VAR_9 & 0x0F00) << 24;

 return VAR_8;
}
