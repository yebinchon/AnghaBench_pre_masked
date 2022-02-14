
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_vgpu {int id; TYPE_1__* gvt; } ;
struct TYPE_2__ {int dev_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct intel_vgpu*,unsigned int,void*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct intel_vgpu *VAR_2,
  unsigned int VAR_3, void *VAR_4, unsigned int VAR_5)
{
 u32 VAR_6 = (*(u32 *)VAR_4) & VAR_1;

 if (FUNC_0(VAR_2->gvt->dev_priv) <= 10) {
  if (VAR_6 == VAR_1)
   FUNC_1("vgpu%d: ips enabled\n", VAR_2->id);
  else if (!VAR_6)
   FUNC_1("vgpu%d: ips disabled\n", VAR_2->id);
  else {




   FUNC_2("Unsupported IPS setting %x, cannot enable 64K gtt.\n",
         VAR_6);
   return -VAR_0;
  }
 }

 FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
 return 0;
}
