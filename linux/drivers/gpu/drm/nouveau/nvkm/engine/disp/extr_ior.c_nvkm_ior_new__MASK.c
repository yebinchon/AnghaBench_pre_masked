
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_ior_func {int dummy; } ;
struct nvkm_ior {int type; int id; int head; int name; struct nvkm_disp* disp; struct nvkm_ior_func const* func; } ;
struct nvkm_disp {int ior; } ;
typedef enum nvkm_ior_type { ____Placeholder_nvkm_ior_type } nvkm_ior_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_ior*,char*) ;
 struct nvkm_ior* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 char** VAR_2 ;
 int FUNC_3 (int ,int,char*,char*,int) ;

int
FUNC_4(const struct nvkm_ior_func *VAR_3, struct nvkm_disp *VAR_4,
       enum nvkm_ior_type VAR_5, int VAR_6)
{
 struct nvkm_ior *VAR_7;
 if (!(VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1)))
  return -VAR_0;
 VAR_7->func = VAR_3;
 VAR_7->disp = VAR_4;
 VAR_7->type = VAR_5;
 VAR_7->id = VAR_6;
 FUNC_3(VAR_7->name, sizeof(VAR_7->name), "%s-%d",
   VAR_2[VAR_7->type], VAR_7->id);
 FUNC_2(&VAR_7->head, &VAR_4->ior);
 FUNC_0(VAR_7, "ctor");
 return 0;
}
