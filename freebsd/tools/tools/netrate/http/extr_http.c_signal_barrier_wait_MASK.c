
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* hwd; } ;
struct TYPE_3__ {scalar_t__ hwd_start_signal_barrier; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static void
FUNC_3(void)
{


 if (FUNC_1(VAR_0, VAR_3) == VAR_1)
  FUNC_0(-1, "signal");
 while (1) {
  FUNC_2(100);
  if (VAR_4->hwd[VAR_2].hwd_start_signal_barrier)
   break;
 }
}
