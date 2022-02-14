
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_9__ {scalar_t__ length; int flags; int type; } ;
struct TYPE_7__ {scalar_t__ space_id; } ;
struct acpi_lpit_native {TYPE_3__ header; TYPE_1__ residency_counter; } ;
struct TYPE_8__ {int address; } ;
struct TYPE_10__ {TYPE_2__ gaddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*,struct acpi_lpit_native*) ;
 TYPE_4__ VAR_2 ;
 TYPE_4__ VAR_3 ;

__attribute__((used)) static void FUNC_1(u64 VAR_4, u64 VAR_5)
{
 while (VAR_4 + sizeof(struct acpi_lpit_native) <= VAR_5) {
  struct acpi_lpit_native *VAR_6 = (struct acpi_lpit_native *)VAR_4;

  if (!VAR_6->header.type && !VAR_6->header.flags) {
   if (VAR_6->residency_counter.space_id == VAR_1 &&
       !VAR_3.gaddr.address) {
    FUNC_0(&VAR_3, VAR_6);
   } else if (VAR_6->residency_counter.space_id == VAR_0 &&
       !VAR_2.gaddr.address) {
    FUNC_0(&VAR_2, VAR_6);
   }
  }
  VAR_4 += VAR_6->header.length;
 }
}
