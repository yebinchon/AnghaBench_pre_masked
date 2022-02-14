
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_vgpu {int dummy; } ;
struct TYPE_4__ {int hypervisor_type; } ;
struct TYPE_3__ {int * gfn; int mapped; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (struct intel_vgpu*,int) ;
 TYPE_1__* FUNC_3 (struct intel_vgpu*) ;

int FUNC_4(struct intel_vgpu *VAR_4, u32 VAR_5)
{

 int VAR_6, VAR_7 = 0;

 FUNC_0("emulate opregion from kernel\n");

 switch (VAR_3.hypervisor_type) {
 case 129:
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
   FUNC_3(VAR_4)->gfn[VAR_6] = (VAR_5 >> VAR_2) + VAR_6;
  break;
 case 128:




  if (FUNC_3(VAR_4)->mapped)
   FUNC_2(VAR_4, 0);

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
   FUNC_3(VAR_4)->gfn[VAR_6] = (VAR_5 >> VAR_2) + VAR_6;

  VAR_7 = FUNC_2(VAR_4, 1);
  break;
 default:
  VAR_7 = -VAR_0;
  FUNC_1("not supported hypervisor\n");
 }

 return VAR_7;
}
