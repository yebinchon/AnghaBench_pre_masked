
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int finish; int reset; int prepare; } ;
struct TYPE_5__ {int func; } ;
struct TYPE_6__ {TYPE_2__ tasklet; } ;
struct intel_engine_cs {scalar_t__ irq_disable; scalar_t__ irq_enable; int flags; int cancel_requests; TYPE_1__ reset; int * unpark; int park; TYPE_3__ execlists; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct intel_engine_cs*) ;

__attribute__((used)) static void FUNC_2(struct intel_engine_cs *VAR_7)
{
 FUNC_1(VAR_7);

 VAR_7->execlists.tasklet.func = VAR_6;


 VAR_7->park = *(VAR_7->unpark = ((void*)0));

 VAR_7->reset.prepare = VAR_5;
 VAR_7->reset.reset = VAR_3;
 VAR_7->reset.finish = VAR_4;

 VAR_7->cancel_requests = VAR_2;

 VAR_7->flags &= ~VAR_1;
 VAR_7->flags |= VAR_0;







 FUNC_0(VAR_7->irq_enable || VAR_7->irq_disable);
}
