
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_vgpu {int id; } ;
struct TYPE_4__ {scalar_t__ hypervisor_type; } ;
struct TYPE_3__ {int * va; scalar_t__ mapped; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_3 (struct intel_vgpu*,int) ;
 TYPE_1__* FUNC_4 (struct intel_vgpu*) ;

void FUNC_5(struct intel_vgpu *VAR_4)
{
 FUNC_2("vgpu%d: clean vgpu opregion\n", VAR_4->id);

 if (!FUNC_4(VAR_4)->va)
  return;

 if (VAR_3.hypervisor_type == VAR_1) {
  if (FUNC_4(VAR_4)->mapped)
   FUNC_3(VAR_4, 0);
 } else if (VAR_3.hypervisor_type == VAR_0) {

 }
 FUNC_0((unsigned long)FUNC_4(VAR_4)->va,
     FUNC_1(VAR_2));

 FUNC_4(VAR_4)->va = ((void*)0);

}
