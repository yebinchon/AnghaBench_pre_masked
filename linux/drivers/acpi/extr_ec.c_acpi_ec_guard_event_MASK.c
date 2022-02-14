
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_ec {int lock; TYPE_1__* curr; int flags; } ;
struct TYPE_2__ {scalar_t__ command; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static bool FUNC_3(struct acpi_ec *VAR_5)
{
 bool VAR_6 = 1;
 unsigned long VAR_7;

 FUNC_0(&VAR_5->lock, VAR_7);
 if (VAR_4 == VAR_2 ||
     VAR_4 == VAR_1 ||
     !FUNC_2(VAR_3, &VAR_5->flags) ||
     (VAR_5->curr && VAR_5->curr->command == VAR_0))
  VAR_6 = 0;
 FUNC_1(&VAR_5->lock, VAR_7);
 return VAR_6;
}
