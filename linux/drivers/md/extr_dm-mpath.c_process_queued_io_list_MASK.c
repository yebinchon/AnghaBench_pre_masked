
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct multipath {scalar_t__ queue_mode; int process_queued_bios; TYPE_1__* ti; } ;
struct TYPE_2__ {int table; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct multipath *VAR_3)
{
 if (VAR_3->queue_mode == VAR_1)
  FUNC_0(FUNC_1(VAR_3->ti->table));
 else if (VAR_3->queue_mode == VAR_0)
  FUNC_2(VAR_2, &VAR_3->process_queued_bios);
}
