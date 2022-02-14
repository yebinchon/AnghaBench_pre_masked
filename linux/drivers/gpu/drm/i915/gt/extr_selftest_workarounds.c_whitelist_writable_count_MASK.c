
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int count; TYPE_1__* list; } ;
struct intel_engine_cs {TYPE_2__ whitelist; } ;
struct TYPE_3__ {int reg; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct intel_engine_cs *VAR_0)
{
 int VAR_1 = VAR_0->whitelist.count;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->whitelist.count; VAR_2++) {
  u32 VAR_3 = FUNC_0(VAR_0->whitelist.list[VAR_2].reg);

  if (FUNC_1(VAR_3))
   VAR_1--;
 }

 return VAR_1;
}
