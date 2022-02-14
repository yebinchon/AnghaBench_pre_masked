
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct op_system_config {int mmcr0; int mmcr1; scalar_t__ enable_user; scalar_t__ enable_kernel; } ;
struct op_counter_config {scalar_t__ count; int enabled; } ;
struct TYPE_2__ {int num_pmcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int,...) ;
 scalar_t__* VAR_6 ;

__attribute__((used)) static int FUNC_1(struct op_counter_config *VAR_7,
      struct op_system_config *VAR_8,
      int VAR_9)
{
 int VAR_10;
 for (VAR_10 = 0; VAR_10 < VAR_3->num_pmcs; VAR_10++)
  if (!VAR_7[VAR_10].enabled) {
   VAR_8->mmcr0 &= ~(0x1UL << VAR_10);
   VAR_8->mmcr0 &= ~(0x1UL << (VAR_10+12));
   FUNC_0("turned off counter %u\n", VAR_10);
  }

 if (VAR_8->enable_kernel)
  VAR_8->mmcr0 |= VAR_2 | VAR_0;
 else
  VAR_8->mmcr0 &= ~(VAR_2 | VAR_0);

 if (VAR_8->enable_user)
  VAR_8->mmcr0 |= VAR_1;
 else
  VAR_8->mmcr0 &= ~VAR_1;






 VAR_4 = VAR_8->mmcr0;
 VAR_5 = VAR_8->mmcr1;
 FUNC_0("mmcr0_val inited to %016lx\n", VAR_8->mmcr0);
 FUNC_0("mmcr1_val inited to %016lx\n", VAR_8->mmcr1);

 for (VAR_10 = 0; VAR_10 < VAR_3->num_pmcs; VAR_10++) {

  VAR_6[VAR_10] = (0x1UL << 39) - VAR_7[VAR_10].count;
  FUNC_0("reset_value for pmc%u inited to 0x%llx\n",
     VAR_10, VAR_6[VAR_10]);
 }

 return 0;
}
