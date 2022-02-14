
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct intel_engine_cs {TYPE_1__ active; int name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct intel_engine_cs*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct intel_engine_cs *VAR_0, bool VAR_1)
{
 unsigned long VAR_2;

 FUNC_0("%s\n", VAR_0->name);

 FUNC_2(&VAR_0->active.lock, VAR_2);

 FUNC_1(VAR_0, VAR_1);

 FUNC_3(&VAR_0->active.lock, VAR_2);
}
