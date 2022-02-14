
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* reset ) (struct intel_engine_cs*,int) ;} ;
struct intel_engine_cs {int serial; TYPE_1__ reset; } ;


 int FUNC_0 (struct intel_engine_cs*,int) ;

__attribute__((used)) static inline void FUNC_1(struct intel_engine_cs *VAR_0,
     bool VAR_1)
{
 if (VAR_0->reset.reset)
  VAR_0->reset.reset(VAR_0, VAR_1);
 VAR_0->serial++;
}
