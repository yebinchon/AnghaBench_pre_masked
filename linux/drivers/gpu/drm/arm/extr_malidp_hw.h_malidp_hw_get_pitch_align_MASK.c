
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct malidp_hw_device {TYPE_2__* hw; } ;
struct TYPE_3__ {int bus_align_bytes; } ;
struct TYPE_4__ {TYPE_1__ map; } ;



__attribute__((used)) static inline u8 FUNC_0(struct malidp_hw_device *VAR_0, bool VAR_1)
{




 if (VAR_0->hw->map.bus_align_bytes == 8)
  return 8;
 else
  return VAR_0->hw->map.bus_align_bytes << (VAR_1 ? 2 : 0);
}
