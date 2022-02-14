
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* prepare ) (struct intel_engine_cs*) ;} ;
struct intel_engine_cs {TYPE_1__ reset; int uncore; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct intel_engine_cs*) ;

__attribute__((used)) static void FUNC_2(struct intel_engine_cs *VAR_1)
{







 FUNC_0(VAR_1->uncore, VAR_0);
 VAR_1->reset.prepare(VAR_1);
}
