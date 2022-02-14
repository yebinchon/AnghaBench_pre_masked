
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* hts; } ;
struct TYPE_3__ {scalar_t__ hts_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static void
FUNC_1(void)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2->hts[VAR_3].hts_pid != 0)
   (void)FUNC_0(VAR_2->hts[VAR_3].hts_pid, VAR_0);
 }
}
