
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_execlists {int port_mask; int queue; int queue_priority_hint; int inflight; int active; int pending; } ;
struct intel_engine_cs {struct intel_engine_execlists execlists; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct intel_engine_execlists* const) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,int) ;

void FUNC_4(struct intel_engine_cs *VAR_3)
{
 struct intel_engine_execlists * const VAR_4 = &VAR_3->execlists;

 VAR_4->port_mask = 1;
 FUNC_0(!FUNC_2(FUNC_1(VAR_4)));
 FUNC_0(FUNC_1(VAR_4) > VAR_0);

 FUNC_3(VAR_4->pending, 0, sizeof(VAR_4->pending));
 VAR_4->active =
  FUNC_3(VAR_4->inflight, 0, sizeof(VAR_4->inflight));

 VAR_4->queue_priority_hint = VAR_1;
 VAR_4->queue = VAR_2;
}
