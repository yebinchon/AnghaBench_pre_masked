
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_vgpu {int id; int * hws_pga; int gvt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,unsigned int) ;
 int FUNC_1 (char*,unsigned int,...) ;
 int FUNC_2 (struct intel_vgpu*,int ,int ) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (struct intel_vgpu*,unsigned int,int *,unsigned int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct intel_vgpu *VAR_3, unsigned int VAR_4,
  void *VAR_5, unsigned int VAR_6)
{
 u32 VAR_7 = *(u32 *)VAR_5;
 int VAR_8 = FUNC_3(VAR_3->gvt, VAR_4);

 if (!FUNC_2(VAR_3, VAR_7, VAR_1)) {
  FUNC_1("write invalid HWSP address, reg:0x%x, value:0x%x\n",
         VAR_4, VAR_7);
  return -VAR_0;
 }





 if (FUNC_5(VAR_8 < 0 || VAR_8 >= VAR_2)) {
  FUNC_1("access unknown hardware status page register:0x%x\n",
        VAR_4);
  return -VAR_0;
 }
 VAR_3->hws_pga[VAR_8] = VAR_7;
 FUNC_0("VM(%d) write: 0x%x to HWSP: 0x%x\n",
       VAR_3->id, VAR_7, VAR_4);

 return FUNC_4(VAR_3, VAR_4, &VAR_7, VAR_6);
}
