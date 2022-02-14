
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_object {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct nvkm_object*,void*,int) ;
 int FUNC_1 (struct nvkm_object*,void*,int) ;
 int FUNC_2 (struct nvkm_object*,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_object *VAR_1, u32 VAR_2, void *VAR_3, u32 VAR_4)
{
 FUNC_2(VAR_1, "fermi mthd %08x\n", VAR_2);
 switch (VAR_2) {
 case 129:
  return FUNC_0(VAR_1, VAR_3, VAR_4);
 case 128:
  return FUNC_1(VAR_1, VAR_3, VAR_4);
 default:
  break;
 }
 return -VAR_0;
}
