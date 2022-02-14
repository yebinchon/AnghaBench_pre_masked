
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_disp_func {int dummy; } ;
struct nvkm_disp {int engine; int conn; int outp; int ior; int head; struct nvkm_disp_func const* func; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct nvkm_device*,int,int,int *) ;

int
FUNC_2(const struct nvkm_disp_func *VAR_1, struct nvkm_device *VAR_2,
        int VAR_3, struct nvkm_disp *VAR_4)
{
 VAR_4->func = VAR_1;
 FUNC_0(&VAR_4->head);
 FUNC_0(&VAR_4->ior);
 FUNC_0(&VAR_4->outp);
 FUNC_0(&VAR_4->conn);
 return FUNC_1(&VAR_0, VAR_2, VAR_3, 1, &VAR_4->engine);
}
