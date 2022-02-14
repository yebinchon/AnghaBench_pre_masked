
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sdvo {int hotplug_active; } ;
struct intel_encoder {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_sdvo*,int ,int *,int) ;
 struct intel_sdvo* FUNC_1 (struct intel_encoder*) ;

__attribute__((used)) static void FUNC_2(struct intel_encoder *VAR_1)
{
 struct intel_sdvo *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2, VAR_0,
        &VAR_2->hotplug_active, 2);
}
