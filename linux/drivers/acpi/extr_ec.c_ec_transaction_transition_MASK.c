
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_ec {int flags; TYPE_1__* curr; } ;
struct TYPE_2__ {unsigned long flags; scalar_t__ command; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct acpi_ec*) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline void FUNC_2(struct acpi_ec *VAR_8, unsigned long VAR_9)
{
 VAR_8->curr->flags |= VAR_9;
 if (VAR_8->curr->command == VAR_2) {
  if (VAR_7 == VAR_5 &&
      VAR_9 == VAR_1)
   FUNC_0(VAR_8);
  if (VAR_7 == VAR_4 &&
      VAR_9 == VAR_0)
   FUNC_0(VAR_8);
  if (VAR_7 == VAR_3 &&
      VAR_9 == VAR_0)
   FUNC_1(VAR_6, &VAR_8->flags);
 }
}
