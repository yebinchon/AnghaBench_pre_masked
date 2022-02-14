
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_disp {int dummy; } ;
struct nvkm_conn {int dummy; } ;
struct nvbios_connE {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_conn* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_disp*,int,struct nvbios_connE*,struct nvkm_conn*) ;

int
FUNC_2(struct nvkm_disp *VAR_2, int VAR_3, struct nvbios_connE *VAR_4,
       struct nvkm_conn **VAR_5)
{
 if (!(*VAR_5 = FUNC_0(sizeof(**VAR_5), VAR_1)))
  return -VAR_0;
 FUNC_1(VAR_2, VAR_3, VAR_4, *VAR_5);
 return 0;
}
