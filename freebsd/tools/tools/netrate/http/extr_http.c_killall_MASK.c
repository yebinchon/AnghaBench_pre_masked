
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* hwd; } ;
struct TYPE_3__ {scalar_t__ hwd_pid; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static void
FUNC_1(void)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2->hwd[VAR_3].hwd_pid != 0)
   FUNC_0(VAR_2->hwd[VAR_3].hwd_pid, VAR_0);
 }
}
