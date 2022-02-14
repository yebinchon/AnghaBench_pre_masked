
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct parser_exec_state {size_t ring_id; TYPE_1__* workload; } ;
struct TYPE_4__ {int mi_user_interrupt; } ;
struct TYPE_3__ {int pending_events; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct parser_exec_state*,int ) ;
 int FUNC_1 (struct parser_exec_state*,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct parser_exec_state *VAR_2)
{
 FUNC_2(VAR_1[VAR_2->ring_id].mi_user_interrupt,
   VAR_2->workload->pending_events);
 FUNC_1(VAR_2, FUNC_0(VAR_2, 0), VAR_0);
 return 0;
}
