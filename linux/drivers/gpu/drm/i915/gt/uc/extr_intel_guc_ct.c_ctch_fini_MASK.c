
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc_ct_channel {int vma; int enabled; } ;
struct intel_guc {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct intel_guc *VAR_1,
        struct intel_guc_ct_channel *VAR_2)
{
 FUNC_0(VAR_2->enabled);

 FUNC_1(&VAR_2->vma, VAR_0);
}
