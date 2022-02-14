
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ control; scalar_t__ ext_addr; scalar_t__ addr; scalar_t__ clock; scalar_t__ soft_reset; } ;
struct mv64xxx_i2c_data {int state; TYPE_1__ reg_offsets; scalar_t__ reg_base; int freq_n; int freq_m; scalar_t__ offload_enabled; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct mv64xxx_i2c_data *VAR_7)
{
 if (VAR_7->offload_enabled) {
  FUNC_2(0, VAR_7->reg_base + VAR_0);
  FUNC_2(0, VAR_7->reg_base + VAR_3);
  FUNC_2(0, VAR_7->reg_base +
   VAR_1);
  FUNC_2(0, VAR_7->reg_base +
   VAR_2);
 }

 FUNC_2(0, VAR_7->reg_base + VAR_7->reg_offsets.soft_reset);
 FUNC_2(FUNC_0(VAR_7->freq_m) | FUNC_1(VAR_7->freq_n),
  VAR_7->reg_base + VAR_7->reg_offsets.clock);
 FUNC_2(0, VAR_7->reg_base + VAR_7->reg_offsets.addr);
 FUNC_2(0, VAR_7->reg_base + VAR_7->reg_offsets.ext_addr);
 FUNC_2(VAR_5 | VAR_4,
  VAR_7->reg_base + VAR_7->reg_offsets.control);
 VAR_7->state = VAR_6;
}
