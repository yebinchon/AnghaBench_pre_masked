
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_ec {int lock; TYPE_1__* curr; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct acpi_ec *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3 = 0;

 FUNC_0(&VAR_1->lock, VAR_2);
 if (VAR_1->curr && (VAR_1->curr->flags & VAR_0))
  VAR_3 = 1;
 FUNC_1(&VAR_1->lock, VAR_2);
 return VAR_3;
}
