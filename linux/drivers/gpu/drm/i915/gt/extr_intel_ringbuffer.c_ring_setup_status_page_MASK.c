
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vma; } ;
struct intel_engine_cs {TYPE_1__ status_page; } ;


 int FUNC_0 (struct intel_engine_cs*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct intel_engine_cs*,int ) ;
 int FUNC_3 (struct intel_engine_cs*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct intel_engine_cs *VAR_0)
{
 FUNC_2(VAR_0, FUNC_1(VAR_0->status_page.vma));
 FUNC_3(VAR_0, ~0u);

 FUNC_0(VAR_0);
}
