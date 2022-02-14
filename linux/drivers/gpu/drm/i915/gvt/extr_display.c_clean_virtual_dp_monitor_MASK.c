
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu_port {int * dpcd; int * edid; } ;
struct intel_vgpu {int dummy; } ;


 struct intel_vgpu_port* FUNC_0 (struct intel_vgpu*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct intel_vgpu *VAR_0, int VAR_1)
{
 struct intel_vgpu_port *VAR_2 = FUNC_0(VAR_0, VAR_1);

 FUNC_1(VAR_2->edid);
 VAR_2->edid = ((void*)0);

 FUNC_1(VAR_2->dpcd);
 VAR_2->dpcd = ((void*)0);
}
