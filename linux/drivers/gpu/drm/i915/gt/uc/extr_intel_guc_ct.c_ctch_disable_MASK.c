
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc_ct_channel {int enabled; int owner; } ;
struct intel_guc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct intel_guc*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct intel_guc *VAR_2,
    struct intel_guc_ct_channel *VAR_3)
{
 FUNC_0(!VAR_3->enabled);

 VAR_3->enabled = 0;

 FUNC_1(VAR_2,
     VAR_3->owner,
     VAR_1);
 FUNC_1(VAR_2,
     VAR_3->owner,
     VAR_0);
}
