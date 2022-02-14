
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_outp {int dummy; } ;
struct nvkm_disp {int dummy; } ;
struct dcb_output {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_outp* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct nvkm_disp*,int,struct dcb_output*,struct nvkm_outp*) ;

int
FUNC_2(struct nvkm_disp *VAR_3, int VAR_4, struct dcb_output *VAR_5,
       struct nvkm_outp **VAR_6)
{
 if (!(*VAR_6 = FUNC_0(sizeof(**VAR_6), VAR_1)))
  return -VAR_0;
 return FUNC_1(&VAR_2, VAR_3, VAR_4, VAR_5, *VAR_6);
}
