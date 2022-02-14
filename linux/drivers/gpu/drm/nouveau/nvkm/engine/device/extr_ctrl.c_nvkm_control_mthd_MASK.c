
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_control {int dummy; } ;


 int VAR_0 ;



 struct nvkm_control* FUNC_0 (struct nvkm_object*) ;
 int FUNC_1 (struct nvkm_control*,void*,int) ;
 int FUNC_2 (struct nvkm_control*,void*,int) ;
 int FUNC_3 (struct nvkm_control*,void*,int) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_object *VAR_1, u32 VAR_2, void *VAR_3, u32 VAR_4)
{
 struct nvkm_control *VAR_5 = FUNC_0(VAR_1);
 switch (VAR_2) {
 case 129:
  return FUNC_2(VAR_5, VAR_3, VAR_4);
 case 130:
  return FUNC_1(VAR_5, VAR_3, VAR_4);
 case 128:
  return FUNC_3(VAR_5, VAR_3, VAR_4);
 default:
  break;
 }
 return -VAR_0;
}
