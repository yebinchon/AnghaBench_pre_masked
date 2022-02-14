
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fw; } ;
struct TYPE_3__ {int fw; } ;
struct intel_uc {TYPE_2__ guc; TYPE_1__ huc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct intel_uc*) ;
 scalar_t__ FUNC_2 (struct intel_uc*) ;

void FUNC_3(struct intel_uc *VAR_0)
{
 if (!FUNC_1(VAR_0))
  return;

 if (FUNC_2(VAR_0))
  FUNC_0(&VAR_0->huc.fw);

 FUNC_0(&VAR_0->guc.fw);
}
