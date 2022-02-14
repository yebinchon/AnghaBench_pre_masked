
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu {int id; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (struct intel_vgpu*,unsigned int) ;
 int FUNC_2 (struct intel_vgpu*,unsigned int,void*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct intel_vgpu *VAR_1, unsigned int VAR_2,
  void *VAR_3, unsigned int VAR_4)
{
 bool VAR_5;

 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_5 = FUNC_1(VAR_1, VAR_2) & VAR_0;

 FUNC_0("vgpu%d: %s VGA mode\n", VAR_1->id,
   VAR_5 ? "Disable" : "Enable");
 return 0;
}
