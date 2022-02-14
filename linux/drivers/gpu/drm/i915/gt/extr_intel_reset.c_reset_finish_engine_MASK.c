
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* finish ) (struct intel_engine_cs*) ;} ;
struct intel_engine_cs {int uncore; TYPE_1__ reset; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_engine_cs*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct intel_engine_cs*) ;

__attribute__((used)) static void FUNC_3(struct intel_engine_cs *VAR_1)
{
 VAR_1->reset.finish(VAR_1);
 FUNC_1(VAR_1->uncore, VAR_0);

 FUNC_0(VAR_1);
}
