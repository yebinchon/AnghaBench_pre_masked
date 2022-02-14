
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int csdev; int sticky_enable; scalar_t__ boot_enable; } ;


 int FUNC_0 (int ) ;
 TYPE_1__** VAR_0 ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_1)
{
 if (!VAR_0[VAR_1])
  return 0;

 if (VAR_0[VAR_1]->boot_enable && !VAR_0[VAR_1]->sticky_enable)
  FUNC_0(VAR_0[VAR_1]->csdev);
 return 0;
}
