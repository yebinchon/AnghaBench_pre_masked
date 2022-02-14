
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int start; scalar_t__ active; int total; } ;
struct intel_engine_cs {TYPE_1__ stats; } ;
typedef int ktime_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static ktime_t FUNC_3(struct intel_engine_cs *VAR_0)
{
 ktime_t VAR_1 = VAR_0->stats.total;





 if (VAR_0->stats.active)
  VAR_1 = FUNC_0(VAR_1,
      FUNC_2(FUNC_1(), VAR_0->stats.start));

 return VAR_1;
}
