
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ space_id; int bit_width; int address; } ;
struct lpit_residency_info {int frequency; TYPE_1__ gaddr; int iomem_addr; } ;
struct acpi_lpit_native {int counter_frequency; TYPE_1__ residency_counter; } ;
struct TYPE_12__ {int flags; } ;
struct TYPE_11__ {TYPE_2__* dev_root; } ;
struct TYPE_10__ {int attr; } ;
struct TYPE_9__ {int attr; } ;
struct TYPE_8__ {int kobj; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_6__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int *,char*) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_2(struct lpit_residency_info *VAR_8,
     struct acpi_lpit_native *VAR_9)
{
 VAR_8->frequency = VAR_9->counter_frequency ?
    VAR_9->counter_frequency : VAR_7 * 1000;
 if (!VAR_8->frequency)
  VAR_8->frequency = 1;

 VAR_8->gaddr = VAR_9->residency_counter;
 if (VAR_8->gaddr.space_id == VAR_1) {
  VAR_8->iomem_addr = FUNC_0(VAR_8->gaddr.address,
         VAR_8->gaddr.bit_width / 8);
  if (!VAR_8->iomem_addr)
   return;

  if (!(VAR_3.flags & VAR_2))
   return;


  FUNC_1(&VAR_4.dev_root->kobj,
     &VAR_6.attr,
     "cpuidle");
 } else if (VAR_8->gaddr.space_id == VAR_0) {
  if (!(VAR_3.flags & VAR_2))
   return;


  FUNC_1(&VAR_4.dev_root->kobj,
     &VAR_5.attr,
     "cpuidle");
 }
}
